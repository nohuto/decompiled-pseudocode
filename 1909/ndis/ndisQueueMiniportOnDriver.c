/*
 * XREFs of ndisQueueMiniportOnDriver @ 0x1C012FD5C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_qql @ 0x1C001C18C (WPP_RECORDER_SF_qql_ea_1C001C18C.c)
 */

unsigned __int8 __fastcall ndisQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // di
  KIRQL v5; // al
  KSPIN_LOCK *v6; // rcx
  int v7; // edx
  char v9; // [rsp+30h] [rbp-28h]
  char v10[4]; // [rsp+38h] [rbp-20h]

  v2 = a2;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      19,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1,
      v9);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 392));
  v6 = (KSPIN_LOCK *)(v2 + 392);
  if ( *(_BYTE *)(v2 + 402) )
  {
    KeReleaseSpinLock(v6, v5);
    v4 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = a1;
    KeReleaseSpinLock(v6, v5);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      1u,
      0x14u,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1,
      v2,
      *(_DWORD *)v10);
  }
  return v4;
}
