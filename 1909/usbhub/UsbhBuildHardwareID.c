/*
 * XREFs of UsbhBuildHardwareID @ 0x1C0024C14
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0053C6C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0058FAC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0059114 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C005DEEC (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // r14
  _QWORD *PoolWithTag; // rbx
  _WORD *v13; // rcx
  _OWORD *v14; // r15
  _WORD *v15; // rcx
  unsigned int v16; // ebx
  SIZE_T v17; // r15
  char *v18; // rax
  char *v19; // rcx
  unsigned __int16 v20; // r14
  char *v21; // rbx
  char *v22; // rcx
  __int64 v23; // r14
  char *v24; // r15
  char *v25; // rcx
  int v26; // r8d
  _QWORD *v28; // rax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r10
  int v32; // eax
  int v33; // r8d
  __int64 v34; // r9
  int v35; // r8d
  unsigned int v36; // r10d
  void *Src; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned int v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]
  unsigned __int64 v41; // [rsp+60h] [rbp-38h]
  unsigned __int64 v42; // [rsp+68h] [rbp-30h]
  int Size; // [rsp+A8h] [rbp+10h]
  char *Sizea; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v45; // [rsp+B8h] [rbp+20h]

  if ( a2 )
  {
    v7 = PdoExt(a2);
    v8 = v7[355];
    if ( (v8 & 0x10000) != 0 && (v8 & 4) == 0 )
    {
      v32 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v32 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v33,
            14,
            (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0LL, v32);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          15,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
    }
    v9 = *((_WORD *)v7 + 705);
    v10 = *((_WORD *)v7 + 704);
    v45 = v9;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *((_WORD *)v7 + 706);
    }
    else
    {
      v11 = *((_WORD *)v7 + 706);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          16,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
          v10,
          v9,
          *((_WORD *)v7 + 706));
        v9 = v45;
      }
    }
    Log(a1, 4096, 1752648004, v10, v9);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v13 = PoolWithTag;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
      for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v13 != 110; ++v13 )
        ;
      v40 = (unsigned __int64)v10 >> 12;
      *v13 = (unsigned __int8)Nibble[v40];
      v41 = ((unsigned __int64)v10 >> 8) & 0xF;
      v13[1] = (unsigned __int8)Nibble[v41];
      v38 = v10 & 0xF;
      v42 = ((unsigned __int64)v10 >> 4) & 0xF;
      v13[2] = (unsigned __int8)Nibble[v42];
      v13[3] = (unsigned __int8)Nibble[v38];
      Size = 42;
      v14 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
      Src = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x2AuLL);
        v15 = (_WORD *)v14 + 12;
        *v14 = *(_OWORD *)PoolWithTag;
        *((_QWORD *)v14 + 2) = PoolWithTag[2];
        *(_OWORD *)((char *)v14 + 24) = *(_OWORD *)L"&PID_nnnn";
        *((_WORD *)v14 + 20) = aPidNnnn[8];
        while ( *v15 != 110 )
          ++v15;
        *v15 = (unsigned __int8)Nibble[(unsigned __int64)v45 >> 12];
        v15[1] = (unsigned __int8)Nibble[HIBYTE(v45) & 0xF];
        v15[2] = (unsigned __int8)Nibble[(unsigned __int8)v45 >> 4];
        v15[3] = (unsigned __int8)Nibble[v45 & 0xF];
      }
      else
      {
        Size = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v14 )
      {
        v16 = Size;
        v17 = (unsigned __int16)Size + 20LL;
        v18 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v17, 0x42554855u);
        Sizea = v18;
        if ( v18 )
        {
          memset(v18, 0, v17);
          memmove(Sizea, Src, v16);
          v19 = &Sizea[v16];
          *(_OWORD *)v19 = *(_OWORD *)L"&REV_nnnn";
          *((_WORD *)v19 + 8) = aRevNnnn[8];
          while ( *(_WORD *)v19 != 110 )
            v19 += 2;
          *(_WORD *)v19 = (v11 >> 12) + 48;
          *((_WORD *)v19 + 1) = (HIBYTE(v11) & 0xF) + 48;
          *((_WORD *)v19 + 2) = ((unsigned __int8)v11 >> 4) + 48;
          *((_WORD *)v19 + 3) = (v11 & 0xF) + 48;
        }
        else
        {
          LODWORD(v17) = 0;
        }
        ExFreePoolWithTag(Src, 0);
        v20 = v17 + 24;
        v39 = (unsigned __int16)v17 + 24;
        v21 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned __int16)v17 + 24LL, 0x42554855u);
        if ( v21 )
        {
          memset(v21, 0, (unsigned __int16)v17 + 24LL);
          memmove(v21, Sizea, (unsigned int)v17);
          v22 = &v21[(unsigned int)v17];
          *(_OWORD *)v22 = *(_OWORD *)L"USB\\VID_nnnn";
          *((_QWORD *)v22 + 2) = *(_QWORD *)L"nnnn";
          while ( *(_WORD *)v22 != 110 )
            v22 += 2;
          *(_WORD *)v22 = (unsigned __int8)Nibble[v40];
          *((_WORD *)v22 + 1) = (unsigned __int8)Nibble[v41];
          *((_WORD *)v22 + 2) = (unsigned __int8)Nibble[v42];
          *((_WORD *)v22 + 3) = (unsigned __int8)Nibble[v38];
        }
        else
        {
          v20 = 0;
          v39 = 0;
        }
        if ( Sizea )
          ExFreePoolWithTag(Sizea, 0);
        if ( v21 )
        {
          v23 = v20 + 22LL;
          v24 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v23, 0x42554855u);
          if ( v24 )
          {
            memset(v24, 0, v23);
            memmove(v24, v21, v39);
            v25 = &v24[v39];
            *(_OWORD *)v25 = *(_OWORD *)L"&PID_nnnn";
            *((_WORD *)v25 + 8) = aPidNnnn[8];
            while ( *(_WORD *)v25 != 110 )
              v25 += 2;
            *(_WORD *)v25 = (unsigned __int8)Nibble[(unsigned __int64)v45 >> 12];
            *((_WORD *)v25 + 1) = (unsigned __int8)Nibble[((unsigned __int64)v45 >> 8) & 0xF];
            *((_WORD *)v25 + 2) = (unsigned __int8)Nibble[((unsigned __int64)v45 >> 4) & 0xF];
            *((_WORD *)v25 + 3) = (unsigned __int8)Nibble[v45 & 0xF];
          }
          else
          {
            LODWORD(v23) = 0;
          }
          ExFreePoolWithTag(v21, 0);
          if ( v24 )
          {
            *(_QWORD *)(a3 + 8) = v24;
            *(_DWORD *)(a3 + 4) = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_Sd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  v26,
                  18,
                  (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
                  (__int64)v24,
                  v23);
            }
            return 0LL;
          }
          v34 = a2;
          v35 = 1751725089;
        }
        else
        {
          v34 = a2;
          v35 = 1751725345;
        }
      }
      else
      {
        v34 = a2;
        v35 = 1751724321;
      }
    }
    else
    {
      v34 = a2;
      v35 = 1751724577;
    }
  }
  else
  {
    v28 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
    if ( v28 )
    {
      *v28 = 0LL;
      v28[1] = 0LL;
      v28[2] = 0LL;
      *((_WORD *)v28 + 12) = 0;
      *(_OWORD *)v28 = *(_OWORD *)L"USB\\UNKNOWN";
      *((_DWORD *)v28 + 4) = *(_DWORD *)L"OWN";
      *((_WORD *)v28 + 10) = aUsbUnknown[10];
      *(_QWORD *)(a3 + 8) = v28;
      *(_DWORD *)(a3 + 4) = 26;
      Log(a1, 4096, 1751733537, (__int64)v28, 26LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v29,
          v30,
          17,
          (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
          v31,
          v31,
          26);
      return 0LL;
    }
    v34 = 0LL;
    v35 = 1751724833;
  }
  Log(a1, 4096, v35, v34, -1073741670LL);
  return v36;
}
