/*
 * XREFs of ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0277280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C027839C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDeviceWorker(CTTMDEVICE *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  CTTMDEVICE **v6; // rcx
  CTTMDEVICE **v7; // rax
  __int64 v8; // rax

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 74);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 152, 0LL);
  *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
  v6 = *(CTTMDEVICE ***)this;
  if ( *(CTTMDEVICE **)this == this )
  {
    v8 = WdLogNewEntry5_WdError(v6, v4, v5);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    if ( v6[1] != this || (v7 = (CTTMDEVICE **)*((_QWORD *)this + 1), *v7 != this) )
      __fastfail(3u);
    *v7 = (CTTMDEVICE *)v6;
    v6[1] = (CTTMDEVICE *)v7;
    *((_QWORD *)this + 1) = this;
    *(_QWORD *)this = this;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_BYTE *)this + 905) = 1;
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 4) )
    CTTMDEVICE::UnRegisterTtmDevice(this, 0);
  else
    operator delete(this);
  *(_QWORD *)(v3 + 160) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 152, 0LL);
  KeLeaveCriticalRegion();
}
