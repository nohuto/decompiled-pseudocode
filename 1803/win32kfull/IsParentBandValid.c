/*
 * XREFs of IsParentBandValid @ 0x1C0034A70
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     ValidateNewParent @ 0x1C00349D4 (ValidateNewParent.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C0034AC8 (IsTopLevelParent.c)
 */

_BOOL8 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BOOL8 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = 1;
  if ( !(unsigned int)IsTopLevelParent(a2) )
  {
    v5 = *(_QWORD *)(v2 + 40);
    if ( *(char *)(v5 + 235) >= 0 )
    {
      v6 = *(_QWORD *)(v3 + 40);
      if ( *(_DWORD *)(v5 + 236) != *(_DWORD *)(v6 + 236) || ((*(_BYTE *)(v5 + 234) ^ *(_BYTE *)(v6 + 234)) & 0x20) != 0 )
        return 0;
    }
  }
  return result;
}
