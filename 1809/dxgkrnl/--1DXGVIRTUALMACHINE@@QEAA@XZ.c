/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C022845C
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C003DAD8 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(void **this)
{
  _QWORD *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  char v4; // r8
  struct DXGGLOBAL *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = this + 1;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v4 = 0;
  v5 = Global;
  if ( *((struct _KTHREAD **)Global + 34) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 264));
    v4 = 1;
  }
  v6 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*((_DWORD *)v5 + 342);
  if ( v4 )
  {
    *((_QWORD *)v5 + 34) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v5 + 264, 0LL);
    KeLeaveCriticalRegion();
  }
  operator delete(this[16]);
}
