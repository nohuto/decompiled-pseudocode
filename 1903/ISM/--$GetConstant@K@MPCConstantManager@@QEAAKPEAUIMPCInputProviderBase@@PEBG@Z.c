/*
 * XREFs of ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x18012DE3C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036FB0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<unsigned long>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  return MPCConstantManager::GetStaticConstant<unsigned long>(a1, v5, a3);
}
