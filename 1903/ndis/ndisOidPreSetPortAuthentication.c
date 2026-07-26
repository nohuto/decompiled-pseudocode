/*
 * XREFs of ndisOidPreSetPortAuthentication @ 0x1C006E3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // r12
  int v5; // edx
  __int64 v6; // rax
  _DWORD *v7; // r15
  __int64 v8; // rsi
  KIRQL v9; // r13
  KIRQL v10; // cl
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v13[6]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = *a1;
  v2 = a1[4];
  v4 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  memset(v13, 0, sizeof(v13));
  v6 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      192,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
    v6 = *a1;
  }
  if ( v6 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v7 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v8 = *(_QWORD *)(v1 + 16);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
          *(_QWORD *)(v8 + 520) = KeGetCurrentThread();
          if ( (*(_DWORD *)(v8 + 124) & 0x80u) == 0 )
          {
            *(_DWORD *)(v8 + 3320) = v7[1];
            *(_DWORD *)(v8 + 3324) = v7[2];
            *(_DWORD *)(v8 + 3328) = v7[3];
            *(_DWORD *)(v8 + 3332) = v7[4];
            ndisIfSetInterfaceState(v8, 1, v9);
          }
          *(_QWORD *)(v8 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), v9);
        }
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v1 + 124) & 0x80u) != 0 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3320) = v7[1];
        *(_DWORD *)(v1 + 3324) = v7[2];
        *(_DWORD *)(v1 + 3328) = v7[3];
        *(_DWORD *)(v1 + 3332) = v7[4];
        LODWORD(v13[0]) = 3146112;
        HIDWORD(v13[0]) = *(_DWORD *)(v1 + 480);
        v13[1] = *(_QWORD *)(v1 + 792);
        v13[2] = *(_QWORD *)(v1 + 800);
        LODWORD(v13[3]) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
        HIDWORD(v13[3]) = *(_DWORD *)(v1 + 3320);
        v13[4] = *(_QWORD *)(v1 + 3324);
        LODWORD(v13[5]) = *(_DWORD *)(v1 + 3332);
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v13;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807394;
        StatusIndication.StatusBufferSize = 48;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        *(_QWORD *)(v2 + 52) = 20LL;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        *(_DWORD *)(v2 + 56) = 20;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    v4 = 1;
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      193,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
  }
  return v4;
}
