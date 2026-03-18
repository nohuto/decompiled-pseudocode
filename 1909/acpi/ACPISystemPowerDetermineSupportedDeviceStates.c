/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0012560
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0012560 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00A016C (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0012560 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002ECD0 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C005EEC0 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C009703C (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v5; // edi
  char *started; // rax
  char *v7; // rsi
  int SxD; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  __int64 *i; // r8
  int v14; // eax
  char v15; // cl
  void *v16; // r10
  void *v17; // r8
  int v18; // edx
  __int64 v19; // rax
  void *v20; // r8
  int v21; // edx
  void *v22; // rcx
  __int64 v23; // rax
  void *v24; // r10
  void *v25; // r8
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-B8h]
  char v29; // [rsp+30h] [rbp-A8h]
  _QWORD v30[2]; // [rsp+68h] [rbp-70h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-60h]
  __int128 v32; // [rsp+80h] [rbp-58h]
  __int64 v33; // [rsp+90h] [rbp-48h]
  __int64 v34; // [rsp+98h] [rbp-40h]
  KIRQL v35; // [rsp+E0h] [rbp+8h]
  int v36; // [rsp+F8h] [rbp+20h] BYREF

  v34 = 1LL;
  v30[0] = a1 + 752;
  v30[1] = 0LL;
  SpinLock = &AcpiDeviceTreeLock;
  v33 = 768LL;
  v32 = 0LL;
  v5 = 0;
  started = ACPIExtListStartEnum((__int64)v30);
  while ( 1 )
  {
    v7 = started;
    if ( *((_QWORD *)&v32 + 1) + v33 == v30[0] || v5 < 0 )
      break;
    if ( (_DWORD)v34 == 1 )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v32 + 1) + 684LL) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 684LL));
      KeReleaseSpinLock(SpinLock, v32);
    }
    v5 = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( v5 < 0 )
      goto LABEL_22;
    SxD = ACPISystemPowerGetSxD(v7, a2, &v36);
    v5 = SxD;
    if ( SxD < 0 )
    {
      if ( SxD == -1073741772 )
      {
        v10 = 1;
        v35 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v11 = 1;
        do
        {
          v12 = 7;
          if ( v11 != 4 )
          {
            for ( i = *(__int64 **)&v7[8 * v11 + 360]; i; i = (__int64 *)*i )
            {
              if ( *((_DWORD *)i + 4) < v12 )
                v12 = *((_DWORD *)i + 4);
            }
          }
          v14 = 0;
          if ( v12 != 7 )
            v14 = v12;
          if ( v14 >= (int)a2 )
          {
            v24 = &unk_1C006FE7D;
            v25 = &unk_1C006FE7D;
            v26 = 0;
            *a3 |= 1 << v10;
            if ( v7 )
            {
              v27 = *((_QWORD *)v7 + 1);
              v26 = (int)v7;
              if ( (v27 & 0x200000000000LL) != 0 )
              {
                v24 = (void *)*((_QWORD *)v7 + 70);
                if ( (v27 & 0x400000000000LL) != 0 )
                  v25 = (void *)*((_QWORD *)v7 + 71);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDDDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v10 - 1,
                (_DWORD)v25,
                v26,
                v28,
                v10 - 1,
                v14 - 1,
                a2 - 1,
                v10 - 1,
                v26,
                (__int64)v24,
                (__int64)v25);
          }
          v11 = ++v10;
        }
        while ( v10 <= 3 );
        v36 = v10;
        KeReleaseSpinLock(&AcpiPowerLock, v35);
        v5 = 0;
      }
      else
      {
        v20 = &unk_1C006FE7D;
        v21 = 0;
        v22 = &unk_1C006FE7D;
        if ( v7 )
        {
          v23 = *((_QWORD *)v7 + 1);
          v21 = (int)v7;
          if ( (v23 & 0x200000000000LL) != 0 )
          {
            v20 = (void *)*((_QWORD *)v7 + 70);
            if ( (v23 & 0x400000000000LL) != 0 )
              v22 = (void *)*((_QWORD *)v7 + 71);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = v21;
          LOBYTE(v21) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            15,
            11,
            (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
            v5,
            v29,
            (__int64)v20,
            (__int64)v22);
        }
      }
      goto LABEL_22;
    }
    v15 = v36;
    v16 = &unk_1C006FE7D;
    v17 = &unk_1C006FE7D;
    v18 = 0;
    *a3 |= 1 << v36;
    if ( v7 )
    {
      v19 = *((_QWORD *)v7 + 1);
      v18 = (int)v7;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v16 = (void *)*((_QWORD *)v7 + 70);
        if ( (v19 & 0x400000000000LL) != 0 )
          v17 = (void *)*((_QWORD *)v7 + 71);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_22:
      started = ACPIExtListEnumNext((__int64)v30);
    }
    else
    {
      WPP_RECORDER_SF_DDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        15,
        10,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        a2 - 1,
        v15 - 1,
        v18,
        (__int64)v16,
        (__int64)v17);
      started = ACPIExtListEnumNext((__int64)v30);
    }
  }
  if ( (_DWORD)v34 )
    KeReleaseSpinLock(SpinLock, v32);
  return 0LL;
}
