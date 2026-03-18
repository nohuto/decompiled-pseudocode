/*
 * XREFs of FindClipFormat @ 0x1C00B6948
 * Callers:
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 *     InternalSetClipboardData @ 0x1C00B60C8 (InternalSetClipboardData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B661C (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00B68C0 (NtUserIsClipboardFormatAvailable.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0130EE8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     _EnumClipboardFormats @ 0x1C0135410 (_EnumClipboardFormats.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2DC4 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01D31E8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01D32F4 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 * Callees:
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C00B6BE8 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01D3550 (IsFmtBlocked.c)
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
                               *(_QWORD *)(CurrentProcessWin32Process + 872))
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
