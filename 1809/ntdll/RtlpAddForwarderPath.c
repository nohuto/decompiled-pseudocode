/*
 * XREFs of RtlpAddForwarderPath @ 0x1800E0520
 * Callers:
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

char *__fastcall RtlpAddForwarderPath(char *a1)
{
  char *v2; // rcx

  memmove(a1, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs - 2LL);
  v2 = &a1[2 * ((unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1)];
  *(_OWORD *)(v2 - 2) = *(_OWORD *)L"\\Forwarders";
  *(_DWORD *)(v2 + 14) = *(_DWORD *)L"ers";
  *((_WORD *)v2 + 9) = aForwarders_0[10];
  *((_WORD *)v2 + 10) = 59;
  return v2 + 22;
}
