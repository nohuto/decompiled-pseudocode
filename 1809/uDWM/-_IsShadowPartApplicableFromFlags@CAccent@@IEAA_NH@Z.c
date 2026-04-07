/*
 * XREFs of ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180085D44
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180085F84 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180086408 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::_IsShadowPartApplicableFromFlags(CAccent *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v9; // eax

  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
      v6 = *((_DWORD *)this + 71);
      v7 = 384;
      return (v7 & v6) == v7;
    }
    if ( a2 <= 17 )
      return 0;
    switch ( a2 )
    {
      case 18:
        goto LABEL_22;
      case 19:
LABEL_21:
        v9 = *((_DWORD *)this + 71) >> 7;
        return v9 & 1;
      case 20:
LABEL_19:
        v9 = *((_DWORD *)this + 71) >> 6;
        return v9 & 1;
    }
    if ( a2 != 21 )
      return 0;
LABEL_18:
    v9 = *((_DWORD *)this + 71) >> 8;
    return v9 & 1;
  }
  if ( a2 == 6 )
    goto LABEL_18;
  if ( !a2 )
    return (*((_BYTE *)this + 284) & 0x60) == 96;
  v2 = a2 - 1;
  if ( !v2 )
    goto LABEL_19;
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v6 = *((_DWORD *)this + 71);
          v7 = 288;
          return (v7 & v6) == v7;
        }
        return 0;
      }
      goto LABEL_21;
    }
LABEL_22:
    v9 = *((_DWORD *)this + 71) >> 5;
    return v9 & 1;
  }
  return (*((_BYTE *)this + 284) & 0xC0) == 0xC0;
}
