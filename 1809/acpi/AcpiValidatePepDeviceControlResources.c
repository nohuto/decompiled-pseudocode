/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1C00ADA68
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00AD8B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0059CE8 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_iiid @ 0x1C0059E98 (WPP_RECORDER_SF_iiid.c)
 *     AMLICheckIfIoRangeValid @ 0x1C0060FC0 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C00613D4 (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // edi
  _DWORD *v7; // r10
  ULONGLONG v8; // rsi
  __int64 v9; // r9
  unsigned __int16 v10; // r9
  ULONGLONG v11; // rax
  int v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v17; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp+60h] BYREF

  v4 = -1073741823;
  if ( !*a1 || !a1[9] )
    return (unsigned int)v4;
  v4 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = &a1[8 * v6];
    if ( *((_BYTE *)v7 + 41) == 1 )
      break;
    if ( *((_BYTE *)v7 + 41) == 2 )
    {
      WPP_RECORDER_SF_Dd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v13);
      return (unsigned int)-1073741823;
    }
    if ( *((_BYTE *)v7 + 41) != 3 )
    {
      if ( *((_BYTE *)v7 + 41) == 5 )
        goto LABEL_10;
      if ( *((_BYTE *)v7 + 41) != 7 )
      {
        if ( *((unsigned __int8 *)v7 + 41) != 132 )
          return (unsigned int)-1073741637;
LABEL_10:
        v4 = 0;
        goto LABEL_19;
      }
    }
    v8 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &MinimumAddress, &MaximumAddress);
    a2 = MaximumAddress;
    if ( v8 + MinimumAddress - 1 != MaximumAddress )
    {
      v10 = 36;
      goto LABEL_26;
    }
    if ( v8 > 0xFFFFFFFF )
    {
      v10 = 37;
      goto LABEL_26;
    }
    v17 = MinimumAddress;
    v4 = AMLIValidateFirmwareMemoryAddress((__int64 *)&v17, v8, a3, v9);
    if ( v4 < 0 )
    {
      v10 = 39;
      goto LABEL_26;
    }
LABEL_19:
    if ( (unsigned int)++v6 >= a1[9] )
      return (unsigned int)v4;
  }
  v11 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v7 + 10), 0LL, &v18, v14);
  if ( v11 + v18 - 1 == v14[0] )
  {
    if ( !AMLICheckIfIoRangeValid(v18, v11) )
    {
      WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x23u, v13);
      v4 = -1073741823;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_19;
  }
  v10 = 33;
LABEL_26:
  WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v10, v13);
  return (unsigned int)-1073741823;
}
