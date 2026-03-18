/*
 * XREFs of vSetGrayState__FONTCONTEXT @ 0x1C0223A18
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 * Callees:
 *     bValidRangeGASP @ 0x1C021A3F4 (bValidRangeGASP.c)
 *     bIsGaspFlagSet @ 0x1C02228C0 (bIsGaspFlagSet.c)
 */

void __fastcall vSetGrayState__FONTCONTEXT(__int64 *a1)
{
  int v1; // edi
  unsigned int v3; // edi
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r11
  void *v8; // r10
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  signed int v11; // r8d
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int16 v14; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 10) |= 0x80000000;
  v1 = *((_DWORD *)a1 + 10);
  if ( (v1 & 0x10000) != 0 )
  {
    v3 = v1 & 0xFFFEFFFF;
    *((_DWORD *)a1 + 10) = v3;
    if ( (v3 & 0x80000) != 0 )
    {
      v4 = v3 | 0x10000;
      *((_DWORD *)a1 + 10) = v4;
      v5 = v4;
    }
    else
    {
      v6 = a1[24];
      v7 = a1[1];
      if ( *(_DWORD *)(v6 + 112)
        && bValidRangeGASP(*(unsigned int *)(v6 + 112) + *(_QWORD *)(v7 + 64), *(_DWORD *)(v6 + 116), &v14) )
      {
        v9 = v14;
      }
      else
      {
        v10 = *(_WORD *)(v7 + 404);
        if ( (v10 & 1) != 0 || (v10 & 0x20) == 0 )
        {
          v9 = 3;
          v8 = &unk_1C02E8448;
        }
        else
        {
          v8 = &unk_1C02E8438;
          v9 = 2;
        }
      }
      v11 = *((_DWORD *)a1 + 31);
      v5 = v3;
      if ( v11 <= 0xFFFF && (unsigned int)bIsGaspFlagSet((__int64)v8, v9, v11, 2u) )
      {
        v5 = v3 | 0x10000;
        *((_DWORD *)a1 + 10) = v3 | 0x10000;
      }
    }
    if ( (v5 & 0x10000) == 0 )
    {
      v12 = *a1;
      v13 = v5 | 0x20000;
      *((_DWORD *)a1 + 10) = v13;
      *(_DWORD *)(v12 + 12) = v13;
    }
  }
}
