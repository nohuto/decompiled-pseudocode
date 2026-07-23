/*
 * XREFs of HvpReleaseCellFlat @ 0x1406D5030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseCellFlat(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = -1;
  *(_WORD *)(a2 + 4) = 0;
  return result;
}
