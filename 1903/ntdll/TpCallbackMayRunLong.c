/*
 * XREFs of TpCallbackMayRunLong @ 0x1800705F0
 * Callers:
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 * Callees:
 *     sub_180070658 @ 0x180070658 (sub_180070658.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  result = sub_180070658(a1, 1, (unsigned int)&v2, (unsigned int)&v3, (__int64)&v5);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741637 )
      return 0LL;
  }
  else if ( !v3 )
  {
    v4 = 1;
    return ZwSetInformationWorkerFactory(*(_QWORD *)(v2 + 56), 9LL, &v4);
  }
  return result;
}
