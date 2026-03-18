/*
 * XREFs of CheckBoundingBoxSegment @ 0x1C02BAF88
 * Callers:
 *     Misoriented @ 0x1C02BB8E0 (Misoriented.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckBoundingBoxSegment(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  int v4; // ebx
  int v5; // r11d
  int v6; // r10d
  unsigned __int64 v7; // rax
  int v8; // r8d
  bool v9; // cc

  v4 = HIDWORD(a2);
  v5 = a2;
  if ( (int)a3 < (int)a2 )
    v5 = a3;
  v6 = a2;
  v7 = HIDWORD(a3);
  if ( SHIDWORD(a3) < SHIDWORD(a2) )
    v4 = HIDWORD(a3);
  if ( (int)a3 > (int)a2 )
    v6 = a3;
  v8 = HIDWORD(a2);
  if ( (int)v7 > SHIDWORD(a2) )
    v8 = v7;
  if ( !a4 )
  {
    if ( v4 > SHIDWORD(a1) || v8 < SHIDWORD(a1) )
      return 0LL;
    return v5 <= (int)a1;
  }
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        return 1LL;
      if ( v5 > (int)a1 || v6 < (int)a1 )
        return 0LL;
      v9 = v8 < SHIDWORD(a1);
      return !v9;
    }
    if ( v5 > (int)a1 || v6 < (int)a1 )
      return 0LL;
    return v4 <= SHIDWORD(a1);
  }
  if ( v4 > SHIDWORD(a1) || v8 < SHIDWORD(a1) )
    return 0LL;
  v9 = v6 < (int)a1;
  return !v9;
}
