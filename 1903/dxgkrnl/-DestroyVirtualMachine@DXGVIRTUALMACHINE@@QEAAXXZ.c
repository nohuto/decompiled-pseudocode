/*
 * XREFs of ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025D6D8
 * Callers:
 *     ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C004461C (-OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0044484 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025EC50 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(char *P)
{
  char *v2; // rsi
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v8[24]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v10[64]; // [rsp+50h] [rbp-58h] BYREF

  DXGVIRTUALMACHINE::ResetVirtualMachine((DXGVIRTUALMACHINE *)P, 1u);
  v2 = P + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(P + 64));
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *((_QWORD *)P + 9) = 0LL;
    ExReleasePushLockExclusiveEx(P + 64, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 == v2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    COREACCESS::COREACCESS((COREACCESS *)v10, *((struct DXGADAPTER *const *)v3 - 14));
    COREACCESS::AcquireShared((__int64)v10, 0xFFFFFFFF, 0LL);
    v5 = *((_QWORD *)v3 - 15);
    if ( v3[16] )
      v6 = *(_QWORD *)(v5 + 1504);
    else
      v6 = *(_QWORD *)(v5 + 1496);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)(v6 + 40));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v8, (struct _KTHREAD **)v3 - 9);
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*((_QWORD *)v3 - 16) + 16LL))((__int64 *)v3 - 16, 0LL, v7);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    COREACCESS::~COREACCESS((COREACCESS *)v10);
  }
  if ( P )
    DXGVIRTUALMACHINE::`scalar deleting destructor'((DXGVIRTUALMACHINE *)P);
}
