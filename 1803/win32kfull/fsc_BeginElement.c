/*
 * XREFs of fsc_BeginElement @ 0x1C02C31D4
 * Callers:
 *     AddHorizOff @ 0x1C02C3A88 (AddHorizOff.c)
 *     AddHorizOn @ 0x1C02C3AE8 (AddHorizOn.c)
 *     AddVertOff @ 0x1C02C3B48 (AddVertOff.c)
 *     AddVertOn @ 0x1C02C3BA8 (AddVertOn.c)
 *     fsc_CalcLine @ 0x1C02C3F50 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C02C442C (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BeginElement(char a1, int a2, __int16 a3, int a4, __int64 a5, int *a6, _QWORD *a7, _QWORD *a8)
{
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  int *v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  bool v17; // cc
  int v18; // ecx

  *a7 = qword_1C032FED8;
  *a8 = qword_1C032FEE0;
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    qword_1C032FE80 = qword_1C032FE58;
    qword_1C032FE88 = qword_1C032FE68;
    v10 = qword_1C032FE60;
  }
  else
  {
    qword_1C032FE80 = qword_1C032FE60;
    qword_1C032FE88 = qword_1C032FE70;
    v10 = qword_1C032FE78;
  }
  qword_1C032FE90 = v10;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C032FEC0 = qword_1C032FE98;
    qword_1C032FEC8 = qword_1C032FEA8;
    v11 = qword_1C032FEA0;
  }
  else
  {
    qword_1C032FEC0 = qword_1C032FEA0;
    qword_1C032FEC8 = qword_1C032FEB0;
    v11 = qword_1C032FEB8;
  }
  qword_1C032FED0 = v11;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v12 = dword_1C032FF2C;
  if ( dword_1C032FF2C - 1 > 0x3FFF )
    return 4869LL;
  word_1C032FF30 = a3 | (4 * (dword_1C032FF2C - 1));
  if ( a4 <= 0 )
    return 0LL;
  v14 = a6;
  while ( 1 )
  {
    v15 = *(int *)((char *)v14 + a5 - (_QWORD)a6);
    --a4;
    v16 = v12++;
    v17 = v12 <= dword_1C032FF28;
    dword_1C032FF2C = v12;
    *(_DWORD *)(qword_1C032FF18 + 4 * v16) = v15;
    v18 = *v14++;
    *(_DWORD *)(qword_1C032FF20 + 4 * v16) = v18;
    if ( !v17 )
      break;
    if ( a4 <= 0 )
      return 0LL;
  }
  return 6656LL;
}
