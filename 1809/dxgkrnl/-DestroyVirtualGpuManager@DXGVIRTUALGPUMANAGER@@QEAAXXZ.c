/*
 * XREFs of ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C01DF210
 * Callers:
 *     ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x1C0035F30 (--_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(DXGVIRTUALGPUMANAGER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // r15
  char *v3; // rbx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 8);
  while ( v2 != (DXGVIRTUALGPUMANAGER *)((char *)this + 64) )
  {
    v3 = (char *)v2 - 112;
    v2 = *(DXGVIRTUALGPUMANAGER **)v2;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
    (**(void (__fastcall ***)(char *, __int64))v3)(v3, 1LL);
  }
  operator delete[](*((void **)this + 3));
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
}
