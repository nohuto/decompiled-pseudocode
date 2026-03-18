/*
 * XREFs of ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180056F80
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18004C5D4 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800570A8 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCBD8 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // r14d
  int ConnectionBatch; // eax
  unsigned int v7; // ecx
  struct UCE_RDP_HEADER *i; // rbx
  unsigned int v9; // ecx
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  struct UCE_RDP_HEADER *v17; // [rsp+78h] [rbp+48h] BYREF

  v16 = a3;
  v4 = 0;
  v5 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*((_QWORD *)this + 1), &v16, &v17);
  if ( ConnectionBatch < 0 )
  {
    v4 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ConnectionBatch | 0x10000000, 0xC2u, 0LL);
    return v4;
  }
  for ( i = v17; i; v17 = i )
  {
    v4 = 0;
    v15 = 0;
    if ( *(_DWORD *)i == 5 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_CHANNEL_OPENED_FOR_PROCESS,
          *((unsigned int *)i + 5));
      v13 = CComposition::OpenChannel(a2, *((_DWORD *)i + 4), *((_DWORD *)i + 5), *((_QWORD *)i + 3));
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, 0x193u, 0LL);
    }
    else if ( *(_DWORD *)i == 6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_CHANNEL_CLOSED_FOR_PROCESS,
          *((unsigned int *)i + 5));
      v14 = CComposition::CloseChannel(a2, *((_DWORD *)i + 4));
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v14, 0x1A0u, 0LL);
    }
    else
    {
      v9 = *(_DWORD *)i - 7;
      if ( *(_DWORD *)i == 7 )
      {
        v12 = CComposition::ProcessDataOnChannel(a2, i, &v15);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0x197u, 0LL);
      }
      else
      {
        if ( *(_DWORD *)i != 8 )
          goto LABEL_11;
        v10 = (*(__int64 (__fastcall **)(struct CComposition *, struct UCE_RDP_HEADER *, unsigned int *))(*(_QWORD *)a2 + 40LL))(
                a2,
                i,
                &v15);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x19Bu, 0LL);
      }
    }
    i = v17;
LABEL_11:
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v4, 0xC7u, 0LL);
      return v4;
    }
    i = (struct UCE_RDP_HEADER *)*((_QWORD *)i + 1);
    v5 += v15;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED, v5);
  return v4;
}
