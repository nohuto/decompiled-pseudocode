/*
 * XREFs of PspUmsInitializeContext @ 0x1408C92AC
 * Callers:
 *     PspUmsInitThread @ 0x1408C91CC (PspUmsInitThread.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGetUmsContextExtendedSize @ 0x140319EBC (RtlGetUmsContextExtendedSize.c)
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
