/*
 * XREFs of ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801D9510
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D8334 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801D9BF4 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultPositionAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 57);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 540) < 0;
  return result;
}
