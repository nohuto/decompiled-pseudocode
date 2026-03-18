/*
 * XREFs of IsFmtBlocked @ 0x1C020E1D4
 * Callers:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FindClipFormat @ 0x1C00B6DAC (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C00B7BA8 (CountNumClipFormatForIL.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00F72D0 (NtUserIsClipboardFormatAvailable.c)
 *     _GetPriorityClipboardFormat @ 0x1C020E208 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022F210 (NtUserGetUpdatedClipboardFormats.c)
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
