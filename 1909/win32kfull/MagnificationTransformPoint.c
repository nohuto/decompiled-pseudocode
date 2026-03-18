/*
 * XREFs of MagnificationTransformPoint @ 0x1C02031BC
 * Callers:
 *     ApplyMagInputTransform @ 0x1C01D27A0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01D2B50 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C02030B0 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationTransformPoint(__int128 *a1, int *a2)
{
  int v2; // r9d
  int v4; // r11d
  int v5; // r10d
  int v6; // edx
  __int128 v7; // [rsp+0h] [rbp-28h]
  __int128 v8; // [rsp+10h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    v7 = *a1;
    v8 = a1[1];
    if ( v2 )
    {
      v4 = *((_DWORD *)a1 + 11);
      if ( v4 )
      {
        v5 = (((*a2 - (int)v8) << 8) + v2 / 2) / v2 + v7;
        v6 = (((a2[1] - DWORD1(v8)) << 8) + v4 / 2) / v4 + DWORD1(v7);
        if ( v5 >= DWORD2(v7) - 1 )
          v5 = DWORD2(v7) - 1;
        *a2 = v5;
        if ( v6 >= HIDWORD(v7) - 1 )
          v6 = HIDWORD(v7) - 1;
        a2[1] = v6;
      }
    }
  }
}
