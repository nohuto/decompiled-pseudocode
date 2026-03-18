/*
 * XREFs of EtwTraceAdminlessAccessFailure @ 0x1408FD140
 * Callers:
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall EtwTraceAdminlessAccessFailure(int a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v5; // rax
  unsigned __int16 *v6; // r9
  unsigned __int8 v7; // r11
  unsigned __int16 *v8; // r9
  unsigned __int8 v9; // r11
  unsigned __int16 *v10; // r9
  unsigned __int8 v11; // r11
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-98h] BYREF
  int *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  _DWORD *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  _DWORD v30[2]; // [rsp+E0h] [rbp-28h] BYREF
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+108h] [rbp+0h] BYREF
  int *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  _DWORD *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  __int64 v40; // [rsp+148h] [rbp+40h]
  _DWORD v41[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v44; // [rsp+168h] [rbp+60h] BYREF
  int *v45; // [rsp+188h] [rbp+80h]
  __int64 v46; // [rsp+190h] [rbp+88h]
  _DWORD *v47; // [rsp+198h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+98h]
  __int64 v49; // [rsp+1A8h] [rbp+A0h]
  _DWORD v50[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 *v51; // [rsp+1B8h] [rbp+B0h]
  __int64 v52; // [rsp+1C0h] [rbp+B8h]
  int v53; // [rsp+1F8h] [rbp+F0h] BYREF

  v53 = a1;
  v20[1] = 0x20000LL;
  v20[0] = 0LL;
  v20[2] = (__int64)&word_14078F2B0;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[14];
  if ( a3 )
  {
    if ( stru_140426650.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&stru_140426650, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v13 = v7;
        v14 = v53;
        v25 = &v13;
        v27 = v30;
        v29 = *((_QWORD *)v6 + 1);
        v30[0] = *v6;
        v31 = &v14;
        v33 = &v15;
        v15 = a3;
        v26 = 4LL;
        v28 = 2LL;
        v30[1] = 0;
        v32 = 4LL;
        v34 = 4LL;
        LOBYTE(v5) = TlgWrite(&stru_140426650, &unk_140394777, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( a4 )
  {
    if ( stru_140426650.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&stru_140426650, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v18 = v11;
        LODWORD(v19) = v53;
        v45 = &v18;
        v47 = v50;
        v49 = *((_QWORD *)v10 + 1);
        v50[0] = *v10;
        v51 = &v19;
        v46 = 4LL;
        v48 = 2LL;
        v50[1] = 0;
        v52 = 4LL;
        LOBYTE(v5) = TlgWrite(&stru_140426650, &unk_1403947E3, 0LL, 0LL, 6u, &v44);
      }
    }
  }
  else if ( stru_140426650.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_140426650, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v16 = v9;
      v17 = v53;
      v36 = &v16;
      v38 = v41;
      v40 = *((_QWORD *)v8 + 1);
      v41[0] = *v8;
      v42 = &v17;
      v37 = 4LL;
      v39 = 2LL;
      v41[1] = 0;
      v43 = 4LL;
      LOBYTE(v5) = TlgWrite(&stru_140426650, &unk_14039472C, 0LL, 0LL, 6u, &v35);
    }
  }
  if ( EtwAdminlessProvRegHandle && SeAdminlessEnableEventLogging )
  {
    KeQuerySystemTimePrecise(v20);
    UserData.Ptr = (ULONGLONG)v20;
    *(_QWORD *)&UserData.Size = 8LL;
    v22 = &v53;
    v23 = 4LL;
    LOBYTE(v5) = EtwWrite(EtwAdminlessProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return v5;
}
