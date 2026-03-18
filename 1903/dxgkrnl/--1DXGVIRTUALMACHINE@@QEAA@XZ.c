/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C025D038
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0044484 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(void **this, __int64 a2)
{
  _QWORD *v3; // rdi
  struct DXGGLOBAL *Global; // rax
  char v5; // r8
  struct DXGGLOBAL *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx

  v3 = this + 1;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v5 = 0;
  v6 = Global;
  if ( *((struct _KTHREAD **)Global + 34) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 264));
    v5 = 1;
  }
  v7 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*((_DWORD *)v6 + 334);
  if ( v5 )
  {
    *((_QWORD *)v6 + 34) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 264, 0LL);
    KeLeaveCriticalRegion();
  }
  operator delete(this[16]);
}
