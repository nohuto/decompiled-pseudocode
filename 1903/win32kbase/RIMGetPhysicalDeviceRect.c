/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C0139350
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0136860 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, ULONG64 a3)
{
  char *v3; // r12
  int v5; // edx
  int v6; // ebx
  _BYTE *v7; // r14
  int v8; // edx
  int v9; // edx
  PVOID v10; // r13
  char *v11; // rcx
  _OWORD *v12; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  PVOID v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 136, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v16);
  if ( v6 >= 0 )
  {
    v7 = v16;
    RIMLockExclusive((__int64)v16 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 138, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v3, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 88;
        else
          v11 = 0LL;
        if ( (*((_DWORD *)v11 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 137, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
        }
        else
        {
          v12 = (_OWORD *)a3;
          if ( a3 >= MmUserProbeAddress )
            v12 = (_OWORD *)MmUserProbeAddress;
          *v12 = *(_OWORD *)(*((_QWORD *)v11 + 60) + 140LL);
        }
        ObfDereferenceObject(v10);
      }
    }
    *((_QWORD *)v7 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v5, 1, 139, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v6);
  }
  return (unsigned int)v6;
}
