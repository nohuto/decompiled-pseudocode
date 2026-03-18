/*
 * XREFs of RIMAddInputOfType @ 0x1C010CB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v4; // esi
  char *v5; // rbx
  int v6; // eax
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x19u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (char *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v5[81] || v5[82] )
    {
      v4 = -1073741637;
      v7 = 28;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      v6 = *((_DWORD *)v5 + 21);
      if ( (v6 & a2) == 0 )
      {
        *((_DWORD *)v5 + 21) = a2 | v6;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        *((_QWORD *)v5 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v7 = 26;
    }
    else
    {
      v4 = -1073741811;
      v7 = 27;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v7, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v9 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x1Du, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v9);
  return (unsigned int)v4;
}
