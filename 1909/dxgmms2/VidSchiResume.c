/*
 * XREFs of VidSchiResume @ 0x1C00C9EA4
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00C98DC (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C008B730 (VidSchiSetSchedulerStatus.c)
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
