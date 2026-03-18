/*
 * XREFs of VidSchiResume @ 0x1C00C718C
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0086B60 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 708) )
  {
    *(_QWORD *)(a1 + 1144) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1112), 0, 0);
  }
  return result;
}
