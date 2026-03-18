/*
 * XREFs of ?SetFloatProperty@CScalarMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0179C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScalarMarshaler::SetFloatProperty(
        DirectComposition::CScalarMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  bool v5; // cl

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( *((float *)this + 10) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *((float *)this + 10) = a3;
    v5 = 1;
  }
  *a4 = v5;
  return result;
}
