/*
 * XREFs of RegisterHvPerfStates @ 0x1C002F810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 *     RegisterHvCap @ 0x1C002EE00 (RegisterHvCap.c)
 *     DecodeAcpiPStates @ 0x1C0035A90 (DecodeAcpiPStates.c)
 *     DecodeAcpiTStates @ 0x1C0035C34 (DecodeAcpiTStates.c)
 */

__int64 __fastcall RegisterHvPerfStates(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int *v3; // rsi
  unsigned int v4; // r15d
  unsigned int *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rax
  int v8; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rax
  unsigned int PerfDomain; // eax
  int v12; // r12d
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // r10
  unsigned int v24; // eax
  __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  char v29; // cl
  _DWORD *v30; // rbx
  int v31; // eax
  __int64 v33; // [rsp+28h] [rbp-51h]
  __int64 v34; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v35[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v36[13]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD *v37; // [rsp+E0h] [rbp+67h] BYREF
  int v38; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+77h]
  __int64 v40; // [rsp+F8h] [rbp+7Fh] BYREF

  memset(v36, 0, 0x20uLL);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  memset(v35, 0, sizeof(v35));
  v7 = *(_QWORD *)(a1 + 264);
  LODWORD(v35[0]) = 62;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v2 = *(unsigned int **)(a1 + 440);
    else
      v2 = *(unsigned int **)(a1 + 432);
    v4 = *v2;
  }
  if ( (v7 & 0x3300000) != 0 )
    v6 = **(_DWORD **)(a1 + 488);
  if ( !(v6 + v4) )
    return (unsigned int)-1073741823;
  if ( v4 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC28uLL, 0x72637250u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0xC28uLL);
  }
  if ( !v6 )
    goto LABEL_18;
  v10 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCB8uLL, 0x72637250u);
  v5 = v10;
  if ( v10 )
  {
    memset(v10, 0, 0xCB8uLL);
LABEL_18:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    PerfDomain = GetPerfDomain(a1, (__int64)v36, &v37);
    v39 = PerfDomain;
    if ( (_DWORD)v37 == 253 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( (_DWORD)v37 == 254 )
        v12 = 2;
    }
    if ( v4 )
    {
      v3[771] = PerfDomain;
      v3[772] = v12;
      if ( (int)DecodeAcpiPStates(
                  a1,
                  (int)v3 + 3096,
                  (int)v3 + 3104,
                  (unsigned int)&v40,
                  (__int64)&v34,
                  (__int64)&v37,
                  (__int64)&v38) >= 0 )
      {
        v13 = v34;
        v14 = 0LL;
        v15 = v40;
        v35[1] = v3;
        *v3 = v4;
        while ( 1 )
        {
          v16 = 64;
          if ( v4 < 0x40 )
            v16 = v4;
          if ( (unsigned int)v14 >= v16 )
            break;
          v17 = 6 * v14;
          v3[2 * v17 + 10] = v2[12 * v14 + 2];
          v3[2 * v17 + 11] = v2[12 * v14 + 4];
          v3[2 * v17 + 12] = v2[12 * v14 + 5];
          v3[2 * v17 + 13] = v2[12 * v14 + 3];
          v18 = v15;
          if ( !v15 )
            v18 = *(_QWORD *)&v2[12 * v14 + 10];
          *(_QWORD *)&v3[12 * v14 + 6] = v18;
          v19 = v13;
          if ( !v13 )
            v19 = *(_QWORD *)&v2[12 * v14 + 10];
          v20 = (char)v37;
          *(_QWORD *)&v3[12 * v14 + 8] = v19;
          v21 = *(_QWORD *)&v2[12 * v14 + 6] << v20;
          v22 = v38;
          *(_QWORD *)&v3[12 * v14 + 2] = v21;
          *(_QWORD *)&v3[12 * v14 + 4] = *(_QWORD *)&v2[12 * v14 + 8] << v22;
          v14 = (unsigned int)(v14 + 1);
        }
      }
      PerfDomain = v39;
    }
    if ( v6 )
    {
      v5[803] = PerfDomain;
      v5[804] = v12;
      if ( (int)DecodeAcpiTStates(
                  a1,
                  (int)v5 + 3224,
                  (int)v5 + 3232,
                  (unsigned int)&v40,
                  (__int64)&v34,
                  (__int64)&v37,
                  (__int64)&v38) >= 0 )
      {
        v23 = 0LL;
        v35[2] = v5;
        *((_QWORD *)v5 + 405) = v40;
        *((_QWORD *)v5 + 406) = v34;
        *v5 = v6;
        while ( 1 )
        {
          v24 = 100;
          if ( v6 < 0x64 )
            v24 = v6;
          if ( (unsigned int)v23 >= v24 )
            break;
          v25 = *(_QWORD *)(a1 + 488);
          v26 = (char)v37;
          v27 = 8LL * (unsigned int)v23;
          v5[v27 + 6] = *(_DWORD *)(v25 + 20 * v23 + 4);
          v5[v27 + 7] = *(_DWORD *)(v25 + 20 * v23 + 12);
          v5[v27 + 8] = *(_DWORD *)(v25 + 20 * v23 + 8);
          v28 = (unsigned __int64)*(unsigned int *)(v25 + 20 * v23 + 16) << v26;
          v29 = v38;
          *(_QWORD *)&v5[v27 + 2] = v28;
          *(_QWORD *)&v5[v27 + 4] = (unsigned __int64)*(unsigned int *)(v25 + 20 * v23 + 20) << v29;
          v23 = (unsigned int)(v23 + 1);
        }
      }
    }
    if ( v3 )
      v3[770] = dword_1C001B7D8;
    if ( v5 )
      v5[802] = dword_1C001B7D8;
    ++dword_1C001B7D8;
    v8 = 0;
    ResetEnumerationContext(v36);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v37) )
    {
      do
      {
        v30 = v37;
        RegisterHvCap(v37);
        HIDWORD(v35[0]) = v30[12];
        if ( qword_1C001B608 )
          v31 = qword_1C001B608(v35);
        else
          v31 = -1073741822;
        if ( v31 < 0 )
        {
          v8 = v31;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v33) = v31;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0xFu,
              (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
              v33);
          }
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v37) );
      if ( v8 < 0 )
      {
        if ( v3 )
          *v3 = 0;
        if ( v5 )
          *v5 = 0;
        ResetEnumerationContext(v36);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v37) )
        {
          HIDWORD(v35[0]) = v37[12];
          if ( qword_1C001B608 )
            qword_1C001B608(v35);
        }
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001B398);
    goto LABEL_63;
  }
  v8 = -1073741670;
LABEL_63:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return (unsigned int)v8;
}
