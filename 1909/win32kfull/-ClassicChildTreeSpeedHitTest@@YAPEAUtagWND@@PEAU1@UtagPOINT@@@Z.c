/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02036F0
 * Callers:
 *     xxxSpeedHitTest @ 0x1C002CB10 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C002CCD4 (xxxDCompSpeedHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02036F0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C0205D88 (TouchTargetChildTree.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C010C2DC (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02036F0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 i; // rdi
  struct tagWND *result; // rax

  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    if ( !i )
      return a1;
    if ( ClassicIsWindowHit((struct tagWND *)i, a2) )
      break;
  }
  if ( !*(_QWORD *)(i + 112) )
    return (struct tagWND *)i;
  if ( !PtInRect((_DWORD *)(*(_QWORD *)(i + 40) + 104LL), *(_QWORD *)&a2) )
    return (struct tagWND *)i;
  result = ClassicChildTreeSpeedHitTest((struct tagWND *)i, a2);
  if ( !result || result == (struct tagWND *)i )
    return (struct tagWND *)i;
  return result;
}
