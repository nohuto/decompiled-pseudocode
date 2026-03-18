/*
 * XREFs of RIMInjectInput @ 0x1C00E2DB0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, __int64 a2, int a3, char *a4, unsigned int Size)
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

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x5Fu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v16);
  if ( v8 >= 0 )
  {
    v9 = v16;
    RIMLockExclusive((__int64)v16 + 96);
    if ( v9[73] || v9[75] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x62u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      goto LABEL_21;
    }
    v8 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, Object);
    if ( v8 < 0 )
    {
LABEL_21:
      *((_QWORD *)v9 + 13) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v9);
      goto LABEL_22;
    }
    v10 = Object[0];
    v11 = (char *)Object[0] + 80;
    if ( !Object[0] )
      v11 = 0LL;
    Object[1] = v11;
    if ( (*((_DWORD *)v11 + 46) & 0x1000) == 0 )
    {
      v8 = -1073741811;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x61u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      goto LABEL_19;
    }
    RIMLockExclusive((__int64)(v9 + 552));
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
        rimProcessDeviceBufferAndStartRead(v9, v11);
        *((_QWORD *)v9 + 70) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 552, 0LL);
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
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x63u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v8);
  return (unsigned int)v8;
}
