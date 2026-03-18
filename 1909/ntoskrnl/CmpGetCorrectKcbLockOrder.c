/*
 * XREFs of CmpGetCorrectKcbLockOrder @ 0x1406E76AC
 * Callers:
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14066359C (CmpLockTwoKcbsShared.c)
 *     CmpIsKcbLockAllowed @ 0x140715220 (CmpIsKcbLockAllowed.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpGetCorrectKcbLockOrder(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned __int64 result; // rax
  __int16 v8; // r8
  __int16 v9; // ax
  __int16 v10; // r8

  v5 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
  v6 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
  if ( v5 <= v6
    && (v5 < v6
     || ((v8 = *(_WORD *)(a1 + 186), (v8 & 4) == 0) || (*(_DWORD *)(a2 + 184) & 0x20000) == 0)
     && ((v8 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0
      || (v9 = *(_WORD *)(a1 + 66), v10 = *(_WORD *)(a2 + 66), v9 <= v10) && (v9 < v10 || a1 <= a2))) )
  {
    result = a2;
    a2 = a1;
  }
  else
  {
    result = a1;
  }
  *a3 = a2;
  *a4 = result;
  return result;
}
