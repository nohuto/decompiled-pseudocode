/*
 * XREFs of ACPISystemPowerInitializeRootMapping @ 0x1C002AEA8
 * Callers:
 *     ACPIRootIrpQueryCapabilities @ 0x1C009FF90 (ACPIRootIrpQueryCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00A016C (ACPISystemPowerProcessRootMapping.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00A01F4 (ACPISystemPowerProcessSxD.c)
 */

__int64 __fastcall ACPISystemPowerInitializeRootMapping(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  _DWORD *v7; // rax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  KIRQL v12; // al
  int v13; // edx
  __int64 v14; // xmm1_8
  __int64 v15; // r8
  void *v16; // rcx
  void *v17; // rdx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // r10
  char v21[8]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]

  if ( (*(_QWORD *)(a1 + 8) & 0x400000000000000LL) != 0 || (unsigned int)(*(_DWORD *)(a1 + 320) - 2) > 1 )
  {
LABEL_2:
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 460);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 476);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 484);
    return 0LL;
  }
  v5 = 5LL;
  v6 = *(_OWORD *)(a1 + 460);
  v24 = *(_DWORD *)(a1 + 484);
  v7 = (_DWORD *)&v22 + 2;
  v23 = *(_QWORD *)(a1 + 476);
  v22 = v6;
  DWORD1(v22) = 1;
  do
  {
    v8 = *(_DWORD *)((char *)v7 + a2 - ((_QWORD)&v22 + 8) + 24);
    if ( v8 )
      *v7 = v8;
    ++v7;
    --v5;
  }
  while ( v5 );
  v9 = ACPISystemPowerProcessSxD(a1, &v22, v21);
  if ( v9 >= 0 )
  {
    v10 = v24;
    if ( !v24 )
      v10 = 4;
    v24 = v10;
    v11 = ACPISystemPowerProcessRootMapping(a1, &v22);
    if ( v11 < 0 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v19 = &unk_1C006FE7D;
      v20 = &unk_1C006FE7D;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = *(void **)(a1 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = *(void **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0xFu,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          v11,
          a1,
          (__int64)v19,
          (__int64)v20);
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x400000000000000uLL);
      v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v13 = v24;
      v14 = v23;
      *(_OWORD *)(a1 + 460) = v22;
      *(_QWORD *)(a1 + 476) = v14;
      *(_DWORD *)(a1 + 484) = v13;
      KeReleaseSpinLock(&AcpiPowerLock, v12);
    }
    goto LABEL_2;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = &unk_1C006FE7D;
  v17 = &unk_1C006FE7D;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = *(void **)(a1 + 560);
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = *(void **)(a1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0xEu,
      (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
      v9,
      a1,
      (__int64)v16,
      (__int64)v17);
  return (unsigned int)v9;
}
