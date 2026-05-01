/*
 * XREFs of Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_Exec @ 0x180296320
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_CancellationTokenCallback__lambda_be3e5d9dce35d2c8dbfa8485373731d5___::_Exec(
        __int64 a1)
{
  __int64 v1; // rdx
  __int128 v2; // rcx
  signed __int32 v3; // eax

  v1 = *(_QWORD *)(a1 + 200);
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v1 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v3 + 1, v3) )
      {
        v2 = *(_OWORD *)(a1 + 192);
        goto LABEL_3;
      }
    }
  }
  v2 = 0LL;
LABEL_3:
  if ( (_QWORD)v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v2 + 8LL))(v2, 0LL, 0LL, 0LL, v2 + 16);
  if ( *((_QWORD *)&v2 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v2 + 1));
}
