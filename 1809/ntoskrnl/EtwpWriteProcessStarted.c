/*
 * XREFs of EtwpWriteProcessStarted @ 0x1405B3408
 * Callers:
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x140012F98 (_TlgCreateSid.c)
 *     PsGetProcessSessionId @ 0x140092250 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400CCC30 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmGetSessionCreateTime @ 0x1405B4894 (MmGetSessionCreateTime.c)
 */

char __fastcall EtwpWriteProcessStarted(__int64 a1, int *a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rdi
  const SID *v10; // r10
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int ProcessSessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *p_ProcessSessionId; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  _DWORD *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 v33; // [rsp+E8h] [rbp-20h]
  _DWORD v34[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  __int64 *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  __int64 *p_Time; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  __int64 *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+178h] [rbp+70h] BYREF
  _DWORD *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  __int64 v52; // [rsp+198h] [rbp+90h]
  _DWORD v53[2]; // [rsp+1A0h] [rbp+98h] BYREF

  v4 = *(_QWORD *)(a1 + 1128);
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( v4 )
    v5 = *(unsigned __int16 **)(a1 + 1128);
  if ( stru_1404012D0.LevelPlus1 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn(&stru_1404012D0, 3uLL);
    if ( (_BYTE)v4 )
    {
      v17 = *(_QWORD *)(a1 + 776);
      v12 = *(_DWORD *)(a1 + 736);
      v13 = *(_DWORD *)(a1 + 992);
      ProcessSessionId = PsGetProcessSessionId(a1);
      ProcessStartKey = PsGetProcessStartKey(a1);
      v19 = *(_QWORD *)(a1 + 1864);
      v20 = *(_QWORD *)(a1 + 1872);
      Time = MmGetSessionCreateTime();
      v15 = *a2;
      LODWORD(v16) = a2[1];
      v24 = 8LL;
      v23 = &v17;
      v26 = 4LL;
      v25 = &v12;
      v27 = &v13;
      p_ProcessSessionId = &ProcessSessionId;
      v31 = v34;
      v33 = *((_QWORD *)v5 + 1);
      v34[0] = *v5;
      p_ProcessStartKey = &ProcessStartKey;
      v37 = &v19;
      v39 = &v20;
      p_Time = &Time;
      v43 = &v15;
      v45 = &v16;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 2LL;
      v34[1] = 0;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a3 + 16));
      TlgCreateWsz(&v48, (LPCWSTR)(a3 + 272));
      TlgCreateSid(&v49, v10);
      v52 = *((_QWORD *)a4 + 1);
      v53[0] = *a4;
      v50 = v53;
      v51 = 2LL;
      v53[1] = 0;
      LOBYTE(v4) = TlgWrite(&stru_1404012D0, &unk_140373F47, 0LL, 0LL, 0x13u, &pData);
    }
  }
  return v4;
}
