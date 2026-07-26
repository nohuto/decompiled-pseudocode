/*
 * XREFs of ndisCancelOidRequestOnFilter @ 0x1C00442C8
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestInternal @ 0x1C0044178 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     ndisGrabOidCancellationList @ 0x1C00453AC (ndisGrabOidCancellationList.c)
 */

__int64 __fastcall ndisCancelOidRequestOnFilter(__int64 a1, __int64 a2, char a3)
{
  KSPIN_LOCK *v3; // rsi
  struct _KTHREAD *CurrentThread; // r9
  KIRQL v8; // r11
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD v13[2]; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v14[6]; // [rsp+68h] [rbp+27h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 144);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  LOBYTE(CurrentThread) = a3;
  *(_DWORD *)(a1 + 160) = 2307173;
  ndisGrabOidCancellationList(a1 + 168, v13, a2, CurrentThread);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock(v3, v8);
  while ( 1 )
  {
    result = v13[0];
    if ( (_QWORD *)v13[0] == v13 )
      break;
    if ( *(_QWORD **)(v13[0] + 8LL) != v13 || (v10 = *(_QWORD *)v13[0], *(_QWORD *)(*(_QWORD *)v13[0] + 8LL) != v13[0]) )
      __fastfail(3u);
    v13[0] = *(_QWORD *)v13[0];
    *(_QWORD *)(v10 + 8) = v13;
    v11 = result - 72;
    memset(v14, 0, sizeof(v14));
    HIDWORD(v14[5]) |= 1u;
    v14[4] = v11;
    LODWORD(v14[5]) = -1073676276;
    v14[2] = a1;
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(0xC9u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v11, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq(
        *(_QWORD *)(a1 + 704),
        &CancelFilterOidRequestEx,
        (const GUID *)(a1 + 680),
        a1 + 680,
        *(_DWORD *)(a1 + 696),
        *(_QWORD *)(*(_QWORD *)(a1 + 704) + 1312LL),
        *(_DWORD *)(v11 + 32),
        12,
        128);
    ndisOidRequestComplete((__int64)v14, v12);
  }
  return result;
}
