/*
 * XREFs of FsRtlpDoBoost @ 0x140107EE4
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x140107E20 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 */

unsigned __int8 __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, _BYTE *a4, void *a5)
{
  bool v5; // bl
  unsigned int v9; // edx
  unsigned int Next_low; // ecx
  unsigned int v11; // eax
  unsigned __int8 result; // al

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1744) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(unsigned __int8 *)(a2 + 195);
  Next_low = LOBYTE(a3->Next);
  v11 = 15;
  if ( (unsigned __int8)v9 < 0xFu )
    v11 = v9;
  if ( Next_low <= v11 )
  {
    LOBYTE(Next_low) = 15;
    if ( (unsigned __int8)v9 < 0xFu )
      LOBYTE(Next_low) = v9;
  }
  LOBYTE(a3->Next) = Next_low;
  result = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)Next_low > result )
  {
    if ( (unsigned __int8)Next_low > result )
      result = KeSetPriorityBoost(a1, (unsigned __int8)Next_low, a3, 0xFuLL);
    if ( v5 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      return IoBoostThreadIoPriority(a1, (*(_DWORD *)(a2 + 1744) >> 9) & 7, 0LL);
    }
  }
  return result;
}
