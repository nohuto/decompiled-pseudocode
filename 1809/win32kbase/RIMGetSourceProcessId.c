/*
 * XREFs of RIMGetSourceProcessId @ 0x1C010E6C0
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C010C330 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, _DWORD *a3)
{
  int v6; // r15d
  int v7; // ebx
  _BYTE *v8; // rdi
  PVOID v9; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x8Eu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v14);
  if ( v7 >= 0 )
  {
    v8 = v14;
    RIMLockExclusive((__int64)v14 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x8Fu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v10 = (char *)Object + 88;
        else
          v10 = 0LL;
        v11 = *((_QWORD *)v10 + 48);
        if ( v11 )
          v6 = *(_DWORD *)(v11 + 84);
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (_DWORD *)MmUserProbeAddress;
        *a3 = v6;
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v8 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x90u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v7);
  return (unsigned int)v7;
}
