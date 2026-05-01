/*
 * XREFs of _CempListRemoveHeadAndClear@4 @ 0x100135CD
 * Callers:
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall CempListRemoveHeadAndClear(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx

  result = (_DWORD *)*this;
  if ( (_DWORD *)*this == this || (_DWORD *)result[1] != this || (v2 = *result, *(_DWORD **)(*result + 4) != result) )
    __fastfail(3u);
  *this = v2;
  *(_DWORD *)(v2 + 4) = this;
  *result = 0;
  result[1] = 0;
  return result;
}
