/*
 * XREFs of UsbhBuildDeviceID @ 0x1C0023DF0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0056B80 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0056DB0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005BA30 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  unsigned __int16 v15; // r10
  char v16; // r11
  _QWORD *PoolWithTag; // rbx
  _WORD *v18; // rcx
  int v19; // ebp
  PVOID v20; // rax
  __int64 v21; // rdi
  _WORD *v22; // rcx
  int v23; // r8d
  int v25; // eax
  int v26; // r8d
  __int16 v27; // r9
  int v28; // r8d
  int v29; // [rsp+20h] [rbp-48h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    v8 = v7[355];
    if ( (v8 & 0x10000) != 0 && (v8 & 4) == 0 )
    {
      v25 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v25 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v26,
            10,
            (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0LL, v25);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v27 )
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
  v12 = v10;
  Log(a1, 4096, 1685473604, v9, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v15, v13, v14, v29, v15, v16);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    v18 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
    for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v18 != 110; ++v18 )
      ;
    v19 = 46;
    *v18 = (unsigned __int8)Nibble[v11 >> 12];
    v18[1] = (unsigned __int8)Nibble[(v11 >> 8) & 0xF];
    v18[2] = (unsigned __int8)Nibble[(unsigned __int8)v11 >> 4];
    v18[3] = (unsigned __int8)Nibble[v11 & 0xF];
    v20 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2EuLL, 0x42554855u);
    v21 = (__int64)v20;
    if ( v20 )
    {
      memset(v20, 0, 0x2EuLL);
      v22 = (_WORD *)(v21 + 24);
      *(_OWORD *)v21 = *(_OWORD *)PoolWithTag;
      *(_QWORD *)(v21 + 16) = PoolWithTag[2];
      *(_OWORD *)(v21 + 24) = *(_OWORD *)L"&PID_nnnn";
      for ( *(_WORD *)(v21 + 40) = aPidNnnn[8]; *v22 != 110; ++v22 )
        ;
      *v22 = (unsigned __int8)Nibble[v12 >> 12];
      v22[1] = (unsigned __int8)Nibble[(v12 >> 8) & 0xF];
      v22[2] = (unsigned __int8)Nibble[(unsigned __int8)v12 >> 4];
      v22[3] = (unsigned __int8)Nibble[v12 & 0xF];
    }
    else
    {
      v19 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v21 )
    {
      *(_QWORD *)(a3 + 8) = v21;
      *(_DWORD *)(a3 + 4) = v19;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v23,
          13,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
          v21,
          v19);
      return 0LL;
    }
    v28 = 1684615474;
  }
  else
  {
    v28 = 1684615457;
  }
  Log(a1, 4096, v28, a2, -1073741670LL);
  return 3221225626LL;
}
