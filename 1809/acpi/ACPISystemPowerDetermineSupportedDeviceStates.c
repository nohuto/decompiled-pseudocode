/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C009E878 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002E52C (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C005D0C0 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C009AC6C (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v4; // edi
  __int64 started; // rax
  _QWORD *v7; // rsi
  int SxD; // eax
  int v10; // ebx
  KIRQL v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  __int64 *i; // r8
  int v16; // eax
  char v17; // cl
  void *v18; // r10
  void *v19; // r8
  int v20; // edx
  __int64 v21; // rax
  int v22; // edx
  void *v23; // r8
  void *v24; // rcx
  __int64 v25; // rax
  void *v26; // r10
  void *v27; // r8
  int v28; // r9d
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+30h] [rbp-98h]
  _QWORD v32[2]; // [rsp+60h] [rbp-68h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-58h]
  KIRQL v34; // [rsp+78h] [rbp-50h]
  __int64 v35; // [rsp+80h] [rbp-48h]
  __int64 v36; // [rsp+88h] [rbp-40h]
  int v37; // [rsp+90h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp+8h] BYREF

  v4 = 0;
  v32[0] = a1 + 752;
  v32[1] = 0LL;
  SpinLock = &AcpiDeviceTreeLock;
  v36 = 768LL;
  v37 = 1;
  started = ACPIExtListStartEnum(v32);
  while ( 1 )
  {
    v7 = (_QWORD *)started;
    if ( v35 + v36 == v32[0] || v4 < 0 )
      break;
    if ( v37 == 1 )
    {
      if ( *(_DWORD *)(v35 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v35 + 684));
      KeReleaseSpinLock(SpinLock, v34);
    }
    v4 = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( v4 < 0 )
    {
LABEL_22:
      started = ACPIExtListEnumNext(v32);
    }
    else
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v38);
      v4 = SxD;
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v4 = 0;
          v10 = 1;
          v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v12 = 1;
          v13 = 1;
          do
          {
            v14 = 7;
            if ( v12 != 4 )
            {
              for ( i = (__int64 *)v7[v13 + 45]; i; i = (__int64 *)*i )
              {
                if ( *((_DWORD *)i + 4) < v14 )
                  v14 = *((_DWORD *)i + 4);
              }
            }
            v16 = 0;
            if ( v14 != 7 )
              v16 = v14;
            if ( v16 >= (int)a2 )
            {
              v26 = &unk_1C006E28A;
              v27 = &unk_1C006E28A;
              v28 = 0;
              *a3 |= 1 << v10;
              if ( v7 )
              {
                v29 = v7[1];
                v28 = (int)v7;
                if ( (v29 & 0x200000000000LL) != 0 )
                {
                  v26 = (void *)v7[70];
                  if ( (v29 & 0x400000000000LL) != 0 )
                    v27 = (void *)v7[71];
                }
              }
              WPP_RECORDER_SF_DDDDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v10 - 1,
                (_DWORD)v27,
                v28,
                v30,
                v10 - 1,
                v16 - 1,
                a2 - 1,
                v10 - 1,
                v28,
                (__int64)v26,
                (__int64)v27);
            }
            v38 = ++v10;
            v12 = v10;
            v13 = v10;
          }
          while ( v10 <= 3 );
          KeReleaseSpinLock(&AcpiPowerLock, v11);
        }
        else
        {
          v22 = 0;
          v23 = &unk_1C006E28A;
          v24 = &unk_1C006E28A;
          if ( v7 )
          {
            v25 = v7[1];
            v22 = (int)v7;
            if ( (v25 & 0x200000000000LL) != 0 )
            {
              v23 = (void *)v7[70];
              if ( (v25 & 0x400000000000LL) != 0 )
                v24 = (void *)v7[71];
            }
          }
          v31 = v22;
          LOBYTE(v22) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v22,
            15,
            11,
            (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
            v4,
            v31,
            (__int64)v23,
            (__int64)v24);
        }
        goto LABEL_22;
      }
      v17 = v38;
      v18 = &unk_1C006E28A;
      v19 = &unk_1C006E28A;
      v20 = 0;
      *a3 |= 1 << v38;
      if ( v7 )
      {
        v21 = v7[1];
        v20 = (int)v7;
        if ( (v21 & 0x200000000000LL) != 0 )
        {
          v18 = (void *)v7[70];
          if ( (v21 & 0x400000000000LL) != 0 )
            v19 = (void *)v7[71];
        }
      }
      WPP_RECORDER_SF_DDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        15,
        10,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        a2 - 1,
        v17 - 1,
        v20,
        (__int64)v18,
        (__int64)v19);
      started = ACPIExtListEnumNext(v32);
    }
  }
  if ( v37 )
    KeReleaseSpinLock(SpinLock, v34);
  return 0LL;
}
