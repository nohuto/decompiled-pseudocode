/*
 * XREFs of ndisCancelOidRequestOnMiniport @ 0x1C006A314
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestInternal @ 0x1C0069FC4 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxqdq @ 0x1C0068D18 (McTemplateK0jqxqdq.c)
 *     ndisGrabOidCancellationList @ 0x1C006AF14 (ndisGrabOidCancellationList.c)
 */

__int64 __fastcall ndisCancelOidRequestOnMiniport(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r9
  KIRQL v7; // r11
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  _QWORD v14[2]; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v15[6]; // [rsp+68h] [rbp+27h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  memset(v15, 0, sizeof(v15));
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  LOBYTE(v6) = a3;
  ndisGrabOidCancellationList(a1 + 2192, v14, a2, v6);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  while ( 1 )
  {
    result = v14[0];
    if ( (_QWORD *)v14[0] == v14 )
      break;
    if ( *(_QWORD **)(v14[0] + 8LL) != v14 || (v11 = *(_QWORD *)v14[0], *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) != v14[0]) )
      __fastfail(3u);
    v12 = v14[0] - 72LL;
    v14[0] = *(_QWORD *)v14[0];
    v13 = v14;
    *(_QWORD *)(v11 + 8) = v14;
    v15[4] = result - 72;
    memset(&v15[1], 0, 24);
    v15[5] = 0x1C001000CLL;
    v15[0] = a1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v13,
        11,
        183,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v12,
        a1);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq(
        v11,
        &CancelMiniportOidRequestEx,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_DWORD *)(v12 + 32),
        12);
    ndisOidRequestComplete((__int64)v15, (int)v13, v8, v9);
  }
  return result;
}
