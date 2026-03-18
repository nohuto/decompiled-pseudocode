/*
 * XREFs of ?SetFloatProperty@CSkewTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01BBFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformMarshaler::SetFloatProperty(
        DirectComposition::CSkewTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx

  result = 0LL;
  if ( !a2 )
  {
    if ( *((float *)this + 14) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 14) = a3;
    goto LABEL_14;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 15) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 15) = a3;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 16) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 16) = a3;
    goto LABEL_14;
  }
  if ( v6 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 17) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 17) = a3;
LABEL_14:
    *a4 = 1;
  }
  return result;
}
