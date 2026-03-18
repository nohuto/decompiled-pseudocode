/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMIDEFillContactUsageValues @ 0x1C011E60C (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C011E7E8 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C011EA60 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C01206A8 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(char *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r12
  BOOL v6; // edi
  _DWORD *v7; // rsi
  __int64 v8; // r15
  unsigned int v9; // r13d
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int128 *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // r10d
  struct tagINPUT_INJECTION_VALUE *v30; // r9
  __int16 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  char *v48; // r14
  __int64 v49; // rcx
  unsigned int v50; // eax
  struct tagINPUT_INJECTION_VALUE *v52; // [rsp+20h] [rbp-99h] BYREF
  __int128 v53; // [rsp+30h] [rbp-89h] BYREF
  __int128 v54; // [rsp+40h] [rbp-79h]
  __int128 v55; // [rsp+50h] [rbp-69h]
  __int128 v56; // [rsp+60h] [rbp-59h]
  __int128 v57; // [rsp+70h] [rbp-49h]
  __int128 v58; // [rsp+80h] [rbp-39h]
  __int128 v59; // [rsp+90h] [rbp-29h]
  __int128 v60; // [rsp+A0h] [rbp-19h]
  __int128 v61; // [rsp+B0h] [rbp-9h]
  __int64 v62; // [rsp+C0h] [rbp+7h]
  unsigned int v64; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v65; // [rsp+130h] [rbp+77h] BYREF
  int v66; // [rsp+138h] [rbp+7Fh]

  v65 = a3;
  v3 = 0;
  v4 = (unsigned int)a3;
  v52 = 0LL;
  v6 = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  if ( !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)v4 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, &v52, &v64) )
    goto LABEL_44;
  v9 = v64;
  v10 = v4 * v64;
  v11 = 0xFFFFFFFFLL;
  if ( v10 <= 0xFFFFFFFF )
    v11 = (unsigned int)v10;
  LOBYTE(v6) = v10 > 0xFFFFFFFF;
  if ( v10 > 0xFFFFFFFF )
    goto LABEL_44;
  if ( *(_DWORD *)a2 == 2 )
  {
    v12 = v64 - 2;
  }
  else
  {
    if ( *(_DWORD *)a2 != 3 )
      goto LABEL_14;
    v12 = v64 - 1;
  }
  v64 = v12;
LABEL_14:
  v7 = Win32AllocPoolZInit(12 * v11, 0x6A6E6952u);
  if ( !v7 )
    v6 = 1;
  if ( v9 > 0xC )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( v6 )
    goto LABEL_44;
  v16 = v65;
  v17 = 0LL;
  v66 = 0;
  if ( !v65 )
  {
LABEL_29:
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( (int)v8 + 1 > (unsigned int)v11 )
      {
        v6 = 1;
      }
      else
      {
        v34 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        v35 = 3 * v34;
        v7[v35] = 5505037;
        v7[v35 + 1] = v16;
        LOWORD(v7[v35 + 2]) = 0;
        v36 = *(_OWORD *)(a2 + 24);
        v53 = *(_OWORD *)(a2 + 8);
        v37 = *(_OWORD *)(a2 + 40);
        v54 = v36;
        v38 = *(_OWORD *)(a2 + 56);
        v55 = v37;
        v39 = *(_OWORD *)(a2 + 72);
        v56 = v38;
        v40 = *(_OWORD *)(a2 + 88);
        v57 = v39;
        v58 = v40;
        if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v53, &v65) )
        {
          v41 = v65;
          v42 = 3 * v8;
          v7[v42] = 5636109;
          LODWORD(v11) = v8 + 1;
          v7[v42 + 1] = v41;
          LOWORD(v7[v42 + 2]) = 0;
        }
        else
        {
          v6 = 1;
        }
      }
    }
    if ( *(_DWORD *)a2 == 3 )
    {
      if ( (int)v8 + 1 <= (unsigned int)v11 )
      {
        v43 = *(_OWORD *)(a2 + 24);
        v53 = *(_OWORD *)(a2 + 8);
        v44 = *(_OWORD *)(a2 + 40);
        v54 = v43;
        v45 = *(_OWORD *)(a2 + 56);
        v55 = v44;
        v46 = *(_OWORD *)(a2 + 72);
        v56 = v45;
        v47 = *(_OWORD *)(a2 + 88);
        v48 = a1;
        v57 = v46;
        v58 = v47;
        if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v53, &v65) )
        {
          LODWORD(v11) = v8 + 1;
          v49 = 3LL * (unsigned int)v8;
          v50 = v65;
          v7[v49] = 5636109;
          v7[v49 + 1] = v50;
          LOWORD(v7[v49 + 2]) = 0;
        }
        else
        {
          v6 = 1;
        }
LABEL_42:
        if ( !v6 )
          v6 = (int)RIMIDEInjectDeviceInput(v48, (__int64)v7, v11, 5u) < 0;
        goto LABEL_44;
      }
      v6 = 1;
    }
    v48 = a1;
    goto LABEL_42;
  }
  while ( !v6 )
  {
    v18 = (__int128 *)(a2 + 152 * v17);
    v19 = v18[1];
    v53 = *v18;
    v20 = v18[2];
    v54 = v19;
    v21 = v18[3];
    v55 = v20;
    v22 = v18[4];
    v56 = v21;
    v23 = v18[5];
    v57 = v22;
    v24 = v18[6];
    v58 = v23;
    v25 = v18[7];
    v59 = v24;
    v26 = v18[8];
    v27 = *((_QWORD *)v18 + 18);
    v60 = v25;
    v61 = v26;
    v62 = v27;
    if ( (unsigned int)RIMIDEFillContactUsageValues(v52, v64, (int *)&v53) )
    {
      v28 = v64;
      v29 = 0;
      if ( v64 )
      {
        v30 = v52;
        v31 = v66;
        do
        {
          if ( (unsigned int)v8 >= (unsigned int)v11 )
            break;
          ++v29;
          v32 = (unsigned int)v8;
          LODWORD(v8) = v8 + 1;
          v33 = 3 * v32;
          *(_QWORD *)&v7[v33] = *(_QWORD *)v30;
          v7[v33 + 2] = *((_DWORD *)v30 + 2);
          LOWORD(v7[v33 + 2]) = v31 + 1;
          *((_DWORD *)v30 + 1) = 0;
          v30 = (struct tagINPUT_INJECTION_VALUE *)((char *)v30 + 12);
        }
        while ( v29 < v28 );
      }
    }
    else
    {
      v6 = 1;
    }
    v17 = (unsigned int)(v66 + 1);
    v66 = v17;
    if ( (unsigned int)v17 >= v16 )
    {
      if ( v6 )
        break;
      goto LABEL_29;
    }
  }
LABEL_44:
  if ( v52 )
    Win32FreePool((__int64)v52);
  if ( v7 )
    Win32FreePool((__int64)v7);
  LOBYTE(v3) = !v6;
  return v3;
}
