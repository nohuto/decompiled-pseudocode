/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C013B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0241B90 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 152, 0LL);
  *(_QWORD *)(v2 + 160) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 905) )
  {
    v6 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v4 = *(_QWORD **)(v2 + 176);
    if ( *v4 != v2 + 168 )
      __fastfail(3u);
    *(_QWORD *)this = v2 + 168;
    *((_QWORD *)this + 1) = v4;
    *v4 = this;
    *(_QWORD *)(v2 + 176) = this;
    v5 = *(_QWORD *)(v2 + 120);
    if ( v5 && *(_BYTE *)(v5 + 18488) )
    {
      v13 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v5 + 18624));
      v7 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v2 + 120));
      v9 = v7;
      if ( v7 < 0 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v10[3] = *((unsigned int *)this + 20);
        v10[4] = *((_QWORD *)this + 8);
        v10[5] = **(unsigned int **)(v2 + 120);
        v10[6] = v9;
        WdLogEvent5_WdError(v10);
      }
      if ( v13 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  *(_QWORD *)(v2 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 152, 0LL);
  KeLeaveCriticalRegion();
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
}
