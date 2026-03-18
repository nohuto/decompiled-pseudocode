/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0147D4C
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0147454 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0147680 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01479DC (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0149D7C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  int v5; // ebx
  _DWORD *v6; // rdi
  int v7; // edx
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  int v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // r11d
  struct tagINPUT_INJECTION_VALUE *v31; // r10
  unsigned int v32; // r13d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned int v44; // edx
  __int64 v45; // rcx
  unsigned int v46; // eax
  int v47; // r9d
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // r13
  int v54; // eax
  int v55; // edx
  __int64 v56; // rcx
  unsigned int v57; // eax
  int v58; // eax
  int v59; // edx
  unsigned int v61[2]; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-A1h]
  __int64 v63; // [rsp+48h] [rbp-99h]
  struct tagINPUT_INJECTION_VALUE *v64[3]; // [rsp+50h] [rbp-91h] BYREF
  __int128 v65; // [rsp+68h] [rbp-79h]
  __int128 v66; // [rsp+78h] [rbp-69h]
  __int128 v67; // [rsp+88h] [rbp-59h]
  __int128 v68; // [rsp+98h] [rbp-49h]
  __int128 v69; // [rsp+A8h] [rbp-39h]
  __int128 v70; // [rsp+B8h] [rbp-29h]
  __int128 v71; // [rsp+C8h] [rbp-19h]
  __int128 v72; // [rsp+D8h] [rbp-9h]
  __int64 v73; // [rsp+E8h] [rbp+7h]
  unsigned int v76; // [rsp+150h] [rbp+6Fh]
  unsigned int v77; // [rsp+158h] [rbp+77h] BYREF
  unsigned int v78; // [rsp+160h] [rbp+7Fh]

  v77 = a3;
  v3 = (unsigned int)a3;
  v64[0] = 0LL;
  v4 = a2;
  v78 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)v3 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)v4, v64, v61) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 45, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    goto LABEL_69;
  }
  v8 = v61[0];
  v9 = v3 * v61[0];
  v62 = v9;
  if ( v9 > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v7, 1, 36, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v3);
    }
LABEL_69:
    v5 = -1073741811;
    goto LABEL_70;
  }
  if ( *(_DWORD *)v4 == 2 )
  {
    v10 = v61[0] - 2;
  }
  else
  {
    if ( *(_DWORD *)v4 != 3 )
    {
      LODWORD(v63) = v61[0];
      goto LABEL_13;
    }
    v10 = v61[0] - 1;
  }
  LODWORD(v63) = v10;
