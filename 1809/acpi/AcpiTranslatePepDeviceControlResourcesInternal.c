/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00AD8B0
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1C00AD870 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005A0A8 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005A200 (WPP_RECORDER_SF_sqqD.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0098708 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1C00ADA68 (AcpiValidatePepDeviceControlResources.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        ULONG_PTR a1,
        _BYTE *a2,
        int a3,
        __int64 a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int *v15; // r14
  __int64 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-48h]
  _DWORD *v19; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  P = 0LL;
  if ( a2 && a3 )
  {
    v9 = PnpBiosResourcesToNtResources(a1, a2, 4LL, (unsigned int **)&P);
    v10 = v9;
    if ( v9 < 0 )
    {
      v18 = v9;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Eu,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        a2,
        v18);
      v7 = P;
      goto LABEL_19;
    }
    v7 = P;
    if ( P )
    {
      v10 = AcpiValidatePepDeviceControlResources(P);
      if ( v10 < 0 )
      {
        WPP_RECORDER_SF_sqqD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v11,
          0x15u,
          0x1Fu,
          v17,
          "AcpiTranslatePepDeviceControlResourcesInternal");
        goto LABEL_19;
      }
      v10 = PnpIoResourceListToCmResourceList(v7, &v19);
      if ( v10 < 0 )
      {
        WPP_RECORDER_SF_qqD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, 0x15u, 0x20u, v17);
        v6 = v19;
        goto LABEL_19;
      }
      v6 = v19;
    }
    v13 = 40;
    if ( v6 )
    {
      v14 = v6[4];
      if ( v14 > 1 )
        v13 = 20 * (v14 + 1);
    }
    v15 = a6;
    if ( *a6 >= v13 )
    {
      memmove(a5, v6, v13);
      v10 = 0;
    }
    else
    {
      v10 = -1073741789;
    }
    *v15 = v13;
  }
  else
  {
    v10 = -1073741808;
  }
LABEL_19:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
