/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C025DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002195C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C00427E8 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C004F170 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A2E4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C022A970 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C025AA7C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int128 *a1)
{
  DxgkCompositionObject *v2; // rdi
  int NumStartedVirtualGpu; // r13d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rcx
  struct DXGFASTMUTEX **Current; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD ***v19; // r15
  struct _KTHREAD **v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rax
  _BYTE v29[24]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v30[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF

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
  v31 = *a1;
  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    LODWORD(v12) = -1073741275;
    Global = DXGGLOBAL::GetGlobal(v13);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, (struct _KTHREAD **)Global + 33);
    v19 = (struct _KTHREAD ***)((char *)DXGGLOBAL::GetGlobal(v15) + 1352);
    v20 = *v19;
    while ( v20 != (struct _KTHREAD **)v19 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, v20 + 7);
      v21 = (__int64)v20[24] - v31;
      if ( !v21 )
        v21 = (__int64)v20[25] - *((_QWORD *)&v31 + 1);
      if ( !v21 )
      {
        v2 = DXGVIRTUALMACHINE::ReferenceVailObject(v20 - 1);
        if ( v2 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v20 - 1);
          LODWORD(v12) = 0;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
        break;
      }
      v20 = (struct _KTHREAD **)*v20;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    }
    if ( (int)v12 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v22 + 24) = (int)v12;
      WdLogEvent5_WdWarning(v22);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    if ( (int)v12 < 0 )
      goto LABEL_28;
    if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      v27 = DxgkCompositionObject::AccessCheck(v2);
      v12 = v27;
      if ( v27 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
        *(_QWORD *)(v28 + 24) = v12;
        WdLogEvent5_WdWarning(v28);
      }
      if ( (int)v12 < 0 )
        goto LABEL_28;
    }
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v29);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v31, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
    DXGPROCESS::SetVailObject((DXGPROCESS *)Current, v2);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v31);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
LABEL_28:
    if ( !NumStartedVirtualGpu )
    {
      LODWORD(v12) = -1071775727;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23, v25, v26) + 24) = -1071775727LL;
    }
    if ( v2 )
      DxgkCompositionObject::Release(v2);
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  v11 = WdLogNewEntry5_WdError(v9);
  LODWORD(v12) = -1073741786;
  *(_QWORD *)(v11 + 24) = -1073741786LL;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v12;
}
