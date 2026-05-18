/*
 * XREFs of sub_1800632D0 @ 0x1800632D0
 * Callers:
 *     sub_180062BC8 @ 0x180062BC8 (sub_180062BC8.c)
 *     sub_180062C9C @ 0x180062C9C (sub_180062C9C.c)
 *     sub_180062D70 @ 0x180062D70 (sub_180062D70.c)
 *     sub_180062E50 @ 0x180062E50 (sub_180062E50.c)
 *     sub_180063128 @ 0x180063128 (sub_180063128.c)
 *     sub_180063624 @ 0x180063624 (sub_180063624.c)
 * Callees:
 *     __tlregdtor @ 0x1801269B4 (__tlregdtor.c)
 */

__int64 sub_1800632D0()
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
    _tlregdtor(sub_180134E60);
  }
  return v0 + 16;
}
