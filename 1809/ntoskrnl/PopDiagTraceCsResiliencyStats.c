/*
 * XREFs of PopDiagTraceCsResiliencyStats @ 0x140872E80
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsResiliencyStats(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  __int64 v3; // rdi
  int *v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+98h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  __int64 *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  __int64 *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  __int64 *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  __int64 *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  __int64 *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  __int64 *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  __int64 *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  int *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  __int64 *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  __int64 *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  __int64 *v56; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  int *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  int *v60; // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+200h] [rbp+F8h] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 120);
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(a1 + 104);
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      LOBYTE(v8) = PopWdiCurrentScenarioInstanceId;
      v9 = *v4;
      v10 = v4[8];
      v14 = *((_QWORD *)v4 + 6);
      v15 = (unsigned int)v4[10];
      v16 = *((_QWORD *)v4 + 1);
      v17 = *((_QWORD *)v4 + 3);
      v18 = *((_QWORD *)v4 + 2);
      v11 = v4[14];
      v20 = *((_QWORD *)v4 + 8);
      v21 = *((_QWORD *)v4 + 10);
      v23 = *((_QWORD *)v4 + 12);
      v24 = *((_QWORD *)v4 + 14);
      v26 = &v8;
      v28 = &v9;
      v30 = &v10;
      v32 = &v14;
      v34 = &v15;
      v36 = &v16;
      v38 = &v17;
      v40 = &v18;
      v42 = &v11;
      v44 = &v19;
      v46 = &v20;
      v48 = &v21;
      v50 = &v12;
      v52 = &v22;
      v54 = &v23;
      v56 = &v24;
      v58 = &v13;
      v19 = v5;
      v12 = v6;
      v22 = v3;
      v13 = v2;
      v27 = 1LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 8LL;
      v35 = 8LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 8LL;
      v59 = 4LL;
      v61 = 80LL;
      v60 = v4 + 32;
      LOBYTE(v1) = TlgWrite(&pCallbackContext, &unk_1403703BF, 0LL, 0LL, 0x14u, &pData);
    }
  }
  return (char)v1;
}
