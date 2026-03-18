/*
 * XREFs of RIMInjectInput @ 0x1C01372D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, size_t Size)
{
  char *v5; // r14
  int v7; // edx
  int v8; // edi
  struct RawInputManagerObject *v9; // rsi
  int v10; // edx
  int v11; // edx
  PVOID v12; // r13
  char *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rcx
  void *v17; // r9
  PVOID v19; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-40h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 90, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v19);
  if ( v8 >= 0 )
  {
    v9 = (struct RawInputManagerObject *)v19;
    RIMLockExclusive((__int64)v19 + 104);
    if ( *((_BYTE *)v9 + 81) || *((_BYTE *)v9 + 82) )
    {
      v8 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 93, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v8 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, Object);
      if ( v8 >= 0 )
      {
        v12 = Object[0];
        v13 = (char *)Object[0] + 88;
        if ( !Object[0] )
          v13 = 0LL;
        Object[1] = v13;
        if ( (*((_DWORD *)v13 + 46) & 0x2000) != 0 )
        {
          RIMLockExclusive((__int64)v9 + 568);
          *((_DWORD *)v13 + 64) = 0;
          v14 = *((_QWORD *)v13 + 58);
          v15 = *(unsigned __int16 *)(v14 + 44);
          if ( (unsigned int)Size < (unsigned int)v15 )
            v15 = (unsigned int)Size;
          *((_QWORD *)v13 + 33) = (unsigned int)v15;
          if ( a3 )
          {
            v17 = *(void **)(v14 + 24);
            if ( &a4[v15] < a4 || (unsigned __int64)&a4[v15] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v17, a4, (unsigned int)v15);
          }
          else
          {
            v16 = *(char **)(v14 + 24);
            if ( a4 != v16 )
              memmove(v16, a4, (unsigned int)v15);
          }
          rimProcessDeviceBufferAndStartRead(v9, (struct RIMDEV *)v13);
          *((_QWORD *)v9 + 72) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v9 + 568, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          v8 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 92, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
        }
        ObfDereferenceObject(v12);
      }
    }
    *((_QWORD *)v9 + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v9 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v7, 1, 94, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v8);
  }
  return (unsigned int)v8;
}
