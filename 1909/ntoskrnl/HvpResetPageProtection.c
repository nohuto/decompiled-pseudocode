/*
 * XREFs of HvpResetPageProtection @ 0x140635F1C
 * Callers:
 *     HvResetDirtyData @ 0x140641CB4 (HvResetDirtyData.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x14008B610 (RtlFindNextForwardRunSet.c)
 *     HvpSetRangeProtection @ 0x1406329F4 (HvpSetRangeProtection.c)
 */

ULONG __fastcall HvpResetPageProtection(ULONG_PTR BugCheckParameter2)
{
  ULONG v1; // esi
  ULONG result; // eax
  int v3; // r15d
  ULONG v5; // ebp
  ULONG v6; // ebx
  ULONG StartingRunIndex; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter2 + 88);
  result = 0;
  v3 = *(_DWORD *)(BugCheckParameter2 + 104);
  while ( result < v1 )
  {
    result = RtlFindNextForwardRunSet((PRTL_BITMAP)(BugCheckParameter2 + 88), result, &StartingRunIndex);
    v5 = result;
    if ( !result )
      break;
    v6 = StartingRunIndex;
    HvpSetRangeProtection(BugCheckParameter2, StartingRunIndex << 9, result << 9, 2u);
    result = v6 + v5;
    v3 -= v5;
    if ( !v3 )
      break;
  }
  return result;
}
