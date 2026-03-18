/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C0293B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C3D8 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024458 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C00497D8 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C005629C (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EB50 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F1F4 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0290D60 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int128 *a1)
{
  DxgkCompositionObject *v2; // rdi
  int NumStartedVirtualGpu; // r13d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD ***v23; // r15
  struct _KTHREAD **v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rax
  _BYTE v33[24]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v34[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v35; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = 767LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225659LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v35 = *a1;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    LODWORD(v14) = -1073741275;
    Global = DXGGLOBAL::GetGlobal(v16, v15);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v34, (struct _KTHREAD **)Global + 33);
    v23 = (struct _KTHREAD ***)((char *)DXGGLOBAL::GetGlobal(v19, v18) + 1320);
    v24 = *v23;
    while ( v24 != (struct _KTHREAD **)v23 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v33, v24 + 7);
      v26 = (__int64)v24[24] - v35;
      if ( !v26 )
        v26 = (__int64)v24[25] - *((_QWORD *)&v35 + 1);
      if ( !v26 )
      {
        v2 = DXGVIRTUALMACHINE::ReferenceVailObject(v24 - 1, v25);
        if ( v2 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v24 - 1);
          LODWORD(v14) = 0;
        }
        DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v33);
        break;
      }
      v24 = (struct _KTHREAD **)*v24;
      DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v33);
    }
    if ( (int)v14 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v27 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v27);
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v34);
    if ( (int)v14 < 0 )
      goto LABEL_28;
    if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v30 = DxgkCompositionObject::AccessCheck(v2);
      v14 = v30;
      if ( v30 < 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v29, v28, v31);
        *(_QWORD *)(v32 + 24) = v14;
        WdLogEvent5_WdWarning(v32);
      }
      if ( (int)v14 < 0 )
        goto LABEL_28;
    }
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33, v28);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v35, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
    DXGPROCESS::SetVailObject(Current, v2);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v35);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
LABEL_28:
    if ( !NumStartedVirtualGpu )
    {
      LODWORD(v14) = -1071775727;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28) + 24) = -1071775727LL;
    }
    if ( v2 )
      DxgkCompositionObject::Release(v2);
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  v13 = WdLogNewEntry5_WdError(v10, v9, v11);
  LODWORD(v14) = -1073741786;
  *(_QWORD *)(v13 + 24) = -1073741786LL;
  WdLogEvent5_WdError(v13);
  return (unsigned int)v14;
}
