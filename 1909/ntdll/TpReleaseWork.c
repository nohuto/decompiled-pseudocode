/*
 * XREFs of TpReleaseWork @ 0x180031710
 * Callers:
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x1800FBC50 (RtlpCtContextFree.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppWorkpValidateWork(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
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
