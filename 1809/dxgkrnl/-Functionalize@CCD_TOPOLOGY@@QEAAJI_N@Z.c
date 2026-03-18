/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00C8064 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1C01373B0 (DxgkFunctionalizePathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00AEF34 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00AF5D0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0288084 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C0288AD0 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int8 a3)
{
  char v5; // r8
  bool v6; // di
  int active; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  _BYTE v24[64]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  unsigned __int8 v26; // [rsp+B0h] [rbp+18h] BYREF

  v26 = a3;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v24, 8u, 0);
  v6 = (*((_BYTE *)this + 84) & 1) == 0;
  if ( (*((_BYTE *)this + 84) & 1) == 0 )
  {
    active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v24, v5);
    v9 = active;
    if ( active < 0 )
    {
LABEL_27:
      v22 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v22 + 24) = v9;
      WdLogEvent5_WdError(v22);
      goto LABEL_29;
    }
    if ( active == 255 )
      v6 = 0;
  }
  if ( v6 )
  {
    if ( v25 )
      v10 = *(unsigned __int16 *)(v25 + 20);
    else
      v10 = 0LL;
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( (unsigned __int16)v10 <= v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)v24, a2, v5);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v26 = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v24, &v26);
      if ( !v26 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = *((_QWORD *)this + 8);
      v18 = v17 ? *(unsigned __int16 *)(v17 + 20) : 0LL;
      v19 = v25 ? *(_WORD *)(v25 + 20) : 0;
      if ( (_WORD)v18 != v19 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v24);
      v9 = v21;
      if ( v21 >= 0 )
      {
        LODWORD(v9) = 0;
        goto LABEL_29;
      }
    }
    goto LABEL_27;
  }
  LODWORD(v9) = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, v5);
LABEL_29:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v24);
  return (unsigned int)v9;
}
