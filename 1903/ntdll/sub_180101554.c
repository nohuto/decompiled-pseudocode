/*
 * XREFs of sub_180101554 @ 0x180101554
 * Callers:
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_18004AB8C @ 0x18004AB8C (sub_18004AB8C.c)
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_18010ABC4 @ 0x18010ABC4 (sub_18010ABC4.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180101554(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 615;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
