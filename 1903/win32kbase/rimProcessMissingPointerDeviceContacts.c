/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1C01584F0
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0155C04 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0157D10 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C015B5FC (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C015B9D8 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 active; // rax
  int v9; // esi
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  int v12; // edx
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rbx
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  int v20; // r9d
  int IsContactDeliveringPointerData; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // rcx
  _UNKNOWN **result; // rax
  char v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29; // [rsp+41h] [rbp-BFh] BYREF
  char v30; // [rsp+42h] [rbp-BEh] BYREF
  char v31; // [rsp+43h] [rbp-BDh] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int128 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  _BYTE v42[24]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  char *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  char *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  __int64 *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+150h] [rbp+50h] BYREF
  __int64 v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  __int64 v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  int *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  int *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  char *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  char *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int64 *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]

  v3 = *(_QWORD *)(a2 + 480);
  v6 = a2;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 27, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  active = RIMCmActiveContactsBeginNoButton(&v40, v3);
  v9 = 0;
  v10 = *(_QWORD *)(active + 16);
  v38 = *(_OWORD *)active;
  v39 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v42, v3);
    v13 = *(_OWORD *)v11;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)v11;
    v41 = v14;
    v40 = v13;
    if ( (_QWORD)v38 == v15 && DWORD2(v38) == DWORD2(v40) && v39 == v41 )
      break;
    v16 = (_DWORD *)(v39 - 16);
    if ( (*(_DWORD *)(v39 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v38);
    v18 = v16[580];
    if ( (v16[585] & 2) != 0 )
    {
      if ( v18 )
      {
        if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
        {
          v26 = *(_QWORD *)(v6 + 464);
          v62 = v25;
          v64 = v25;
          v66 = v25;
          v34 = v24;
          v61 = v26 + 110;
          v63 = v26 + 112;
          v65 = v26 + 114;
          v68 = 4LL;
          v67 = &v34;
          v35 = v7 - v16[581];
          v69 = &v35;
          v71 = &v30;
          v73 = &v31;
          v75 = &v37;
          v70 = 4LL;
          v30 = 1;
          v72 = 1LL;
          v31 = 0;
          v74 = 1LL;
          v37 = 0x1000000LL;
          v76 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E5B9F, 0LL, 0LL, 0xAu, &v60);
        }
        *((_QWORD *)v16 + 290) = 0LL;
      }
    }
    else
    {
      v19 = v16[11];
      v16[580] = v18 + 1;
      v16[581] = v19;
      if ( (unsigned int)v7 > *(_DWORD *)(v3 + 744) + v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 28;
          goto LABEL_16;
        }
        goto LABEL_17;
      }
      if ( a3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 29;
LABEL_16:
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_Dd(
            (_DWORD)gRimLog,
            v17,
            1,
            v20,
            (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
            *v16,
            v16[665]);
        }
LABEL_17:
        v9 = 1;
      }
      IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v16);
      if ( v9 )
      {
        v9 = 0;
        if ( IsContactDeliveringPointerData )
        {
          RIMInsertSimulatedContactEndStateInFrame(
            a1,
            v6,
            (__int64)v16,
            *(_QWORD *)(v3 + 816),
            *(_DWORD *)(v3 + 788),
            1);
          v16[585] |= 4u;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 4;
            WPP_RECORDER_SF_Dd(
              (_DWORD)gRimLog,
              v22,
              1,
              30,
              (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
              *v16,
              v16[665]);
          }
          RIMCmDeactivateContact(v3, v16);
        }
        if ( dword_1C020F490 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 0x400000000000uLL) )
          {
            v23 = *(_QWORD *)(v6 + 464);
            v45 = 2LL;
            v47 = 2LL;
            v49 = 2LL;
            v51 = 4LL;
            v44 = v23 + 110;
            v46 = v23 + 112;
            v48 = v23 + 114;
            v32 = v16[580];
            v50 = &v32;
            v33 = v7 - v16[581];
            v52 = &v33;
            v54 = &v28;
            v56 = &v29;
            v58 = &v36;
            v53 = 4LL;
            v28 = 0;
            v55 = 1LL;
            v29 = 0;
            v57 = 1LL;
            v36 = 0x1000000LL;
            v59 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E5B9F, 0LL, 0LL, 0xAu, &pData);
          }
        }
      }
      else
      {
        v9 = 0;
        if ( IsContactDeliveringPointerData )
          rimInsertSimulatedContactKeepAliveStateInFrame(
            a1,
            v6,
            (__int64)v16,
            *(_QWORD *)(v3 + 816),
            *(_DWORD *)(v3 + 788));
      }
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v12,
                          1,
                          31,
                          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  return result;
}
