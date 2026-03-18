/*
 * XREFs of EtwTraceCopyPointerInputFrameStop @ 0x1C00AB970
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0125340 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
