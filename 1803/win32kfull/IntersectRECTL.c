/*
 * XREFs of IntersectRECTL @ 0x1C00D280C
 * Callers:
 *     ComputeAABBP @ 0x1C00D23D0 (ComputeAABBP.c)
 *     CheckBMPNeedFixup @ 0x1C0125748 (CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IntersectRECTL(int *a1, int *a2)
{
  int v2; // r8d
  int v4; // r10d
  int v5; // ecx
  int v6; // r11d
  __int128 v8; // [rsp+0h] [rbp-18h]

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  if ( v2 < *a2 )
    v2 = *a2;
  LODWORD(v8) = v2;
  if ( v4 < a2[1] )
    v4 = a2[1];
  DWORD1(v8) = v4;
  if ( v5 > a2[2] )
    v5 = a2[2];
  DWORD2(v8) = v5;
  if ( v6 > a2[3] )
    v6 = a2[3];
  HIDWORD(v8) = v6;
  *(_OWORD *)a1 = v8;
  return v5 > v2 && v6 > v4;
}
