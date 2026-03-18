/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     xxxSpeedHitTest @ 0x1C006E608 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     TouchTargetChildTree @ 0x1C01EFC18 (TouchTargetChildTree.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0116768 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 i; // rdi
  struct tagWND *result; // rax

  for ( i = *((_QWORD *)a1 + 11); ; i = *(_QWORD *)(i + 64) )
  {
    if ( !i )
      return a1;
    if ( (unsigned int)ClassicIsWindowHit((struct tagWND *)i, a2) )
      break;
  }
  if ( !*(_QWORD *)(i + 88) )
    return (struct tagWND *)i;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(i + 40) + 104LL, a2) )
    return (struct tagWND *)i;
  result = ClassicChildTreeSpeedHitTest((struct tagWND *)i, a2);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
