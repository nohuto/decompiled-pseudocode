/*
 * XREFs of RtlWalkFrameChain @ 0x1800748C0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     sub_18010D4AC @ 0x18010D4AC (sub_18010D4AC.c)
 * Callees:
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 */

__int64 __fastcall RtlWalkFrameChain(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( (a3 & 0xFFFF00FF) != 0 )
    return 0LL;
  v3 = a3 >> 8;
  if ( (unsigned int)v3 > 0xFE || a2 == -1 )
    return 0LL;
  result = sub_18001F4F0(a1, a2 + 1, v3, (int)v3 + 1);
  if ( (_DWORD)result )
    return (unsigned int)(result - 1);
  return result;
}
