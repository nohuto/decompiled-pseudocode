/*
 * XREFs of RIMFreeInputBuffer @ 0x1C01386F0
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C0136710 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreeUserMem @ 0x1C013CCE0 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  int v5; // edx
  char v6; // bp
  _QWORD *v7; // rdi
  int v8; // edx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 87, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  result = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) || *((_BYTE *)v7 + 82) )
    {
      v6 = -69;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 88, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 71));
      RIMFreeUserMem(v7, v2);
      v7[72] = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v7[14] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 13, 0LL);
    KeLeaveCriticalRegion();
    result = ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_D((_DWORD)gRimLog, v5, 1, 89, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v6);
  }
  return result;
}
