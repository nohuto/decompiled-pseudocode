/*
 * XREFs of CmpGetCorrectKcbLockOrder @ 0x1406BD9A8
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 *     CmpIsKcbLockAllowed @ 0x1406F96DC (CmpIsKcbLockAllowed.c)
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

  v5 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  v6 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
  if ( v5 <= v6
    && (v5 < v6
     || ((v8 = *(_WORD *)(a1 + 178), (v8 & 4) == 0) || (*(_DWORD *)(a2 + 176) & 0x20000) == 0)
     && ((v8 & 2) != 0 && (*(_DWORD *)(a2 + 176) & 0x40000) != 0
      || (v9 = *(_WORD *)(a1 + 58), v10 = *(_WORD *)(a2 + 58), v9 <= v10) && (v9 < v10 || a1 <= a2))) )
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
