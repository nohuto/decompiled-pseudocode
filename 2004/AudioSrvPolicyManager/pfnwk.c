/*
 * XREFs of pfnwk @ 0x18000F5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall pfnwk(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  volatile signed __int32 *v9; // rbx

  v5 = Context[2];
  v6 = Mtx_lock((_Mtx_t)(v5 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( !*(_BYTE *)(v5 + 80) )
  {
    v7 = *(_QWORD *)(*Context + 56LL);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Mtx_unlock((_Mtx_t)(v5 + 88));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = (volatile signed __int32 *)Context[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  sub_180039D98(Context);
  CloseThreadpoolWork(Work);
}
