/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C013FA08
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013F130 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C013FB34 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  _QWORD *v7; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // r14
  __int64 v10; // rax
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-99h] BYREF
  char *v15; // [rsp+30h] [rbp-89h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-81h]
  _BYTE v17[8]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v18[64]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp-31h] BYREF

  v4 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 16LL) != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 3023LL;
    WdLogEvent5_WdAssertion(v10);
  }
  result = VidSchSetPriorityClassProcessX(this, v4, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 60) = v4;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
    *((_QWORD *)this + 21) = KeGetCurrentThread();
    v7 = (_QWORD *)*((_QWORD *)this + 31);
    v15 = (char *)this + 248;
    while ( 1 )
    {
      v16 = v7;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v15);
      v9 = Current;
      if ( !Current )
        break;
      v11 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v11, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v17, 0xFFFFFFFFLL, v12) >= 0
        && (*((_BYTE *)v9 + 1749) & 1) == 0 )
      {
        LOBYTE(v13) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 520LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v9 + 82),
          *((unsigned int *)this + 76),
          v13);
        v7 = v16;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v19);
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      if ( v14[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
      v7 = (_QWORD *)*v7;
    }
    *((_QWORD *)this + 21) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 160, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
