/*
 * XREFs of CountNumClipFormatForIL @ 0x1C0059098
 * Callers:
 *     NtUserCountClipboardFormats @ 0x1C0059030 (NtUserCountClipboardFormats.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0100A58 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022EBF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0059110 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C020DF24 (IsFmtBlocked.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  int v5; // ebp
  _QWORD *v6; // r14

  v2 = *(unsigned int **)(a2 + 96);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 104);
    if ( v5 )
    {
      v6 = v2 + 5;
      do
      {
        --v5;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*v6, a1) || !(unsigned int)IsFmtBlocked(*v2) )
          ++v3;
        v2 += 8;
        v6 += 4;
      }
      while ( v5 );
    }
  }
  return v3;
}
