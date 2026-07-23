/*
 * XREFs of TtmiLogTerminalStateMachine @ 0x140887600
 * Callers:
 *     TtmpUpdateTerminalState @ 0x140880790 (TtmpUpdateTerminalState.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall TtmiLogTerminalStateMachine(int a1, int *a2, int *a3)
{
  _UNKNOWN **v3; // rax
  __int16 v8; // [rsp+38h] [rbp-D0h] BYREF
  char v9; // [rsp+3Ah] [rbp-CEh] BYREF
  int ProcessSessionId; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *p_ProcessSessionId; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  __int64 *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int16 *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  int *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  int *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  int *v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  char *v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  int *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  __int64 *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  __int64 *v54; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v3 = &retaddr;
  if ( stru_14096E820.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_14096E820, 1uLL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v12 = *a2;
      v17 = *((_QWORD *)a2 + 1);
      v18 = *((_QWORD *)a2 + 2);
      v19 = *((_QWORD *)a2 + 3);
      v20 = *((_QWORD *)a2 + 4);
      v8 = *((_WORD *)a2 + 20);
      v13 = a2[11];
      v14 = a2[12];
      v15 = *a3;
      v9 = *((_BYTE *)a3 + 4);
      v16 = a3[2];
      v21 = *((_QWORD *)a3 + 2);
      v22 = *((_QWORD *)a3 + 3);
      p_ProcessSessionId = &ProcessSessionId;
      v26 = &v11;
      v28 = &v12;
      v30 = &v17;
      v32 = &v18;
      v34 = &v19;
      v36 = &v20;
      v38 = &v8;
      v40 = (char *)&v8 + 1;
      v42 = &v13;
      v44 = &v14;
      v46 = &v15;
      v48 = &v9;
      v50 = &v16;
      v52 = &v21;
      v54 = &v22;
      v11 = a1;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 8LL;
      v35 = 8LL;
      v37 = 8LL;
      v39 = 1LL;
      v41 = 1LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 1LL;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      LOBYTE(v3) = TlgWrite(&stru_14096E820, &unk_1403729B7, 0LL, 0LL, 0x12u, &pData);
    }
  }
  return (char)v3;
}
