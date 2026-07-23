/*
 * XREFs of TtmiLogInitCurrentSessionStart @ 0x140885270
 * Callers:
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void TtmiLogInitCurrentSessionStart()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14096E820, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_14096E820, &unk_1403736E2, 0LL, 0LL, 3u, &pData);
    }
  }
}
