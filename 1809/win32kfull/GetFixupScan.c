/*
 * XREFs of GetFixupScan @ 0x1C0008FDC
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1C0008DD0 (BltDIB_CY.c)
 *     FastExpAA_CY @ 0x1C0139300 (FastExpAA_CY.c)
 *     ExpandDIB_CY @ 0x1C024B780 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C024C0F0 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C024CD20 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C024D4B0 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C024E1D0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C024EC90 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C024F480 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C024F6F0 (TileDIB_CY.c)
 * Callees:
 *     FixupGrayScan @ 0x1C0002B00 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1C0148858 (FixupColorScan.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     MappingBGR @ 0x1C024E81C (MappingBGR.c)
 */

void *__fastcall GetFixupScan(__int64 a1, void *a2)
{
  int v4; // ecx
  char *v5; // r8
  int v7; // eax
  int v8; // edx
  char v9; // cl
  int v10; // eax
  int v11; // eax

  v4 = *(_DWORD *)a1;
  if ( (v4 & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      FixupGrayScan(a1, a2);
    else
      FixupColorScan(a1);
  }
  else
  {
    if ( (v4 & 0x20) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 40);
      v8 = *(_DWORD *)(a1 + 60) + 1;
      *(_DWORD *)(a1 + 60) = v8;
      if ( v8 > v7 )
      {
        *(_DWORD *)(a1 + 60) = v7;
        v8 = v7;
      }
      *(_BYTE *)(a1 + 8) |= 2u;
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32) + *(_DWORD *)(a1 + 68) * (v7 - v8);
      *(_DWORD *)a1 = v4 & 0xFFFFFFDF;
    }
    v5 = (char *)(a1 + 8);
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64, void *))(a1 + 24))(a1 + 8, a2);
    }
    else
    {
      v9 = *v5;
      if ( (*v5 & 2) != 0 )
      {
        v10 = *(_DWORD *)(a1 + 60);
        if ( v10 && (v11 = v10 - 1, (*(_DWORD *)(a1 + 60) = v11) != 0) )
        {
          *(_QWORD *)(a1 + 48) += *(int *)(a1 + 68);
        }
        else if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 40);
        }
        else
        {
          *v5 = v9 & 0xFD;
        }
      }
    }
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, *(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 448));
      *(_QWORD *)(a1 + 448) += *(int *)(a1 + 472);
      if ( *(_QWORD *)(a1 + 448) == *(_QWORD *)(a1 + 456) )
        *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 464);
    }
  }
  return a2;
}
