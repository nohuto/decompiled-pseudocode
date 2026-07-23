/*
 * XREFs of TtmiLogCalloutStop @ 0x140883C0C
 * Callers:
 *     TtmpStopCallout @ 0x14087F92C (TtmpStopCallout.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, int a2, __int64 a3, int a4, int a5, unsigned __int64 a6)
{
  _UNKNOWN **v6; // rax
  unsigned __int64 v7; // rdi
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int ProcessSessionId; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  int *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  _QWORD *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  _QWORD v36[5]; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+118h] [rbp+10h] BYREF
  int *p_ProcessSessionId; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  int *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  int *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  __int64 *v44; // [rsp+168h] [rbp+60h]
  __int64 v45; // [rsp+170h] [rbp+68h]
  _QWORD *v46; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  int *v48; // [rsp+188h] [rbp+80h]
  _QWORD v49[5]; // [rsp+190h] [rbp+88h] BYREF
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF
  int v51; // [rsp+200h] [rbp+F8h] BYREF

  v6 = &retaddr;
  v51 = a4;
  v7 = a6;
  if ( a6 > 0x1312D00 )
  {
    if ( stru_14096E7E8.LevelPlus1 > 5 )
    {
      LOBYTE(v6) = TlgKeywordOn(&stru_14096E7E8, 0x400000000001uLL);
      if ( (_BYTE)v6 )
      {
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v40 = &v17;
        v42 = &v18;
        v44 = &v22;
        v46 = v49;
        v19 = a5;
        v48 = &v51;
        p_ProcessSessionId = &ProcessSessionId;
        v49[1] = &v19;
        v17 = a1;
        v18 = a2;
        v22 = a3;
        v23 = v7;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 8LL;
        v47 = 2LL;
        v49[0] = 4LL;
        v49[2] = 4LL;
        v49[3] = &v23;
        v49[4] = 8LL;
        LOBYTE(v6) = TlgWrite(&stru_14096E7E8, &unk_1403730C8, 0LL, 0LL, 0xAu, &v37);
      }
    }
  }
  else if ( stru_14096E820.LevelPlus1 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn(&stru_14096E820, 1uLL);
    if ( (_BYTE)v6 )
    {
      v12 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v27 = &v13;
      v29 = &v14;
      v31 = &v20;
      v33 = v36;
      v15 = a5;
      v35 = &v51;
      v25 = &v12;
      v36[1] = &v15;
      v13 = a1;
      v14 = a2;
      v20 = a3;
      v21 = v7;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 8LL;
      v34 = 2LL;
      v36[0] = 4LL;
      v36[2] = 4LL;
      v36[3] = &v21;
      v36[4] = 8LL;
      LOBYTE(v6) = TlgWrite(&stru_14096E820, &unk_14037331D, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (char)v6;
}
