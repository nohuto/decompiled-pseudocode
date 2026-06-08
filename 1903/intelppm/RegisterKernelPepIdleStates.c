/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C0034810
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003A60 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     DecodeAcpi2CState @ 0x1C002492C (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C0024A34 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  SIZE_T v11; // r15
  PVOID PoolWithTag; // rax
  int *v13; // rdi
  __int64 **v14; // r15
  _DWORD *v15; // rbx
  unsigned int v16; // r9d
  __int64 *v17; // rdx
  _BYTE *v18; // r11
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  char v27[4]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-75h]
  unsigned int v29; // [rsp+38h] [rbp-71h]
  _QWORD v30[14]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  int v33; // [rsp+C0h] [rbp+17h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  memset(v30, 0, 0x68uLL);
  v6 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B398,
    0LL);
  if ( !dword_1C001B8F0 || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v30[0]) = dword_1C001B8F0;
    LODWORD(v30[0]) = 62;
    v30[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001B5D8)(v30);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids,
        v7);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1128);
  v9 = *(unsigned int **)(a1 + 512);
  v29 = *v8;
  v10 = v8[1];
  if ( v10 )
  {
    v11 = 16 * v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
  }
  *(_WORD *)(a2 + 18) = 1;
  *(_QWORD *)(a2 + 24) = PepIdlePrepare;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleComplete;
  *(_QWORD *)(a2 + 32) = PepIdleCancel;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = v8[1];
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)(a3 + 40) = v8[1];
  LOBYTE(v31) = 127;
  BYTE4(v32) = 1;
  HIWORD(v32) = 0;
  v33 = 0;
  v28 = 0;
  if ( !v29 )
  {
LABEL_29:
    *(_QWORD *)(a3 + 48) = v6;
    v7 = 0;
    v6 = 0LL;
    goto LABEL_30;
  }
  v13 = (int *)(a2 + 120);
  v14 = (__int64 **)(a3 + 64);
  v15 = v8 + 2;
  while ( 1 )
  {
    v27[0] = 0;
    if ( ((*v15 >> 3) & 0xF) != 0 )
      break;
LABEL_28:
    v14 += 11;
    *v13 ^= (*v15 ^ *v13) & 0x78;
    v19 = *v13 ^ (*v15 ^ *v13) & 1;
    *v13 = v19;
    v20 = v19 ^ (*v15 ^ v19) & 2;
    v21 = (unsigned __int8)v27[0];
    *v13 = v20;
    v22 = v20 & 0x7FFFFFFB | (v21 << 31);
    v23 = *v15++ & 4;
    v24 = v23 | v22;
    v25 = v28 + 1;
    *v13 = v24;
    v13 += 8;
    v28 = v25;
    if ( v25 >= v29 )
      goto LABEL_29;
  }
  if ( !v9 || !*v9 )
    goto LABEL_34;
  v16 = 0;
  v17 = &v31;
  v18 = v9 + 4;
  do
  {
    if ( *v18 == ((*v15 >> 3) & 0xF) )
      v17 = (__int64 *)&v9[4 * v16 + 1 + v16];
    ++v16;
    v18 += 20;
  }
  while ( v16 < *v9 );
  if ( v17 != &v31 )
    *v14 = v17;
  if ( (int)DecodeAcpi2CState(a1, (__int64)v17, 0LL, v27, (__int64)v14) >= 0 )
  {
    if ( !*v14 && (*v15 & 0x78u) > 8 )
    {
      *v13 |= 0x40000000u;
      v14[2] = 0LL;
      v14[3] = 0LL;
    }
    goto LABEL_28;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
LABEL_34:
  v7 = -1073741823;
LABEL_30:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
