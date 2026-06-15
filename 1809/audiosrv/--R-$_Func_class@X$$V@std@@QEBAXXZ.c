/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800E01F4
 * Callers:
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x18010FFB0 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180114C98 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
