/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C024627C
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C022BB30 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00347D8 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0034D30 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0241368 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0246C18 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        unsigned int a4,
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT *v24; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v25; // rdx
  void *v26; // rcx
  struct _KTHREAD **v28; // [rsp+68h] [rbp+10h]
  unsigned __int16 v29; // [rsp+7Ah] [rbp+22h]

  v29 = HIWORD(a4);
  v28 = (struct _KTHREAD **)((char *)this + 408);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1376));
  v10 = (__int64 **)*((_QWORD *)this + 175);
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v9 = -1073741130;
    goto LABEL_34;
  }
  v11 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v29 + 1304);
  if ( v11 >= *((_DWORD *)a2 + 684) || *(_DWORD *)(520LL * v11 + *((_QWORD *)a2 + 324) + 208) != 7 )
  {
LABEL_33:
    v9 = -1073741811;
    goto LABEL_34;
  }
  while ( 1 )
  {
    if ( v10 == (__int64 **)((char *)this + 1400) || !v10 )
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
    v16 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
    if ( v16 )
    {
      v18 = 0LL;
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
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 7282LL;
      WdLogEvent5_WdLowResource(v21);
      v9 = -1073741801;
      goto LABEL_34;
    }
    v22 = v10[8];
    v23 = *v22;
    if ( *(__int64 **)(*v22 + 8) == v22 )
    {
      *v16 = v23;
      v16[1] = v22;
      *(_QWORD *)(v23 + 8) = v16;
      *v22 = (__int64)v16;
      DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
      goto LABEL_34;
    }
LABEL_32:
    __fastfail(3u);
  }
  if ( !v13 )
    goto LABEL_34;
  v24 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v15;
  if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v15 + 8LL) != v15 )
    goto LABEL_32;
  v25 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v15 + 1);
  if ( *v25 != v15 )
    goto LABEL_32;
  *v25 = v24;
  *((_QWORD *)v24 + 1) = v25;
  if ( v15 )
  {
    DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v15);
    operator delete(v26);
  }
  DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
LABEL_34:
  ExReleasePushLockSharedEx((char *)this + 1376, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v28);
  return v9;
}
