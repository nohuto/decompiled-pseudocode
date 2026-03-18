/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C02469D4
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1C022BB90 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0034D30 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C004205C (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C00426B4 (-RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0241368 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0246C18 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(DXGGLOBAL *this, DXGADAPTER *a2, __int64 *a3)
{
  unsigned int v6; // esi
  __int64 **v7; // rdi
  struct DXGSHAREDPOWERREGISTRATIONOBJECT ***v8; // rbx
  DXGSHAREDPOWERINUSELISTOBJECT **v9; // r14
  DXGSHAREDPOWERINUSELISTOBJECT *v10; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v12; // r8
  unsigned int v13; // r12d
  DXGSHAREDPOWERINUSELISTOBJECT **v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  PVOID *v17; // rcx
  void *v18; // rcx
  struct _KTHREAD **v20; // [rsp+50h] [rbp+8h]

  v20 = (struct _KTHREAD **)((char *)this + 408);
  v6 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1376));
  v7 = (__int64 **)*((_QWORD *)this + 175);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      v8 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)v7;
      if ( v7 == (__int64 **)((char *)this + 1400) || !v7 )
      {
        v6 = -1073741811;
        goto LABEL_19;
      }
      if ( v7[4] == (__int64 *)a2 && v7[3] == a3 )
        break;
      v7 = (__int64 **)*v7;
    }
    v9 = (DXGSHAREDPOWERINUSELISTOBJECT **)v7[8];
    v10 = *v9;
    while ( 1 )
    {
      v11 = v10;
      if ( v10 == (DXGSHAREDPOWERINUSELISTOBJECT *)v9 || !v10 )
        break;
      v12 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v10;
      v13 = *((_DWORD *)v10 + 6);
      v10 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v10;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v11 + 8LL) != v11
        || (v14 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v11 + 1), *v14 != v11) )
      {
        __fastfail(3u);
      }
      *v14 = v12;
      *((_QWORD *)v12 + 1) = v14;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v11);
      operator delete(v15);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v13);
    }
    DXGGLOBAL::RemoveListObjectFromSharedPowerList((KSPIN_LOCK *)this, v8);
    v17 = (PVOID *)v8[8];
    if ( v17 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v17, v16);
    DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)v8);
    operator delete(v18);
  }
  else
  {
    v6 = -1073741130;
  }
LABEL_19:
  *((_QWORD *)this + 173) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1376, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v20);
  return v6;
}
