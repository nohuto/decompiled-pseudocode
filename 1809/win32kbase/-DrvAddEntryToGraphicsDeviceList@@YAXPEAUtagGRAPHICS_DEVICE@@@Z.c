/*
 * XREFs of ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0101314
 * Callers:
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvAddEntryToGraphicsDeviceList(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  if ( gpGraphicsDeviceList )
    *((_QWORD *)gpGraphicsDeviceListLast + 16) = a1;
  else
    gpGraphicsDeviceList = a1;
  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)a1;
}
