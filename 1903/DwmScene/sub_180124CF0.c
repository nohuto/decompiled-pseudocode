/*
 * XREFs of sub_180124CF0 @ 0x180124CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801248EC @ 0x1801248EC (sub_1801248EC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180124CF0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD pExceptionObject[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
    std::_Throw_C_error(v3);
  if ( *(_BYTE *)(a1 + 112) )
  {
    sub_1801248EC(pExceptionObject, v4, v5);
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  v6 = Mtx_unlock(v2);
  if ( v6 )
    std::_Throw_C_error(v6);
}
