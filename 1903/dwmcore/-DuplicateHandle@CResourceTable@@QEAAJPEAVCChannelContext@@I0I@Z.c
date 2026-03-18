/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180040920
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003F580 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800401F8 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180040A08 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x180040F3C (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x18009C478 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqqxxqx @ 0x180179CEC (McTemplateU0qqqqxxqx.c)
 */

__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        struct CChannelContext *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  CResourceTable *v5; // r14
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v9; // ecx
  void *v10; // r10
  struct CResourceTable::HANDLE_ENTRY *v11; // rdi
  __int64 v12; // rbp
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rcx

  v5 = (CResourceTable *)*((_QWORD *)a2 + 3);
  Entry = CResourceTable::GetEntry(v5, a3);
  v11 = Entry;
  if ( Entry )
  {
    if ( *((void **)Entry + 1) == v10 )
    {
      v15 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467261, 0x15Eu, v10);
    }
    else
    {
      v12 = *((_QWORD *)a4 + 3);
      v13 = HANDLE_TABLE::AssignEntry((HANDLE_TABLE *)(v12 + 16), a5, *(_DWORD *)Entry);
      v15 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x168u, 0LL);
      }
      else
      {
        v16 = *(_QWORD *)(v12 + 40) + a5 * *(_DWORD *)(v12 + 24);
        *(_QWORD *)(v16 + 8) = 0LL;
        if ( v5 == (CResourceTable *)v12 )
          v11 = CResourceTable::GetEntry(v5, a3);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          McTemplateU0qqqqxxqx(
            a3,
            a5,
            *((_DWORD *)a2 + 4),
            a3,
            *((_DWORD *)a4 + 4),
            a5,
            a3,
            a5,
            *(_DWORD *)v16,
            *((_QWORD *)v11 + 1));
        v17 = *((_QWORD *)v11 + 1);
        *(_QWORD *)(v16 + 8) = v17;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        CResourceTable::CountResource(this, *(unsigned int *)v11);
      }
    }
  }
  else
  {
    v15 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467261, 0x15Du, v10);
  }
  return v15;
}
