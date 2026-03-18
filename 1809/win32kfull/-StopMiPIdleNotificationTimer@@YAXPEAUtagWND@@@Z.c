/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01CE800
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01CD5A8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01CF0B0 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 */

void __fastcall StopMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1256LL);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 8) )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    FindTimer((__int64)a1, 65523LL, 2u, 1, 0LL);
  }
}
