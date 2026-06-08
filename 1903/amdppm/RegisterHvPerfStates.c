/*
 * XREFs of RegisterHvPerfStates @ 0x1C0020950
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     RegisterHvCap @ 0x1C0020E30 (RegisterHvCap.c)
 *     DecodeAcpiPStates @ 0x1C002CB64 (DecodeAcpiPStates.c)
 *     DecodeAcpiTStates @ 0x1C002CD08 (DecodeAcpiTStates.c)
 *     GetPerfDomain @ 0x1C002D700 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterHvPerfStates(__int64 a1)
{
  unsigned int *v2; // r12
  unsigned int *v3; // rsi
  unsigned int v4; // ebx
  unsigned int *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rax
  int v8; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rax
  unsigned int PerfDomain; // eax
  int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // r9
  _DWORD *v15; // rdx
  __int64 v16; // r10
  signed __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // rax
  char v23; // cl
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r10
  _DWORD *v27; // r9
  __int64 v28; // rdx
  char v29; // cl
  unsigned __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rbx
  int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-51h]
  __int64 v36; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v37[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v38[13]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v39; // [rsp+E0h] [rbp+67h] BYREF
  int v40; // [rsp+E8h] [rbp+6Fh] BYREF
  int v41; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v42; // [rsp+F8h] [rbp+7Fh] BYREF

  memset(v38, 0, 0x20uLL);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  memset(v37, 0, sizeof(v37));
  v7 = *(_QWORD *)(a1 + 264);
  LODWORD(v37[0]) = 62;
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
      qword_1C0013418,
      0LL);
    PerfDomain = GetPerfDomain(a1, v38, &v40);
    LODWORD(v39) = PerfDomain;
    if ( v40 == 253 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( v40 == 254 )
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
                  (unsigned int)&v42,
                  (__int64)&v36,
                  (__int64)&v40,
                  (__int64)&v41) >= 0 )
      {
        v13 = 64;
        v37[1] = v3;
        *v3 = v4;
        if ( v4 < 0x40 )
          v13 = v4;
        v14 = v36;
        v15 = v2 + 4;
        v16 = v42;
        v17 = (char *)v3 - (char *)v2;
        v18 = v13;
        do
        {
          *(_DWORD *)((char *)v15 + v17 + 24) = *(v15 - 2);
          *(_DWORD *)((char *)v15 + v17 + 28) = *v15;
          *(_DWORD *)((char *)v15 + v17 + 32) = v15[1];
          *(_DWORD *)((char *)v15 + v17 + 36) = *(v15 - 1);
          v19 = v16;
          if ( !v16 )
            v19 = *((_QWORD *)v15 + 3);
          *(_QWORD *)((char *)v15 + v17 + 8) = v19;
          v20 = v14;
          if ( !v14 )
            v20 = *((_QWORD *)v15 + 3);
          v21 = v40;
          *(_QWORD *)((char *)v15 + v17 + 16) = v20;
          v22 = *((_QWORD *)v15 + 1) << v21;
          v23 = v41;
          *(_QWORD *)((char *)v15 + v17 - 8) = v22;
          *(_QWORD *)((char *)v15 + v17) = *((_QWORD *)v15 + 2) << v23;
          v15 += 12;
          --v18;
        }
        while ( v18 );
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
                  (unsigned int)&v42,
                  (__int64)&v36,
                  (__int64)&v40,
                  (__int64)&v41) >= 0 )
      {
        v37[2] = v5;
        *((_QWORD *)v5 + 405) = v42;
        *((_QWORD *)v5 + 406) = v36;
        v24 = 100;
        *v5 = v6;
        if ( v6 < 0x64 )
          v24 = v6;
        v25 = 0LL;
        v26 = v24;
        v27 = v5 + 7;
        do
        {
          v28 = *(_QWORD *)(a1 + 488);
          v25 += 20LL;
          v29 = v40;
          *(v27 - 1) = *(_DWORD *)(v28 + v25 - 16);
          *v27 = *(_DWORD *)(v28 + v25 - 8);
          v27 += 8;
          *(v27 - 7) = *(_DWORD *)(v28 + v25 - 12);
          v30 = (unsigned __int64)*(unsigned int *)(v28 + v25 - 4) << v29;
          v31 = v41;
          *(_QWORD *)(v27 - 13) = v30;
          *(_QWORD *)(v27 - 11) = (unsigned __int64)*(unsigned int *)(v28 + v25) << v31;
          --v26;
        }
        while ( v26 );
      }
    }
    if ( v3 )
      v3[770] = dword_1C0013858;
    if ( v5 )
      v5[802] = dword_1C0013858;
    ++dword_1C0013858;
    v8 = 0;
    ResetEnumerationContext(v38);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v39) )
    {
      do
      {
        v32 = v39;
        RegisterHvCap(v39);
        HIDWORD(v37[0]) = *(_DWORD *)(v32 + 48);
        if ( qword_1C0013688 )
          v33 = qword_1C0013688(v37);
        else
          v33 = -1073741822;
        if ( v33 < 0 )
        {
          v8 = v33;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = v33;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0xFu,
              (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
              v35);
          }
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v39) );
      if ( v8 < 0 )
      {
        if ( v3 )
          *v3 = 0;
        if ( v5 )
          *v5 = 0;
        ResetEnumerationContext(v38);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v39) )
        {
          HIDWORD(v37[0]) = *(_DWORD *)(v39 + 48);
          if ( qword_1C0013688 )
            qword_1C0013688(v37);
        }
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0013418);
    goto LABEL_61;
  }
  v8 = -1073741670;
LABEL_61:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return (unsigned int)v8;
}
