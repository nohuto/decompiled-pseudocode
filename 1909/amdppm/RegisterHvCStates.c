/*
 * XREFs of RegisterHvCStates @ 0x1C00203FC
 * Callers:
 *     RegisterHvIdleStates @ 0x1C00202F0 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     DecodeAcpi2CState @ 0x1C002E814 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int *v3; // rdi
  unsigned int *PoolWithTag; // rax
  int v5; // ebx
  unsigned __int8 v6; // r15
  unsigned int v7; // edx
  unsigned int i; // ebx
  __int64 v9; // r10
  char v10; // cl
  __int64 j; // r8
  char v12; // cl
  unsigned int *v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 512);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    goto LABEL_35;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x188uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x188uLL);
  v6 = 1;
  HIDWORD(v17) = *(_DWORD *)(a1 + 48);
  LODWORD(v17) = 62;
  v18 = v3;
  if ( *(_BYTE *)(v1 + 16) != 1 )
  {
    *(_QWORD *)(v3 + 5) = 0LL;
    v3[4] = 1;
    v20 = 0x100000000LL;
    v19 = 127LL;
    v21 = 0;
    DecodeAcpi2CState(a1, (unsigned int)&v19, (_DWORD)v3 + 8, 0, 0LL);
    ++*v3;
  }
  v7 = *(_DWORD *)v1;
  for ( i = 0; i < *(_DWORD *)v1; ++v6 )
  {
    if ( v6 > 3u )
      break;
    v9 = *v3;
    if ( (unsigned int)v9 >= 0x10 )
      break;
    v10 = *(_BYTE *)(v1 + 20LL * i + 16);
    if ( (unsigned __int8)v10 > 3u )
      v10 = 3;
    if ( v10 == v6 )
    {
      for ( j = i + 1; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
      {
        v12 = *(_BYTE *)(v1 + 20 * j + 16);
        if ( (unsigned __int8)v12 > 3u )
          v12 = 3;
        if ( v12 != v6 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
          break;
        ++i;
      }
      v13 = &v3[4 * v9 + 2 + 2 * v9];
      v13[2] = v6;
      v14 = v1 + 4 * (i + 4LL * i + 1);
      v13[3] = *(unsigned __int16 *)(v14 + 14);
      v13[4] = *(_DWORD *)(v14 + 16);
      if ( (int)DecodeAcpi2CState(a1, v14, (_DWORD)v13, 0, 0LL) < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
      else
        ++*v3;
    }
    else
    {
      --i;
    }
    v7 = *(_DWORD *)v1;
    ++i;
  }
  if ( *v3 )
  {
    if ( qword_1C0013698 )
      v15 = qword_1C0013698(&v17);
    else
      v15 = -1073741822;
    v5 = 0;
    if ( v15 != -1073741637 )
      v5 = v15;
    if ( v5 >= 0 )
    {
      v5 = 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xDu,
        (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
        v5,
        v17,
        v18);
    }
  }
  else
  {
LABEL_35:
    v5 = -1073741823;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
