/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x140118CA4
 * Callers:
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  char v3; // al
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int8)v2 >> 1;
  v4 = v2 >> 12;
  if ( (v3 & 1) != 0 || (_DWORD)v4 == *(_DWORD *)(a2 + 1140) )
    return a2 + 8 * (v4 + 4 * (v4 + 86));
  else
    return a2 + 2688;
}
