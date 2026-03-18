/*
 * XREFs of RIMAddInputOfType @ 0x1C0135110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00565AC (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMAddInputOfType(char *a1, int a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // ebx
  unsigned int *v6; // rsi
  int v7; // edx
  unsigned int v8; // eax
  int v9; // r9d
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 25, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (unsigned int *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v6 + 81) || *((_BYTE *)v6 + 82) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v9 = 28;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      v8 = v6[21];
      if ( (v8 & v2) == 0 )
      {
        v6[21] = v2 | v8;
        RIMDiscoverDevicesOfInputType(v6);
LABEL_18:
        *((_QWORD *)v6 + 14) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 26, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v6);
        goto LABEL_19;
      }
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v9 = 26;
    }
    else
    {
      v5 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v9 = 27;
    }
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, v9, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
    goto LABEL_18;
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v4, 1, 29, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v5);
  }
  return (unsigned int)v5;
}
