/*
 * XREFs of FindClipFormat @ 0x1C00D9E78
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006E3C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00D9DE0 (NtUserIsClipboardFormatAvailable.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DA8D4 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     InternalSetClipboardData @ 0x1C00DAD30 (InternalSetClipboardData.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015522C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _EnumClipboardFormats @ 0x1C01562B0 (_EnumClipboardFormats.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F77F0 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7988 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7B30 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7C0C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00DA144 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F7E38 (IsFmtBlocked.c)
 */

__int64 __fastcall FindClipFormat(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      for ( i = *(_DWORD *)(a1 + 104); i; --i )
      {
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v4 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 880))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return v4;
          }
          v9 = PsGetCurrentProcessWin32Process(v8);
          EtwTraceUIPIClipboardError(0LL, v9, a2, *(_QWORD *)(v4 + 20));
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
