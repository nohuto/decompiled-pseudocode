/*
 * XREFs of IsFmtBlocked @ 0x1C020DF24
 * Callers:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0012A4C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C0059098 (CountNumClipFormatForIL.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00D73C0 (NtUserIsClipboardFormatAvailable.c)
 *     _GetPriorityClipboardFormat @ 0x1C020DF58 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022EBF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !gcClipFormatExceptionList )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= gcClipFormatExceptionList )
      return 1LL;
  }
  return 0LL;
}
