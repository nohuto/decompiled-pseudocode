/*
 * XREFs of ?SetFloatProperty@CRotateTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C017A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CRotateTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  bool v10; // al

  v4 = 0;
  if ( !a2 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 18) != a3 )
    {
      *((float *)this + 18) = a3;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 19) != a3 )
    {
      *((float *)this + 19) = a3;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 20) != a3 )
    {
      *((float *)this + 20) = a3;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_24;
    }
LABEL_22:
    v10 = 0;
LABEL_25:
    *a4 = v10;
    return v4;
  }
  if ( v9 == 1 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
LABEL_24:
      v10 = 1;
      goto LABEL_25;
    }
    goto LABEL_22;
  }
  return (unsigned int)-1073741811;
}
