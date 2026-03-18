/*
 * XREFs of RIMInjectInput @ 0x1C010EAC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  int v8; // r14d
  _BYTE *v9; // rdi
  PVOID v10; // r15
  char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rcx
  PVOID v16; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x5Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (__int64)&unk_1C01933C8,
    0,
    3u);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v16);
  if ( v8 >= 0 )
  {
    v9 = v16;
    RIMLockExclusive((__int64)v16 + 104);
    if ( v9[81] || v9[82] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x5Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      goto LABEL_21;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
    if ( v8 < 0 )
    {
LABEL_21:
      *((_QWORD *)v9 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_22;
    }
    v10 = Object[0];
    v11 = (char *)Object[0] + 88;
    if ( !Object[0] )
      v11 = 0LL;
    Object[1] = v11;
    if ( (*((_DWORD *)v11 + 46) & 0x2000) == 0 )
    {
      v8 = -1073741811;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x5Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      goto LABEL_19;
    }
    RIMLockExclusive((__int64)(v9 + 568));
    *((_DWORD *)v11 + 64) = 0;
    v12 = *((_QWORD *)v11 + 58);
    v13 = *(unsigned __int16 *)(v12 + 44);
    if ( Size < (unsigned int)v13 )
      v13 = Size;
    *((_QWORD *)v11 + 33) = (unsigned int)v13;
    if ( a3 )
    {
      v14 = *(char **)(v12 + 24);
      if ( &a4[v13] < a4 || (unsigned __int64)&a4[v13] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v14 = *(char **)(v12 + 24);
      if ( a4 == v14 )
      {
LABEL_17:
        rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v9, (struct RIMDEV *)v11);
        *((_QWORD *)v9 + 72) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 568, 0LL);
        KeLeaveCriticalRegion();
LABEL_19:
        ObfDereferenceObject(v10);
        goto LABEL_21;
      }
    }
    memmove(v14, a4, (unsigned int)v13);
    goto LABEL_17;
  }
LABEL_22:
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x60u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v8);
  return (unsigned int)v8;
}
