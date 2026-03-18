/*
 * XREFs of ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C013176C
 * Callers:
 *     xxxSpeedHitTest @ 0x1C00266A0 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 * Callees:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0025B1C (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C01317DC (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall TopLevelSpeedHitTest(struct tagDESKTOP *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  _QWORD *v3; // r10
  __int64 v4; // rdi
  __int64 i; // rbx

  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = 0LL;
  if ( (*(_DWORD *)(*v3 + 64LL) & 1) != 0 )
    return DCETopLevelSpeedHitTest(a1, a2, a3);
  for ( i = *(_QWORD *)(v3[3] + 112LL); i; i = *(_QWORD *)(i + 88) )
  {
    if ( (unsigned int)ClassicIsWindowHit((struct tagWND *)i, *a2) )
      return (struct tagWND *)i;
  }
  return (struct tagWND *)v4;
}
