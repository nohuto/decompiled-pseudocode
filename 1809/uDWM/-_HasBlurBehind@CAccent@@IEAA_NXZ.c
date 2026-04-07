/*
 * XREFs of ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180085D24
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::_HasBlurBehind(CAccent *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 42);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 312) != 0;
  return result;
}
