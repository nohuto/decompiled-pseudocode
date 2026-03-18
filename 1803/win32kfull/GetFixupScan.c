/*
 * XREFs of GetFixupScan @ 0x1C00D5270
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     FastExpAA_CY @ 0x1C0115180 (FastExpAA_CY.c)
 *     BltDIB_CY @ 0x1C0117710 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0236110 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0236AC0 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0237770 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0237F20 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0238C40 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C02396D0 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0239ED0 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C023A140 (TileDIB_CY.c)
 * Callees:
 *     FixupColorScan @ 0x1C012702C (FixupColorScan.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     FixupGrayScan @ 0x1C0234184 (FixupGrayScan.c)
 *     MappingBGR @ 0x1C023928C (MappingBGR.c)
 */

__int64 __fastcall GetFixupScan(unsigned int *a1, __int64 a2)
{
  unsigned int v4; // ecx
  char *v5; // r8
  int v7; // edx
  int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  unsigned int v11; // eax

  v4 = *a1;
  if ( (v4 & 0x40) != 0 )
  {
    if ( (a1[2] & 4) != 0 )
      FixupGrayScan(a1);
    else
      FixupColorScan(a1);
  }
  else
  {
    if ( (v4 & 0x20) != 0 )
    {
      v7 = ++a1[15];
      v8 = a1[10];
      if ( v7 > v8 )
      {
        a1[15] = v8;
        v7 = v8;
      }
      *((_BYTE *)a1 + 8) |= 2u;
      *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4) + (int)(a1[17] * (v8 - v7));
      *a1 = v4 & 0xFFFFFFDF;
    }
    v5 = (char *)(a1 + 2);
    if ( a2 )
    {
      (*((void (__fastcall **)(int *, __int64))a1 + 3))((int *)a1 + 2, a2);
    }
    else
    {
      v9 = *v5;
      if ( (*v5 & 2) != 0 )
      {
        v10 = a1[15];
        if ( v10 && (v11 = v10 - 1, (a1[15] = v11) != 0) )
        {
          *((_QWORD *)a1 + 6) += (int)a1[17];
        }
        else if ( (v9 & 1) != 0 )
        {
          *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4);
          a1[15] = a1[10];
        }
        else
        {
          *v5 = v9 & 0xFD;
        }
      }
    }
  }
  if ( (*a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, a1[14], *((_QWORD *)a1 + 49), *((_QWORD *)a1 + 56));
      *((_QWORD *)a1 + 56) += (int)a1[118];
      if ( *((_QWORD *)a1 + 56) == *((_QWORD *)a1 + 57) )
        *((_QWORD *)a1 + 56) = *((_QWORD *)a1 + 58);
    }
  }
  return a2;
}
