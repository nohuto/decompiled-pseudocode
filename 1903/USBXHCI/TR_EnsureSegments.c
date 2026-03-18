/*
 * XREFs of TR_EnsureSegments @ 0x1C0028D20
 * Callers:
 *     TR_AcquireSegments @ 0x1C002810C (TR_AcquireSegments.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0029540 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     Bulk_EP_EnableForwardProgress @ 0x1C0033FA0 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1C000CAF0 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     TR_AcquireSecureSegments @ 0x1C0027D40 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3, char a4)
{
  KSPIN_LOCK *v4; // r15
  unsigned int v5; // edi
  KIRQL v10; // al
  _QWORD *v11; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // esi
  _QWORD *v17; // rcx
  int v18; // eax
  KIRQL v19; // al
  _QWORD *v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-38h]
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h]
  _QWORD *v26; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v27; // [rsp+58h] [rbp-8h]
  KSPIN_LOCK *Context; // [rsp+90h] [rbp+30h]

  v4 = (KSPIN_LOCK *)(a1 + 96);
  v26 = 0LL;
  v5 = 0;
  v27 = 0LL;
  Context = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 40) + 120LL);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v11 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v10;
  v12 = *(_QWORD **)(a1 + 208);
  while ( v11 != v12 )
  {
    v12 = (_QWORD *)*v12;
    ++v5;
  }
  KeReleaseSpinLock(v4, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(_DWORD *)(v13 + 144);
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v13,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      16,
      (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      v14,
      *(_DWORD *)(a1 + 64),
      v5,
      a2);
  }
  if ( a2 > v5 )
  {
    v16 = a2 - v5;
    v27 = &v26;
    v26 = &v26;
    if ( a3 )
    {
      v17 = (_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 144) = a1;
      *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
      *(_DWORD *)(a1 + 152) = v16;
      *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 160) = 828862034;
    }
    else
    {
      v17 = 0LL;
    }
    if ( *(_BYTE *)(a1 + 280) )
      v18 = TR_AcquireSecureSegments(a1, v16, (__int64)&v26, a4);
    else
      v18 = CommonBuffer_AcquireBuffers(Context, v16, *(_DWORD *)(a1 + 20), (int)&v26, a1, 828862034, v17);
    v15 = v18;
    if ( v18 >= 0 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc(v4);
      v20 = v26;
      *(_BYTE *)(a1 + 104) = v19;
      if ( v20 != &v26 )
      {
        **(_QWORD **)(a1 + 216) = v20;
        v26[1] = *(_QWORD *)(a1 + 216);
        *v27 = v11;
        *(_QWORD *)(a1 + 216) = v27;
        v27 = &v26;
        v26 = &v26;
      }
      KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v16;
      LODWORD(v24) = *(_DWORD *)(a1 + 64);
      LODWORD(v23) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
      LODWORD(v22) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x11u,
        (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
        v22,
        v23,
        v24,
        v25);
    }
  }
  else
  {
    return 0;
  }
  return v15;
}
