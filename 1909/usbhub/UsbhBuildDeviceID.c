/*
 * XREFs of UsbhBuildDeviceID @ 0x1C0024990
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0058EE4 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0058FAC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0059114 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005DEEC (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r11
  unsigned __int64 v11; // rbp
  int v12; // r8d
  int v13; // r9d
  unsigned __int16 v14; // r10
  char v15; // r11
  _QWORD *PoolWithTag; // rbx
  _WORD *v17; // rcx
  _OWORD *v18; // rbp
  _WORD *v19; // rcx
  int v20; // r8d
  int v22; // eax
  int v23; // r8d
  int v24; // r8d
  unsigned int v25; // r10d
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+78h] [rbp+10h]
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    v8 = v7[355];
    if ( (v8 & 0x10000) != 0 && (v8 & 4) == 0 )
    {
      v22 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v22 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v23,
            10,
            (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0LL, v22);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
    }
    v9 = *((_WORD *)v7 + 704);
    v10 = *((_WORD *)v7 + 705);
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v11 = v9;
  v28 = v10;
  Log(a1, 4096, 1685473604, v9, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v14, v12, v13, v26, v14, v15);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v17 = PoolWithTag;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
    for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v17 != 110; ++v17 )
      ;
    *v17 = (unsigned __int8)Nibble[v11 >> 12];
    v17[1] = (unsigned __int8)Nibble[(v11 >> 8) & 0xF];
    v17[2] = (unsigned __int8)Nibble[(unsigned __int8)v11 >> 4];
    v17[3] = (unsigned __int8)Nibble[v11 & 0xF];
    v27 = 46;
    v18 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2EuLL, 0x42554855u);
    if ( v18 )
    {
      memset(v18, 0, 0x2EuLL);
      v19 = (_WORD *)v18 + 12;
      *v18 = *(_OWORD *)PoolWithTag;
      *((_QWORD *)v18 + 2) = PoolWithTag[2];
      *(_OWORD *)((char *)v18 + 24) = *(_OWORD *)L"&PID_nnnn";
      *((_WORD *)v18 + 20) = aPidNnnn[8];
      while ( *v19 != 110 )
        ++v19;
      *v19 = (unsigned __int8)Nibble[v28 >> 12];
      v19[1] = (unsigned __int8)Nibble[(v28 >> 8) & 0xF];
      v19[2] = (unsigned __int8)Nibble[(unsigned __int8)v28 >> 4];
      v19[3] = (unsigned __int8)Nibble[v28 & 0xF];
    }
    else
    {
      v27 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v18 )
    {
      *(_DWORD *)(a3 + 4) = v27;
      *(_QWORD *)(a3 + 8) = v18;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v20,
            13,
            (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
            (__int64)v18,
            v27);
      }
      return 0LL;
    }
    v24 = 1684615474;
  }
  else
  {
    v24 = 1684615457;
  }
  Log(a1, 4096, v24, a2, -1073741670LL);
  return v25;
}
