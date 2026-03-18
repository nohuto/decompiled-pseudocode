/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1010
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1C00B0FD0 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005BDF4 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005BF4C (WPP_RECORDER_SF_sqqD.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0093518 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B11FC (AcpiValidatePepDeviceControlResources.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        ULONG_PTR a1,
        ULONG_PTR a2,
        int a3,
        __int64 a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int *v14; // r14
  __int64 v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-48h]
  _DWORD *v18; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  P = 0LL;
  if ( !a2 || !a3 )
  {
    v9 = -1073741808;
    goto LABEL_24;
  }
  v9 = PnpBiosResourcesToNtResources(a1, a2, 4LL, (unsigned int **)&P);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = v9;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Eu,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        a2,
        v17);
    }
    v7 = P;
    goto LABEL_24;
  }
  v7 = P;
  if ( P )
  {
    v9 = AcpiValidatePepDeviceControlResources(P);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqqD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v10,
          0x15u,
          0x1Fu,
          v16,
          "AcpiTranslatePepDeviceControlResourcesInternal");
      goto LABEL_24;
    }
    v9 = PnpIoResourceListToCmResourceList(v7, &v18);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, 0x15u, 0x20u, v16);
      v6 = v18;
      goto LABEL_24;
    }
    v6 = v18;
  }
  v12 = 40;
  if ( v6 )
  {
    v13 = v6[4];
    if ( v13 > 1 )
      v12 = 20 * (v13 + 1);
  }
  v14 = a6;
  if ( *a6 >= v12 )
  {
    memmove(a5, v6, v12);
    v9 = 0;
  }
  else
  {
    v9 = -1073741789;
  }
  *v14 = v12;
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
