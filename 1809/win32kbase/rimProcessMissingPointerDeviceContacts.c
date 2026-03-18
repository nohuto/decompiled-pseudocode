/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0128C3C (WPP_RECORDER_SF_dD.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C012E9F0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall rimProcessMissingPointerDeviceContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // r15
  __int64 active; // rax
  int v9; // edi
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  _DWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  int IsContactDeliveringPointerData; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rcx
  int cData; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  char v33; // [rsp+41h] [rbp-BFh] BYREF
  char v34; // [rsp+42h] [rbp-BEh] BYREF
  char v35; // [rsp+43h] [rbp-BDh] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int128 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h]
  _BYTE v44[24]; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  int *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  char *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  char *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+130h] [rbp+30h] BYREF
  __int64 v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  __int64 v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  int *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  int *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  char *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  char *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]

  v3 = *(_QWORD *)(a2 + 480);
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Bu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  active = RIMCmActiveContactsBeginNoButton(&v42, v3);
  v9 = 0;
  v10 = *(_QWORD *)(active + 16);
  v40 = *(_OWORD *)active;
  v41 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v44, v3);
    v12 = *(_OWORD *)v11;
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_QWORD *)v11;
    v43 = v13;
    v42 = v12;
    if ( (_QWORD)v40 == v14 && DWORD2(v40) == DWORD2(v42) && v41 == v43 )
      return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Fu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    v15 = (_DWORD *)(v41 - 16);
    if ( (*(_DWORD *)(v41 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v40);
    v18 = v15[580];
    if ( (v15[585] & 2) != 0 )
    {
      if ( v18 )
      {
        if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
        {
          v29 = *(_QWORD *)(a2 + 464);
          v62 = v28;
          v64 = v28;
          v66 = v28;
          v38 = v27;
          v61 = v29 + 110;
          v63 = v29 + 112;
          v65 = v29 + 114;
          v68 = 4LL;
          v67 = &v38;
          v39 = v7 - v15[581];
          v69 = &v39;
          v71 = &v34;
          v73 = &v35;
          v70 = 4LL;
          v34 = 1;
          v72 = 1LL;
          v35 = 0;
          v74 = 1LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019FA29, 0LL, 0LL, 9u, &v60);
        }
        *((_QWORD *)v15 + 290) = 0LL;
      }
    }
    else
    {
      v19 = v15[11];
      v15[580] = v18 + 1;
      v15[581] = v19;
      v20 = (unsigned int)(*(_DWORD *)(v3 + 736) + v19);
      if ( (unsigned int)v7 > (unsigned int)v20 )
      {
        v21 = 28;
LABEL_12:
        WPP_RECORDER_SF_dD(v20, v16, v17, v21, cData);
        v9 = 1;
        goto LABEL_13;
      }
      if ( a3 )
      {
        v21 = 29;
        goto LABEL_12;
      }
LABEL_13:
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v15);
      if ( v9 )
      {
        v9 = 0;
        if ( IsContactDeliveringPointerData )
        {
          RIMInsertSimulatedContactEndStateInFrame(
            a1,
            a2,
            (__int64)v15,
            *(_QWORD *)(v3 + 808),
            *(_DWORD *)(v3 + 780),
            1);
          v15[585] |= 4u;
        }
        else
        {
          WPP_RECORDER_SF_dD(v24, v23, v25, 0x1Eu, cData);
          RIMCmDeactivateContact(v3, v15);
        }
        if ( dword_1C01C7A38 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
          {
            v26 = *(_QWORD *)(a2 + 464);
            v47 = 2LL;
            v49 = 2LL;
            v51 = 2LL;
            v53 = 4LL;
            v46 = v26 + 110;
            v48 = v26 + 112;
            v50 = v26 + 114;
            v36 = v15[580];
            v52 = &v36;
            v37 = v7 - v15[581];
            v54 = &v37;
            v56 = &v32;
            v58 = &v33;
            v55 = 4LL;
            v32 = 0;
            v57 = 1LL;
            v33 = 0;
            v59 = 1LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019FA29, 0LL, 0LL, 9u, &pData);
          }
        }
      }
      else
      {
        v9 = 0;
        if ( IsContactDeliveringPointerData )
          rimInsertSimulatedContactKeepAliveStateInFrame(a1, a2, (__int64)v15);
      }
    }
  }
}
