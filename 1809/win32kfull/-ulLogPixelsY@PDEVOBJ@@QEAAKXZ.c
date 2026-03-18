/*
 * XREFs of ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC
 * Callers:
 *     cjCopyFontDataW @ 0x1C0026910 (cjCopyFontDataW.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0028C38 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C002BEEC (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     GreEnumFonts @ 0x1C007E5A8 (GreEnumFonts.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0084FD4 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0143CCC (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     GreGetAspectRatioFilter @ 0x1C026F730 (GreGetAspectRatioFilter.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsY(PDEVOBJ *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  LOBYTE(v4) = 18;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v7 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v7 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v7 + 340) )
        {
          LOBYTE(v4) = *(_DWORD *)(v7 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
          if ( CurrentProcessWin32Process )
            v4 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2180LL);
  result = 96LL;
  if ( (v4 & 0xFu) - 1 <= 1 )
    return *(unsigned int *)(*(_QWORD *)this + 2180LL);
  return result;
}
