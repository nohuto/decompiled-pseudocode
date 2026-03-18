/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C01CE3E8
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C01CF900 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        __int64 a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  int *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  int *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  int *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int *v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  int *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v26 = &v24;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v14 = 1000 * a1 / a5;
      v29 = &v14;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v15 = 1000 * v8 / a5;
      v32 = &v15;
      v9 = 1000LL * *(_QWORD *)v7;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v16 = v9 / a5;
      v35 = &v16;
      v10 = 1000LL * *(_QWORD *)(v7 + 8);
      v55 = 0;
      v24 = 0x1000000LL;
      v27 = 8;
      v17 = v10 / a5;
      v38 = &v17;
      v11 = 1000LL * *(_QWORD *)(v7 + 16);
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v18 = v11 / a5;
      v41 = &v18;
      v12 = 1000LL * *(_QWORD *)(v7 + 24);
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v19 = v12 / a5;
      v44 = &v19;
      v13 = 1000LL * *(_QWORD *)(v7 + 32);
      v48 = 4;
      v51 = 4;
      v54 = 4;
      v20 = v13 / a5;
      v47 = &v20;
      v21 = *(_DWORD *)(v7 + 40);
      v50 = &v21;
      v22 = *(_DWORD *)(v7 + 44);
      v53 = &v22;
      v23 = 1000 * v6 / a5;
      v56 = &v23;
      v58 = 0;
      v57 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5838, 0LL, 0LL, 0xDu, &pData);
    }
  }
}
