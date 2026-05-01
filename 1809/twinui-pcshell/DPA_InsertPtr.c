/*
 * XREFs of DPA_InsertPtr @ 0x1803C0800
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1803C0010 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     DPA_Grow @ 0x1803C0750 (DPA_Grow.c)
 */

int __stdcall DPA_InsertPtr(HDPA hdpa, int i, void *p)
{
  int v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  int v9; // eax
  int result; // eax

  v4 = i;
  if ( !hdpa || i < 0 )
    return -1;
  v6 = *(_DWORD *)hdpa;
  if ( v4 > *(_DWORD *)hdpa )
    v4 = *(_DWORD *)hdpa;
  v7 = -1;
  if ( v6 + 1 < v6 )
    return -1;
  v8 = v6 + 1;
  v9 = *((_DWORD *)hdpa + 6);
  if ( v9 >= 0 )
    v7 = *((_DWORD *)hdpa + 6);
  if ( v9 >> 31 == -1 || v8 > v7 && !DPA_Grow(hdpa, v8) )
    return -1;
  if ( v4 < *(_DWORD *)hdpa )
    memmove_0(
      (void *)(*((_QWORD *)hdpa + 1) + 8LL * (v4 + 1)),
      (const void *)(*((_QWORD *)hdpa + 1) + 8LL * v4),
      8LL * (*(_DWORD *)hdpa - v4));
  result = v4;
  *(_QWORD *)(*((_QWORD *)hdpa + 1) + 8LL * v4) = p;
  ++*(_DWORD *)hdpa;
  return result;
}
