/*
 * XREFs of RIMAreSiblingDevices @ 0x1C01359B0
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C0133B70 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rbx
  char *v5; // rsi
  unsigned int v7; // edi
  int v8; // r15d
  int v9; // eax
  int v10; // edx
  int v11; // r12d
  PVOID v12; // rsi
  const void *v13; // rcx
  unsigned int v14; // eax
  int v15; // r9d
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v18; // [rsp+40h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 130, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v7 = 0;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v9 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &v18);
  v11 = v9;
  if ( v8 < 0 || v9 < 0 )
  {
    v7 = v9;
    if ( v8 < 0 )
      v7 = v8;
    v12 = Object;
  }
  else
  {
    v10 = 0;
    v12 = Object;
    v13 = (const void *)*((_QWORD *)Object + 51);
    if ( v13 )
    {
      if ( *((_QWORD *)v18 + 51) )
      {
        v14 = *((_DWORD *)Object + 104);
        if ( v14 )
        {
          v15 = *((_DWORD *)v18 + 104);
          if ( v15 )
          {
            if ( v14 == v15 )
            {
              v10 = RtlCompareMemory(v13, *((const void **)v18 + 51), v14) == v14;
              v4 = a3;
            }
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v10;
    }
    else
    {
      *v4 = v10;
    }
  }
  if ( v8 >= 0 )
    ObfDereferenceObject(v12);
  if ( v11 >= 0 )
    ObfDereferenceObject(v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v10, 1, 131, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v7);
  }
  return v7;
}
