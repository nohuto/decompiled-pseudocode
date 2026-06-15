/*
 * XREFs of __GSHandlerCheck_EH @ 0x18006C83C
 * Callers:
 *     <none>
 * Callees:
 *     __CxxFrameHandler3_0 @ 0x180065BFA (__CxxFrameHandler3_0.c)
 *     __GSHandlerCheckCommon @ 0x18006C7D8 (__GSHandlerCheckCommon.c)
 */

__int64 __fastcall _GSHandlerCheck_EH(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  _GSHandlerCheckCommon(a2, a4);
  result = 1LL;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return _CxxFrameHandler3_0();
  return result;
}
