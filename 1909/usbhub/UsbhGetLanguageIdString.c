/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C0021C54
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C001DAE0 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C001DB1C (UsbhGetStringFromDevice.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00417A4 (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v8; // rbx
  int StringFromDevice; // esi
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // r8d
  unsigned int v13; // edx
  _WORD *v14; // rsi
  __int64 v15; // rcx
  _WORD *v16; // rdi
  int v17; // ebp
  PDEVICE_OBJECT v19; // rcx
  int v20; // r9d
  int v21; // [rsp+48h] [rbp-40h]
  int v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  if ( !*((_BYTE *)v6 + 1415) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v19 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v20 = 23;
LABEL_27:
    WPP_RECORDER_SF_(v19->DeviceExtension, 0, 1, v20, (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xFFuLL);
  v23 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)v22, (__int64)v8, &v23, 0, 0);
  v10 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v10 == -1073741824 || (v11 = v23, !UsbhValidateStringDescriptor(v10, (unsigned __int8 *)v8, v23, v22)) )
  {
    LOBYTE(v21) = 0;
    UsbhException(
      a1,
      *((unsigned __int16 *)v6 + 714),
      63,
      (int)v8,
      v23,
      StringFromDevice,
      v22[0],
      usbfile_idstring_c,
      1762,
      v21);
    ExFreePoolWithTag(v8, 0);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v19 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v20 = 24;
    goto LABEL_27;
  }
  v13 = (*(unsigned __int8 *)v8 >> 1) - 1;
  if ( *(unsigned __int8 *)v8 >> 1 == 1 )
  {
    ExFreePoolWithTag(v8, 0);
    return 3221225659LL;
  }
  v14 = v8 + 1;
  v15 = v13;
  v16 = v8;
  while ( v15 )
  {
    *v16++ = *v14++;
    --v15;
  }
  v8[v13] = 0;
  *(_DWORD *)(a3 + 4) = v11;
  *(_QWORD *)(a3 + 8) = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
      v13);
  v17 = 0;
  while ( *v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          v12,
          26,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
          v17++,
          *v8);
    }
    ++v8;
  }
  return 0LL;
}
