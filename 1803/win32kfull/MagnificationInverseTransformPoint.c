/*
 * XREFs of MagnificationInverseTransformPoint @ 0x1C01C87D4
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00F4230 (AddMagnificationOutputTransform.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationInverseTransformPoint(__int128 *a1, int *a2)
{
  int v2; // r8d
  int v4; // r10d
  int v5; // r9d
  int v6; // edx
  __int128 v7; // [rsp+0h] [rbp-28h]
  __int128 v8; // [rsp+10h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    v8 = *a1;
    v7 = a1[1];
    if ( v2 )
    {
      v4 = *((_DWORD *)a1 + 11);
      if ( v4 )
      {
        v5 = v2 * (*a2 - (int)v8) / 256 + v7;
        v6 = v4 * (a2[1] - DWORD1(v8)) / 256 + DWORD1(v7);
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
