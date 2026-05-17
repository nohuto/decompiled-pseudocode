/*
 * XREFs of sub_180066D3C @ 0x180066D3C
 * Callers:
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     TpStartAsyncIoOperation @ 0x1800629D0 (TpStartAsyncIoOperation.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180066D3C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
