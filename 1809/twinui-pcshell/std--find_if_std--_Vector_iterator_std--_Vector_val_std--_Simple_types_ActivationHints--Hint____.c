/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_49e7a17ad518dc57eac7bf14d5975a3b___ @ 0x18032B1E0
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18032B9C0 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_49e7a17ad518dc57eac7bf14d5975a3b___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  const WCHAR *v8; // rcx
  const WCHAR *v9; // rcx
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 80LL )
  {
    v8 = (const WCHAR *)i;
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      v8 = *(const WCHAR **)i;
    if ( CompareStringOrdinal(v8, *(_DWORD *)(i + 16), **(LPCWCH **)a4, **(_DWORD **)(a4 + 8), 1) == 2 )
      break;
    v9 = (const WCHAR *)(i + 32);
    if ( *(_QWORD *)(i + 56) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    if ( CompareStringOrdinal(v9, *(_DWORD *)(i + 48), *(LPCWCH *)(*(_QWORD *)a4 + 8LL), **(_DWORD **)(a4 + 16), 1) == 2 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
