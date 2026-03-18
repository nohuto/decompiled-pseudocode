/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0211E00
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C01FB1F0 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002EE7C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002F3C4 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C020DD1C (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0212860 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 **v10; // r14
  unsigned int v11; // ecx
  DXGSHAREDPOWERINUSELISTOBJECT **v12; // r8
  char v13; // dl
  DXGSHAREDPOWERINUSELISTOBJECT *i; // rax
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT *v21; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v22; // rdx
  void *v23; // rcx
  struct _KTHREAD **v25; // [rsp+68h] [rbp+10h]
  unsigned __int16 v26; // [rsp+7Ah] [rbp+22h]

  v26 = HIWORD(a4);
  v25 = (struct _KTHREAD **)((char *)this + 408);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1408));
  v10 = (__int64 **)*((_QWORD *)this + 179);
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v9 = -1073741130;
    goto LABEL_34;
  }
  v11 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v26 + 1288);
  if ( v11 >= *((_DWORD *)a2 + 676) || *(_DWORD *)(520LL * v11 + *((_QWORD *)a2 + 320) + 208) != 7 )
  {
LABEL_33:
    v9 = -1073741811;
    goto LABEL_34;
  }
  while ( 1 )
  {
    if ( v10 == (__int64 **)((char *)this + 1432) || !v10 )
      goto LABEL_33;
    if ( v10[4] == (__int64 *)a2 && v10[3] == a3 )
      break;
    v10 = (__int64 **)*v10;
  }
  v12 = (DXGSHAREDPOWERINUSELISTOBJECT **)v10[8];
  v13 = 0;
  for ( i = *v12; ; i = *(DXGSHAREDPOWERINUSELISTOBJECT **)i )
  {
    v15 = 0LL;
    if ( i != (DXGSHAREDPOWERINUSELISTOBJECT *)v12 )
      v15 = i;
    if ( !v15 )
      break;
    if ( *((_DWORD *)v15 + 6) == a4 )
    {
      v13 = 1;
      break;
    }
  }
  if ( a5 )
  {
    if ( v13 )
      goto LABEL_34;
    v16 = operator new(0x20uLL, 0x4B677844u, PagedPool);
    if ( v16 )
    {
      v17 = 0LL;
      v16[2] = this;
      *v16 = 0LL;
      v16[1] = 0LL;
      *((_DWORD *)v16 + 6) = a4;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v16 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 6452LL;
      WdLogEvent5_WdLowResource(v18);
      v9 = -1073741801;
      goto LABEL_34;
    }
    v19 = v10[8];
    v20 = *v19;
    if ( *(__int64 **)(*v19 + 8) == v19 )
    {
      *v16 = v20;
      v16[1] = v19;
      *(_QWORD *)(v20 + 8) = v16;
      *v19 = (__int64)v16;
      DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
      goto LABEL_34;
    }
LABEL_32:
    __fastfail(3u);
  }
  if ( !v13 )
    goto LABEL_34;
  v21 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v15;
  if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v15 + 8LL) != v15 )
    goto LABEL_32;
  v22 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v15 + 1);
  if ( *v22 != v15 )
    goto LABEL_32;
  *v22 = v21;
  *((_QWORD *)v21 + 1) = v22;
  if ( v15 )
  {
    DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v15);
    operator delete(v23);
  }
  DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
LABEL_34:
  ExReleasePushLockSharedEx((char *)this + 1408, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v25);
  return v9;
}
