/*
 * XREFs of UsbhBuildHardwareID @ 0x1C0024050
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0051C08 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0056DB0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005BA30 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int16 v10; // di
  unsigned __int16 v11; // r14
  _QWORD *PoolWithTag; // rbx
  _WORD *v13; // rcx
  unsigned int v14; // r12d
  char *v15; // rax
  char *v16; // r15
  _WORD *v17; // rcx
  unsigned int v18; // edi
  char *v19; // rax
  char *v20; // rsi
  char *v21; // rcx
  unsigned int v22; // r15d
  char *v23; // rax
  char *v24; // r14
  char *v25; // rcx
  int v26; // esi
  char *v27; // rax
  char *v28; // rdi
  char *v29; // rcx
  int v30; // r8d
  _QWORD *v32; // rax
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r10
  int v36; // eax
  int v37; // r8d
  __int16 v38; // r9
  __int64 v39; // r9
  int v40; // r8d
  unsigned __int64 v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  unsigned __int64 v43; // [rsp+50h] [rbp-48h]
  unsigned __int64 v45; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B8h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    v8 = v7[355];
    if ( (v8 & 0x10000) != 0 && (v8 & 4) == 0 )
    {
      v36 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v36 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v37,
            14,
            (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0LL, v36);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v38 )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          15,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
    }
    LOWORD(v9) = *((_WORD *)v7 + 705);
    v10 = *((_WORD *)v7 + 704);
    v11 = *((_WORD *)v7 + 706);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v9,
        v10,
        16,
        (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
        v10,
        v9,
        v11);
    v9 = (unsigned __int16)v9;
    v43 = v9;
    Log(a1, 4096, 1752648004, v10, (unsigned __int16)v9);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      v13 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
      for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v13 != 110; ++v13 )
        ;
      v14 = 42;
      v45 = (unsigned __int64)v10 >> 12;
      *v13 = (unsigned __int8)Nibble[v45];
      v46 = ((unsigned __int64)v10 >> 8) & 0xF;
      v13[1] = (unsigned __int8)Nibble[v46];
      v42 = v10 & 0xF;
      v41 = ((unsigned __int64)v10 >> 4) & 0xF;
      v13[2] = (unsigned __int8)Nibble[v41];
      v13[3] = (unsigned __int8)Nibble[v42];
      v15 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, 0x2AuLL);
        v17 = v16 + 24;
        *(_OWORD *)v16 = *(_OWORD *)PoolWithTag;
        *((_QWORD *)v16 + 2) = PoolWithTag[2];
        *(_OWORD *)(v16 + 24) = *(_OWORD *)L"&PID_nnnn";
        for ( *((_WORD *)v16 + 20) = aPidNnnn[8]; *v17 != 110; ++v17 )
          ;
        *v17 = (unsigned __int8)Nibble[(unsigned __int64)(unsigned __int16)v9 >> 12];
        v17[1] = (unsigned __int8)Nibble[((unsigned __int64)(unsigned __int16)v9 >> 8) & 0xF];
        v17[2] = (unsigned __int8)Nibble[(unsigned __int8)v9 >> 4];
        v17[3] = (unsigned __int8)Nibble[v9 & 0xF];
      }
      else
      {
        v14 = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v16 )
      {
        v18 = (unsigned __int16)v14 + 20;
        v19 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v14 + 20LL, 0x42554855u);
        v20 = v19;
        if ( v19 )
        {
          memset(v19, 0, (unsigned __int16)v14 + 20LL);
          memmove(v20, v16, v14);
          v21 = &v20[v14];
          *(_OWORD *)v21 = *(_OWORD *)L"&REV_nnnn";
          for ( *((_WORD *)v21 + 8) = aRevNnnn[8]; *(_WORD *)v21 != 110; v21 += 2 )
            ;
          *(_WORD *)v21 = (v11 >> 12) + 48;
          *((_WORD *)v21 + 1) = (HIBYTE(v11) & 0xF) + 48;
          *((_WORD *)v21 + 2) = ((unsigned __int8)v11 >> 4) + 48;
          *((_WORD *)v21 + 3) = (v11 & 0xF) + 48;
        }
        else
        {
          v18 = 0;
        }
        ExFreePoolWithTag(v16, 0);
        v22 = (unsigned __int16)v18 + 24;
        v23 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v18 + 24LL, 0x42554855u);
        v24 = v23;
        if ( v23 )
        {
          memset(v23, 0, (unsigned __int16)v18 + 24LL);
          memmove(v24, v20, v18);
          v25 = &v24[v18];
          *(_OWORD *)v25 = *(_OWORD *)L"USB\\VID_nnnn";
          for ( *((_QWORD *)v25 + 2) = *(_QWORD *)L"nnnn"; *(_WORD *)v25 != 110; v25 += 2 )
            ;
          *(_WORD *)v25 = (unsigned __int8)Nibble[v45];
          *((_WORD *)v25 + 1) = (unsigned __int8)Nibble[v46];
          *((_WORD *)v25 + 2) = (unsigned __int8)Nibble[v41];
          *((_WORD *)v25 + 3) = (unsigned __int8)Nibble[v42];
        }
        else
        {
          v22 = 0;
        }
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        if ( v24 )
        {
          v26 = (unsigned __int16)v22 + 22;
          v27 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v22 + 22LL, 0x42554855u);
          v28 = v27;
          if ( v27 )
          {
            memset(v27, 0, (unsigned __int16)v22 + 22LL);
            memmove(v28, v24, v22);
            v29 = &v28[v22];
            *(_OWORD *)v29 = *(_OWORD *)L"&PID_nnnn";
            for ( *((_WORD *)v29 + 8) = aPidNnnn[8]; *(_WORD *)v29 != 110; v29 += 2 )
              ;
            *(_WORD *)v29 = (unsigned __int8)Nibble[v43 >> 12];
            *((_WORD *)v29 + 1) = (unsigned __int8)Nibble[(v43 >> 8) & 0xF];
            *((_WORD *)v29 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v43 >> 4];
            *((_WORD *)v29 + 3) = (unsigned __int8)Nibble[v43 & 0xF];
          }
          else
          {
            v26 = 0;
          }
          ExFreePoolWithTag(v24, 0);
          if ( v28 )
          {
            *(_QWORD *)(a3 + 8) = v28;
            *(_DWORD *)(a3 + 4) = v26;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v30,
                18,
                (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
                (__int64)v28,
                v26);
            return 0LL;
          }
          v39 = a2;
          v40 = 1751725089;
        }
        else
        {
          v39 = a2;
          v40 = 1751725345;
        }
      }
      else
      {
        v39 = a2;
        v40 = 1751724321;
      }
      Log(a1, 4096, v40, v39, -1073741670LL);
    }
    else
    {
      Log(a1, 4096, 1751724577, a2, -1073741670LL);
    }
    return 3221225626LL;
  }
  v32 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
  if ( v32 )
  {
    *v32 = 0LL;
    v32[1] = 0LL;
    v32[2] = 0LL;
    *((_WORD *)v32 + 12) = 0;
    *(_OWORD *)v32 = *(_OWORD *)L"USB\\UNKNOWN";
    *((_DWORD *)v32 + 4) = *(_DWORD *)L"OWN";
    *((_WORD *)v32 + 10) = aUsbUnknown[10];
    *(_QWORD *)(a3 + 8) = v32;
    *(_DWORD *)(a3 + 4) = 26;
    Log(a1, 4096, 1751733537, (__int64)v32, 26LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sqd(
        WPP_GLOBAL_Control->DeviceExtension,
        v33,
        v34,
        17,
        (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
        v35,
        v35,
        26);
    return 0LL;
  }
  Log(a1, 4096, 1751724833, 0LL, -1073741670LL);
  return 3221225626LL;
}