LABEL_13:
  v6 = Win32AllocPoolZInit(12LL * (unsigned int)v9, 1785620818LL);
  if ( !v6 )
  {
    v5 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 37, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, 23);
    }
  }
  if ( v8 > 0xC )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v15 = 0;
  if ( v5 < 0 )
    goto LABEL_70;
  v16 = v77;
  v61[0] = 0;
  if ( !v77 )
  {
LABEL_31:
    if ( v5 < 0 )
      goto LABEL_70;
    if ( *(_DWORD *)v4 != 2 )
      goto LABEL_48;
    v36 = v78;
    v37 = v62;
    v14 = v78 + 1;
    if ( v78 + 1 > (unsigned int)v62 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v37, 1, 39, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
        v37 = v62;
        v36 = v78;
      }
      v5 = -1073741811;
    }
    else
    {
      v38 = 3LL * v78;
      v36 = ++v78;
      v6[v38] = 5505037;
      v6[v38 + 1] = v16;
      LOWORD(v6[v38 + 2]) = 0;
    }
    if ( v5 < 0 )
      goto LABEL_48;
    if ( v36 + 1 > v37 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        v5 = -1073741811;
LABEL_48:
        v44 = v78;
        v46 = v62;
LABEL_49:
        if ( *(_DWORD *)v4 == 3 )
        {
          v76 = v44 + 1;
          if ( v44 + 1 <= v46 )
          {
            v48 = *(_OWORD *)(v4 + 24);
            *(_OWORD *)&v64[1] = *(_OWORD *)(v4 + 8);
            v49 = *(_OWORD *)(v4 + 40);
            v65 = v48;
            v50 = *(_OWORD *)(v4 + 56);
            v66 = v49;
            v51 = *(_OWORD *)(v4 + 72);
            v67 = v50;
            v52 = *(_OWORD *)(v4 + 88);
            v53 = a1;
            v68 = v51;
            v69 = v52;
            v54 = RIMIDEGetTimeStampDelta(a1, (__int64)&v64[1], &v77, v14);
            v55 = 0;
            if ( v54 )
            {
              v56 = 3LL * v78;
              v6[v56 + 1] = v77;
              v57 = v76;
              v6[v56] = 5636109;
              LOWORD(v6[v56 + 2]) = 0;
LABEL_61:
              if ( v5 >= 0 )
              {
                v58 = RIMIDEInjectDeviceInput(v53, (__int64)v6, v57, 5u);
                v5 = v58;
                if ( v58 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v59) = 2;
                  WPP_RECORDER_SF_D(
                    (_DWORD)gRimLog,
                    v59,
                    1,
                    44,
                    (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
                    v58);
                }
              }
              goto LABEL_70;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v55) = 2;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v55, 1, 42, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
            }
            v5 = -1073741811;
LABEL_60:
            v57 = v62;
            goto LABEL_61;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 2;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v44, 1, 43, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
          }
          v5 = -1073741811;
        }
        v53 = a1;
        goto LABEL_60;
      }
      v47 = 41;
    }
    else
    {
      v39 = *(_OWORD *)(v4 + 24);
      *(_OWORD *)&v64[1] = *(_OWORD *)(v4 + 8);
      v40 = *(_OWORD *)(v4 + 40);
      v65 = v39;
      v41 = *(_OWORD *)(v4 + 56);
      v66 = v40;
      v42 = *(_OWORD *)(v4 + 72);
      v67 = v41;
      v43 = *(_OWORD *)(v4 + 88);
      v68 = v42;
      v69 = v43;
      if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v64[1], &v77, v14) )
      {
        v44 = v78;
        v45 = 3LL * v78;
        v6[v45 + 1] = v77;
        v46 = v44 + 1;
        v62 = v44 + 1;
        v6[v45] = 5636109;
        LOWORD(v6[v45 + 2]) = 0;
        goto LABEL_49;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v47 = 40;
    }
    LOBYTE(v37) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v37, 1, v47, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    goto LABEL_47;
  }
  while ( v5 >= 0 )
  {
    v17 = v4 + 152LL * v15;
    v18 = *(_OWORD *)(v17 + 16);
    *(_OWORD *)&v64[1] = *(_OWORD *)v17;
    v19 = *(_OWORD *)(v17 + 32);
    v65 = v18;
    v20 = *(_OWORD *)(v17 + 48);
    v66 = v19;
    v21 = *(_OWORD *)(v17 + 64);
    v67 = v20;
    v22 = *(_OWORD *)(v17 + 80);
    v68 = v21;
    v23 = *(_OWORD *)(v17 + 96);
    v69 = v22;
    v24 = *(_OWORD *)(v17 + 112);
    v70 = v23;
    v25 = *(_OWORD *)(v17 + 128);
    v26 = *(_QWORD *)(v17 + 144);
    v71 = v24;
    v72 = v25;
    v73 = v26;
    v27 = RIMIDEFillContactUsageValues((_DWORD *)v64[0], (unsigned int)v63, (int *)&v64[1]);
    v28 = 0;
    if ( v27 )
    {
      v29 = v63;
      v30 = 0;
      if ( (_DWORD)v63 )
      {
        v31 = v64[0];
        v32 = v62;
        v33 = v78;
        v14 = v61[0];
        do
        {
          if ( v33 >= v32 )
            break;
          ++v30;
          v34 = v33++;
          v35 = 3 * v34;
          *(_QWORD *)&v6[v35] = *(_QWORD *)v31;
          v6[v35 + 2] = *((_DWORD *)v31 + 2);
          LOWORD(v6[v35 + 2]) = v14 + 1;
          *((_DWORD *)v31 + 1) = 0;
          v31 = (struct tagINPUT_INJECTION_VALUE *)((char *)v31 + 12);
        }
        while ( v30 < v29 );
        v4 = a2;
        v78 = v33;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 38, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
      }
      v5 = -1073741811;
    }
    v16 = v77;
    v15 = v61[0] + 1;
    v61[0] = v15;
    if ( v15 >= v77 )
      goto LABEL_31;
  }
LABEL_70:
  if ( v64[0] )
    Win32FreePool((__int64)v64[0]);
  if ( v6 )
    Win32FreePool((__int64)v6);
  return (unsigned int)v5;
}
