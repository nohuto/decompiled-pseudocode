/*
 * XREFs of CurveTransitionsSegment @ 0x1C02BB214
 * Callers:
 *     Misoriented @ 0x1C02BB8E0 (Misoriented.c)
 * Callees:
 *     QDiv2 @ 0x1C02BBE28 (QDiv2.c)
 */

__int64 __fastcall CurveTransitionsSegment(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  int v5; // esi
  int v6; // r15d
  int v7; // ebp
  unsigned __int64 v8; // r12
  int v9; // ebx
  unsigned int v10; // r14d
  int v11; // edi
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // cc
  __int64 v16; // rdx
  int v18; // [rsp+50h] [rbp+8h]

  v4 = HIDWORD(a1);
  v5 = a1;
  v6 = a2 - a1;
  v7 = HIDWORD(a4) - HIDWORD(a3);
  v8 = HIDWORD(a3);
  v18 = a4 - a3;
  v9 = HIDWORD(a2) - HIDWORD(a1);
  v10 = 0;
  v11 = a3;
  v12 = (a2 - a1) * (HIDWORD(a4) - HIDWORD(a3)) - (HIDWORD(a2) - HIDWORD(a1)) * (a4 - a3);
  if ( !v12 )
    return v10;
  v13 = QDiv2(-65536LL * (v9 * (v5 - (int)a3) + v6 * (HIDWORD(a3) - (int)v4)), v12);
  if ( (unsigned __int64)(v13 - 1) > 0xFFFF )
    return v10;
  if ( (int)abs32(v6) <= (int)abs32(v9) )
  {
    v16 = v13 * v7 + ((__int64)((int)v8 - (int)v4) << 16);
    if ( v9 < 0 )
    {
      if ( (__int64)v9 << 16 <= v16 )
        return v16 < 0;
      return v10;
    }
    if ( v16 <= 0 )
      return v10;
    v15 = v16 <= (__int64)v9 << 16;
  }
  else
  {
    v14 = v13 * v18 + ((__int64)(v11 - v5) << 16);
    if ( v6 < 0 )
    {
      if ( (__int64)v6 << 16 <= v14 && v14 < 0 )
        return 1;
      return v10;
    }
    if ( v14 <= 0 )
      return v10;
    v15 = v14 <= (__int64)v6 << 16;
  }
  if ( v15 )
    return 1;
  return v10;
}
