/*
 * XREFs of ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x18012DE7C
 * Callers:
 *     _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x1800365F0 (_lambda_73ee74375a7aa9a7d53c1e011ef1d674_--operator().c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<float>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  return MPCConstantManager::GetStaticConstant<float>(a1, v5, a3);
}
