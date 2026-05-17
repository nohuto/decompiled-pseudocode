/*
 * XREFs of TpReleaseWork @ 0x180031710
 * Callers:
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 * Callees:
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = sub_1800364D8(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = sub_180031774(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
