/*
 * XREFs of cjVTFDIFIMETRICS @ 0x1C0229258
 * Callers:
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0229378 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0225B84 (StringCchLengthA.c)
 */

__int64 __fastcall cjVTFDIFIMETRICS(__int64 a1)
{
  __int64 v1; // r11
  int v2; // edx
  unsigned __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  char v8; // r9
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  StringCchLengthA(
    (STRSAFE_PCNZCH)(a1
                   + (*(unsigned __int8 *)(a1 + 105) | (unsigned __int64)((*(unsigned __int8 *)(a1 + 106) | (*(unsigned __int16 *)(a1 + 107) << 8)) << 8))),
    0x7FFFFFFFuLL,
    &pcchLength);
  v2 = -1;
  v3 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v3 <= 0xFFFFFFFF )
  {
    v4 = v3 + 3;
    if ( 2 * ((int)pcchLength + 1) + 3 >= (unsigned int)(2 * (pcchLength + 1)) )
    {
      v5 = (v4 & 0xFFFFFFFC) + 192;
      v6 = -1;
      if ( v5 >= 0xC0 )
        v6 = v5;
      v7 = v6;
      if ( v5 >= 0xC0 )
      {
        v8 = *(_BYTE *)(v1 + 80);
        if ( *(unsigned __int16 *)(v1 + 83) > 0x190u )
        {
          if ( v8 )
            return v6;
          LODWORD(v9) = 20;
        }
        else
        {
          v9 = (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 60;
        }
        v10 = v9;
        v11 = v9 + 12;
        if ( (unsigned int)(v10 + 12) >= 0xC )
        {
          v12 = v11;
          v13 = v11 + v6;
          if ( v12 + v6 >= v6 )
            v2 = v13;
          v6 = v2;
          if ( v13 >= v7 )
            return v6;
        }
      }
    }
  }
  return 0LL;
}
