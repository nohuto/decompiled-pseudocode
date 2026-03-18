/*
 * XREFs of ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0012320
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

DXGADAPTERSTOPRESETLOCKSHARED *__fastcall DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        char a3)
{
  __int64 v5; // rbx

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  if ( a3 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *(_QWORD *)this = -1LL;
    v5 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5 + 120, 0LL);
    *((_BYTE *)this + 16) = 1;
  }
  return this;
}
