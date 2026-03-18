/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C01C8F94
 * Callers:
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C01C8F94 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01CB858 (TouchTargetChildTree.c)
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0105CF4 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C01C8F94 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 i; // rdi
  struct tagWND *result; // rax

  for ( i = *((_QWORD *)a1 + 11); ; i = *(_QWORD *)(i + 64) )
  {
    if ( !i )
      return a1;
    if ( ClassicIsWindowHit((struct tagWND *)i, a2) )
      break;
  }
  if ( !*(_QWORD *)(i + 88) )
    return (struct tagWND *)i;
  if ( !PtInRect((_DWORD *)(*(_QWORD *)(i + 40) + 104LL), *(_QWORD *)&a2) )
    return (struct tagWND *)i;
  result = ClassicChildTreeSpeedHitTest((struct tagWND *)i, a2);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
