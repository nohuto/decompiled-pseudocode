/*
 * XREFs of RIMGetSourceProcessId @ 0x1C0139560
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C01368B0 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0054C20 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00942F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, ULONG64 a3)
{
  char *v3; // r14
  int v5; // ebx
  int v6; // edx
  int v7; // edi
  _BYTE *v8; // rsi
  int v9; // edx
  CompositionObject *v10; // r14
  char *v11; // r15
  __int64 v12; // rdx
  _DWORD *v13; // rax
  CompositionObject *v15; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 140, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 141, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(v3, 3u, 1, (PVOID *)&v15);
      if ( v7 >= 0 )
      {
        v10 = v15;
        v11 = (char *)v15 + 88;
        if ( !v15 )
          v11 = 0LL;
        if ( *((_QWORD *)v11 + 48) )
        {
          RIMLockExclusive((__int64)&gObListLock);
          v12 = *(_QWORD *)(*((_QWORD *)v11 + 48) + 88LL);
          if ( v12 )
            v5 = *(_DWORD *)(v12 + 56);
          CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
        }
        v13 = (_DWORD *)a3;
        if ( a3 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        *v13 = v5;
        CompositionObject::Release(v10);
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v8 + 104));
    ObfDereferenceObject(v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v6, 1, 142, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v7);
  }
  return (unsigned int)v7;
}
