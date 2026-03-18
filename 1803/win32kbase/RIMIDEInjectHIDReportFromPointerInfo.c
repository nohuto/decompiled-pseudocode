/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00F4274
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C00B84E0 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMIDEFillContactUsageValues @ 0x1C00F3B54 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00F3D70 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00F3FE0 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00F5A8C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(char *a1, __int64 a2, unsigned int a3)
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
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int128 *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r10d
  struct tagINPUT_INJECTION_VALUE *v29; // r9
  __int16 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  char *v47; // r14
  __int64 v48; // rcx
  unsigned int v49; // eax
  struct tagINPUT_INJECTION_VALUE *v51; // [rsp+20h] [rbp-99h] BYREF
  __int128 v52; // [rsp+30h] [rbp-89h] BYREF
  __int128 v53; // [rsp+40h] [rbp-79h]
  __int128 v54; // [rsp+50h] [rbp-69h]
  __int128 v55; // [rsp+60h] [rbp-59h]
  __int128 v56; // [rsp+70h] [rbp-49h]
  __int128 v57; // [rsp+80h] [rbp-39h]
  __int128 v58; // [rsp+90h] [rbp-29h]
  __int128 v59; // [rsp+A0h] [rbp-19h]
  __int128 v60; // [rsp+B0h] [rbp-9h]
  __int64 v61; // [rsp+C0h] [rbp+7h]
  unsigned int v63; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v64; // [rsp+130h] [rbp+77h] BYREF
  int v65; // [rsp+138h] [rbp+7Fh]

  v64 = a3;
  v3 = 0;
  v4 = a3;
  v51 = 0LL;
  v6 = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (unsigned int)v4 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, &v51, &v63) )
    goto LABEL_44;
  v9 = v63;
  v10 = v4 * v63;
  v11 = 0xFFFFFFFFLL;
  if ( v10 <= 0xFFFFFFFF )
    v11 = (unsigned int)v10;
  LOBYTE(v6) = v10 > 0xFFFFFFFF;
  if ( v10 > 0xFFFFFFFF )
    goto LABEL_44;
  if ( *(_DWORD *)a2 == 2 )
  {
    v12 = v63 - 2;
  }
  else
  {
    if ( *(_DWORD *)a2 != 3 )
      goto LABEL_14;
    v12 = v63 - 1;
  }
  v63 = v12;
LABEL_14:
  v7 = Win32AllocPoolZInit(12 * v11, 0x6A6E6952u);
  if ( !v7 )
    v6 = 1;
  if ( v9 > 0xC )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( v6 )
    goto LABEL_44;
  v15 = v64;
  v16 = 0LL;
  v65 = 0;
  if ( !v64 )
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
        v33 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        v34 = 3 * v33;
        v7[v34] = 5505037;
        v7[v34 + 1] = v15;
        LOWORD(v7[v34 + 2]) = 0;
        v35 = *(_OWORD *)(a2 + 24);
        v52 = *(_OWORD *)(a2 + 8);
        v36 = *(_OWORD *)(a2 + 40);
        v53 = v35;
        v37 = *(_OWORD *)(a2 + 56);
        v54 = v36;
        v38 = *(_OWORD *)(a2 + 72);
        v55 = v37;
        v39 = *(_OWORD *)(a2 + 88);
        v56 = v38;
        v57 = v39;
        if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v52, &v64) )
        {
          v40 = v64;
          v41 = 3 * v8;
          v7[v41] = 5636109;
          LODWORD(v11) = v8 + 1;
          v7[v41 + 1] = v40;
          LOWORD(v7[v41 + 2]) = 0;
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
        v42 = *(_OWORD *)(a2 + 24);
        v52 = *(_OWORD *)(a2 + 8);
        v43 = *(_OWORD *)(a2 + 40);
        v53 = v42;
        v44 = *(_OWORD *)(a2 + 56);
        v54 = v43;
        v45 = *(_OWORD *)(a2 + 72);
        v55 = v44;
        v46 = *(_OWORD *)(a2 + 88);
        v47 = a1;
        v56 = v45;
        v57 = v46;
        if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v52, &v64) )
        {
          LODWORD(v11) = v8 + 1;
          v48 = 3LL * (unsigned int)v8;
          v49 = v64;
          v7[v48] = 5636109;
          v7[v48 + 1] = v49;
          LOWORD(v7[v48 + 2]) = 0;
        }
        else
        {
          v6 = 1;
        }
LABEL_42:
        if ( !v6 )
          v6 = (int)RIMIDEInjectDeviceInput(v47, (__int64)v7, v11) < 0;
        goto LABEL_44;
      }
      v6 = 1;
    }
    v47 = a1;
    goto LABEL_42;
  }
  while ( !v6 )
  {
    v17 = (__int128 *)(a2 + 152 * v16);
    v18 = v17[1];
    v52 = *v17;
    v19 = v17[2];
    v53 = v18;
    v20 = v17[3];
    v54 = v19;
    v21 = v17[4];
    v55 = v20;
    v22 = v17[5];
    v56 = v21;
    v23 = v17[6];
    v57 = v22;
    v24 = v17[7];
    v58 = v23;
    v25 = v17[8];
    v26 = *((_QWORD *)v17 + 18);
    v59 = v24;
    v60 = v25;
    v61 = v26;
    if ( (unsigned int)RIMIDEFillContactUsageValues(v51, v63, (int *)&v52) )
    {
      v27 = v63;
      v28 = 0;
      if ( v63 )
      {
        v29 = v51;
        v30 = v65;
        do
        {
          if ( (unsigned int)v8 >= (unsigned int)v11 )
            break;
          ++v28;
          v31 = (unsigned int)v8;
          LODWORD(v8) = v8 + 1;
          v32 = 3 * v31;
          *(_QWORD *)&v7[v32] = *(_QWORD *)v29;
          v7[v32 + 2] = *((_DWORD *)v29 + 2);
          LOWORD(v7[v32 + 2]) = v30 + 1;
          *((_DWORD *)v29 + 1) = 0;
          v29 = (struct tagINPUT_INJECTION_VALUE *)((char *)v29 + 12);
        }
        while ( v28 < v27 );
      }
    }
    else
    {
      v6 = 1;
    }
    v16 = (unsigned int)(v65 + 1);
    v65 = v16;
    if ( (unsigned int)v16 >= v15 )
    {
      if ( v6 )
        break;
      goto LABEL_29;
    }
  }
LABEL_44:
  if ( v51 )
    Win32FreePool((__int64)v51);
  if ( v7 )
    Win32FreePool((__int64)v7);
  LOBYTE(v3) = !v6;
  return v3;
}
