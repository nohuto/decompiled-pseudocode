/*
 * XREFs of ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0178740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( !v5 )
  {
    if ( *((float *)this + 20) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 20) = a3;
    goto LABEL_20;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 21) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 21) = a3;
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 22) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 22) = a3;
    goto LABEL_20;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    if ( *((float *)this + 33) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x4000u;
    *((float *)this + 33) = a3;
    goto LABEL_20;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 34) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x8000u;
    *((float *)this + 34) = a3;
    goto LABEL_20;
  }
  if ( v9 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 35) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x10000u;
    *((float *)this + 35) = a3;
LABEL_20:
    *a4 = 1;
  }
  return result;
}
