/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C001CD84
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001EB0 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C000C964 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C002314C (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r15
  unsigned int *v4; // r12
  unsigned int v8; // r14d
  bool IsAnyHypervisorPresent; // al
  unsigned int v10; // ebx
  void *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  int *v15; // rdi
  __int64 v16; // rcx
  int *v17; // r15
  __int128 v18; // xmm0
  unsigned int *v19; // r14
  unsigned int v20; // r8d
  _BYTE *v21; // r10
  int v22; // eax
  bool v23; // al
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  char v31; // [rsp+30h] [rbp-40h] BYREF
  int v32; // [rsp+34h] [rbp-3Ch]
  unsigned int v33; // [rsp+38h] [rbp-38h]
  __int64 v34; // [rsp+40h] [rbp-30h]
  _QWORD v35[2]; // [rsp+48h] [rbp-28h] BYREF
  int v36; // [rsp+58h] [rbp-18h]

  v3 = *(unsigned int **)(a1 + 1120);
  v4 = *(unsigned int **)(a1 + 496);
  v8 = *v3;
  v33 = *v3;
  *(_WORD *)(a2 + 18) = 257;
  *(_QWORD *)(a2 + 40) = PepIdlePreselect;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v10 = 0;
  v11 = PepIdleTest;
  if ( IsAnyHypervisorPresent )
    v11 = PepIdleVmTest;
  *(_QWORD *)(a2 + 48) = v11;
  *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
  *(_QWORD *)(a2 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleCompleteV2;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = 0;
  *(_BYTE *)(a2 + 16) = 1;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113F0,
    0LL);
  *(_BYTE *)(a1 + 1145) = 0;
  v35[1] = 0x100000000LL;
  v13 = 0LL;
  v35[0] = 127LL;
  v36 = 0;
  v32 = 0;
  if ( !v8 )
    goto LABEL_26;
  v14 = a3 + 64;
  v34 = 0LL;
  v15 = (int *)(a2 + 120);
  v16 = 0LL;
  v17 = (int *)(v3 + 1);
  while ( 1 )
  {
    LOBYTE(v12) = 0;
    v18 = *(_OWORD *)(v16 + *(_QWORD *)(a1 + 1128));
    v31 = 0;
    *((_OWORD *)v15 + 1) = v18;
    if ( (((unsigned int)*v17 >> 3) & 0xF) != 0 )
      break;
    v15[1] = v17[1];
LABEL_22:
    v13 = (unsigned int)(v13 + 1);
    v23 = (*v17 & 0x200) != 0;
    v32 = v13;
    *(_BYTE *)(v14 + 81) = v23;
    v14 += 88LL;
    *v15 ^= (*v15 ^ *v17) & 0x78;
    v24 = *v15;
    v15[2] = v17[2];
    v25 = v24 ^ (*v17 ^ v24) & 0x80;
    *v15 = v25;
    v26 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)*v17) & 0x100;
    *v15 = v26;
    v27 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)*v17) & 1;
    *v15 = v27;
    v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*v17) & 2;
    *v15 = v28;
    v29 = *v17;
    v17 += 3;
    *v15 = v28 & 0x7FFFFFFB | v29 & 4 | ((unsigned __int8)v12 << 31);
    v15 += 8;
    v16 = v34 + 16;
    v34 += 16LL;
    if ( (unsigned int)v13 >= v8 )
      goto LABEL_26;
  }
  if ( !v4 )
    goto LABEL_25;
  v13 = *v4;
  if ( !(_DWORD)v13 )
    goto LABEL_25;
  v19 = (unsigned int *)v35;
  v20 = 0;
  v21 = v4 + 4;
  do
  {
    if ( *v21 == (((unsigned int)*v17 >> 3) & 0xF) )
      v19 = &v4[4 * v20 + 1 + v20];
    ++v20;
    v21 += 20;
  }
  while ( v20 < (unsigned int)v13 );
  if ( v19 != (unsigned int *)v35 )
    *(_QWORD *)v14 = v19;
  if ( (int)DecodeAcpi2CState(a1, (_DWORD)v19, 0, (unsigned int)&v31, v14) >= 0 )
  {
    if ( !*(_QWORD *)v14 && (*v17 & 0x78u) > 8 )
    {
      *v15 |= 0x40000000u;
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    v22 = v17[1];
    if ( v22 == -1 )
      v22 = 10 * *((unsigned __int16 *)v19 + 7);
    v8 = v33;
    LODWORD(v13) = v32;
    v15[1] = v22;
    LOBYTE(v12) = v31;
    goto LABEL_22;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
LABEL_25:
  v10 = -1073741823;
LABEL_26:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C00113F0,
    v12,
    v13);
  return v10;
}
