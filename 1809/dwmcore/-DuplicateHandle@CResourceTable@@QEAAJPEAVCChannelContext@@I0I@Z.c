/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180099D88
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180099328 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800996F8 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180099E64 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x180099E94 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A0C4 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqqxxqx @ 0x1801575FC (McTemplateU0qqqqxxqx.c)
 */

__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        struct CChannelContext *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  CResourceTable *v5; // rsi
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v10; // ecx
  struct CResourceTable::HANDLE_ENTRY *v11; // rdi
  CResourceTable *v12; // r14
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  _DWORD *v21; // [rsp+98h] [rbp+10h] BYREF

  v5 = (CResourceTable *)*((_QWORD *)a2 + 3);
  v21 = 0LL;
  Entry = CResourceTable::GetEntry(v5, a3);
  v11 = Entry;
  if ( Entry )
  {
    if ( *((_QWORD *)Entry + 1) )
    {
      v12 = (CResourceTable *)*((_QWORD *)a4 + 3);
      v13 = a5;
      v14 = CResourceTable::AllocateEntryAtHandle(v12, a5, *(unsigned int *)Entry, &v21);
      v16 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x16Bu);
      }
      else
      {
        if ( v5 == v12 )
          v11 = CResourceTable::GetEntry(v5, a3);
        v17 = v21;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          McTemplateU0qqqqxxqx(
            a3,
            v13,
            *((_DWORD *)a2 + 4),
            a3,
            *((_DWORD *)a4 + 4),
            v13,
            a3,
            v13,
            *v21,
            *((_QWORD *)v11 + 1));
        v18 = *((_QWORD *)v11 + 1);
        *((_QWORD *)v17 + 1) = v18;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        CResourceTable::CountResource(this, *(unsigned int *)v11);
      }
    }
    else
    {
      v16 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467261, 0x161u);
    }
  }
  else
  {
    v16 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467261, 0x160u);
  }
  return v16;
}
