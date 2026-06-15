/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x18002ACB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(void *a1, DWORD a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  DWORD SessionId; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 || !a4 )
    return 87LL;
  *a3 = 0xFFFF;
  *a4 = 0;
  result = sub_18002633C(a1, v8, &SessionId);
  if ( !(_DWORD)result )
  {
    if ( a2 == -1 )
      a2 = SessionId;
    if ( !SessionId || a2 == SessionId )
    {
      if ( a2 )
      {
        result = sub_180028944(a2, a3, a4);
        if ( (_DWORD)result == 1168 )
        {
          *a3 = sub_180036708(a2);
          *a4 = 0;
          return 0LL;
        }
      }
      else
      {
        *a3 = 0;
        *a4 = 0;
      }
    }
    else
    {
      return 5LL;
    }
  }
  return result;
}
