/*
 * XREFs of TtmiLogInitiateModernStandbyTransitionStop @ 0x1408C1A4C
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1408BE1AC (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall TtmiLogInitiateModernStandbyTransitionStop(int a1)
{
  int ProcessSessionId; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v3 = ProcessSessionId;
      v6 = &v3;
      v9 = &v4;
      v4 = a1;
      v7 = 4;
      v10 = 4;
      TlgWrite(&stru_1409AD8E0, &unk_1403928AF, 0LL, 0LL, 4u, &pData);
    }
  }
}
