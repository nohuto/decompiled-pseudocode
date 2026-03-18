/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C0086B60
 * Callers:
 *     VidSchiWorkerThread @ 0x1C00868B0 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 *     VidSchiResume @ 0x1C00C718C (VidSchiResume.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 296) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1256) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1224), 0, 0);
  }
  return result;
}
