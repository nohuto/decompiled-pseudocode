/*
 * XREFs of ExReinitializeFastResource @ 0x140169D70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReinitializeFastResource(ULONG_PTR BugCheckParameter2)
{
  __int16 v1; // dx
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax

  v1 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v1 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
    KeBugCheckEx(0x1C6u, 4uLL, BugCheckParameter2, 0LL, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 24) = 0;
  *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 26) |= v1 & 0x41;
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  result = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 56) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 48;
  return result;
}
