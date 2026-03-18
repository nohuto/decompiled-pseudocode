/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C012FE30
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C012FA90 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0010DF8 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C012FF50 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD *v8; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v10; // r14
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  char *v14; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-11h]
  _BYTE v16[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v18[40]; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 14) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3021LL;
    WdLogEvent5_WdAssertion(v6);
  }
  result = VidSchSetPriorityClassProcessX(this, a2, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 66) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 168, 0LL);
    *((_QWORD *)this + 22) = KeGetCurrentThread();
    v8 = (_QWORD *)*((_QWORD *)this + 34);
    v14 = (char *)this + 272;
    while ( 1 )
    {
      v15 = v8;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v14);
      v10 = Current;
      if ( !Current )
        break;
      v11 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v11, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) >= 0 && (*((_BYTE *)v10 + 1749) & 1) == 0 )
      {
        LOBYTE(v12) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 520LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v10 + 82),
          *((unsigned int *)this + 82),
          v12);
        v8 = v15;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
      v8 = (_QWORD *)*v8;
    }
    *((_QWORD *)this + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 168, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
