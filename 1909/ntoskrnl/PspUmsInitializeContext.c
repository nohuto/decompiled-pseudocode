/*
 * XREFs of PspUmsInitializeContext @ 0x1408C8B8C
 * Callers:
 *     PspUmsInitThread @ 0x1408C8AAC (PspUmsInitThread.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlGetUmsContextExtendedSize @ 0x14031990C (RtlGetUmsContextExtendedSize.c)
 */

__int64 __fastcall PspUmsInitializeContext(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int UmsContextExtendedSize; // eax

  v4 = a1[157];
  UmsContextExtendedSize = RtlGetUmsContextExtendedSize();
  memset(a1, 0, UmsContextExtendedSize);
  a1[157] = v4;
  a1[156] = a2;
  *((_DWORD *)a1 + 316) = 5;
  return 0LL;
}
