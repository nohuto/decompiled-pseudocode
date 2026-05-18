/*
 * XREFs of sub_1800633E0 @ 0x1800633E0
 * Callers:
 *     sub_180062CD8 @ 0x180062CD8 (sub_180062CD8.c)
 *     sub_180062DAC @ 0x180062DAC (sub_180062DAC.c)
 *     sub_180062E80 @ 0x180062E80 (sub_180062E80.c)
 *     sub_180062F60 @ 0x180062F60 (sub_180062F60.c)
 *     sub_180063238 @ 0x180063238 (sub_180063238.c)
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 * Callees:
 *     __tlregdtor @ 0x180126AC4 (__tlregdtor.c)
 */

__int64 sub_1800633E0()
{
  __int64 v0; // rbx
  int v1; // eax

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v1 = *(_DWORD *)(v0 + 40);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 40) = v1 | 1;
    *(_QWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    _tlregdtor(sub_180134F70);
  }
  return v0 + 16;
}
