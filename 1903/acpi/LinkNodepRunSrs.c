/*
 * XREFs of LinkNodepRunSrs @ 0x1C00B644C
 * Callers:
 *     LinkNodeWriteStateToHardware @ 0x1C009BF04 (LinkNodeWriteStateToHardware.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     LinkNodepRunSrsAsync @ 0x1C006BC6C (LinkNodepRunSrsAsync.c)
 */

__int64 __fastcall LinkNodepRunSrs(__int64 a1, int a2)
{
  __int64 result; // rax
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF

  memset(Event, 0, sizeof(Event));
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  result = LinkNodepRunSrsAsync(a1, a2, (__int64)AmlisuppCompletePassive, (__int64)Event);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    return *(unsigned int *)&Event[24];
  }
  return result;
}
