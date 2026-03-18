/*
 * XREFs of RIMResetPointerDevices @ 0x1C004E8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMResetPointerDevices(__int64 a1)
{
  int v2; // r14d
  _QWORD *v3; // rbx
  __int64 i; // rdi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x98u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v3 + 81) || *((_BYTE *)v3 + 82) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x99u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 71));
      for ( i = v3[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(v3, *(_QWORD *)(i + 480), 0LL);
      }
      v3[72] = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v3[14] = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x9Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v2);
  return (unsigned int)v2;
}
