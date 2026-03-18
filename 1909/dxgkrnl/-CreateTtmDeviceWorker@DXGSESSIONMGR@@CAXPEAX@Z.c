/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0183410
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C027773C (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  _QWORD *v15; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+60h] [rbp-18h]

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 74);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 152, 0LL);
  *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 905) )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    v7 = *(_QWORD **)(v3 + 176);
    if ( *v7 != v3 + 168 )
      __fastfail(3u);
    *(_QWORD *)this = v3 + 168;
    *((_QWORD *)this + 1) = v7;
    *v7 = this;
    *(_QWORD *)(v3 + 176) = this;
    v8 = *(_QWORD *)(v3 + 120);
    if ( v8 && *(_BYTE *)(v8 + 18488) )
    {
      v18 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v8 + 18624));
      v10 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v3 + 120));
      v14 = v10;
      if ( v10 < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
        v15[3] = *((unsigned int *)this + 20);
        v15[4] = *((_QWORD *)this + 8);
        v15[5] = **(unsigned int **)(v3 + 120);
        v15[6] = v14;
        WdLogEvent5_WdError(v15);
      }
      if ( v18 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  *(_QWORD *)(v3 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 152, 0LL);
  KeLeaveCriticalRegion();
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
