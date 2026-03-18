/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C010E500
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C010C2E0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdi
  PVOID v8; // rsi
  char *v9; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x8Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v12);
  if ( v6 >= 0 )
  {
    v7 = v12;
    RIMLockExclusive((__int64)v12 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x8Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v8 = Object;
        if ( Object )
          v9 = (char *)Object + 88;
        else
          v9 = 0LL;
        if ( (*((_DWORD *)v9 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x8Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
        }
        else
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (_OWORD *)MmUserProbeAddress;
          *a3 = *(_OWORD *)(*((_QWORD *)v9 + 60) + 140LL);
        }
        ObfDereferenceObject(v8);
      }
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x8Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v6);
  return (unsigned int)v6;
}
