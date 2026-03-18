/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C002AB34
 * Callers:
 *     TR_TransferEventHandler @ 0x1C00298BC (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C002A2A0 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDiqq @ 0x1C0004264 (WPP_RECORDER_SF_DDiqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C00043A4 (WPP_RECORDER_SF_DDqLDDi.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0019058 (Endpoint_HaltedCompletionCode.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C002B57C (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C002D4F8 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rsi
  bool v5; // r12
  __int64 v6; // rdi
  char v8; // r15
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  void *v12; // r8
  unsigned __int8 v13; // cl
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r10
  const char *v20; // rax
  void *v21; // rcx
  KSPIN_LOCK *v22; // rcx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]

  v3 = *(_QWORD *)a1 & 4LL;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0;
  v6 = a2;
  v8 = 1;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 344);
    if ( v4 != v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *(_WORD *)(a1 + 14) & 0x1F, v9, 0x13u, v32);
      Controller_ReportFatalError(*(_QWORD *)(v6 + 40), 2, 4126, *(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56), v6);
      return 0;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 56);
    v10 = *(_QWORD *)(v6 + 344);
    if ( v4 != v10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      HIDWORD(v36) = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      HIDWORD(v35) = HIDWORD(*(_QWORD *)a1);
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), *(_WORD *)(a1 + 14) & 0x1F, v10, 0x14u, v32);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v35) = HIDWORD(a1);
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 15),
      *(unsigned __int8 *)(a1 + 11),
      0x15u,
      v32);
  }
LABEL_11:
  v11 = *(_QWORD *)(v6 + 56);
  v12 = &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids;
  if ( (*(_WORD *)(a1 + 14) & 0x1F) != *(_DWORD *)(v11 + 144)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v11 + 80),
      2u,
      0xEu,
      0x16u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      *(unsigned __int8 *)(a1 + 15),
      *(_WORD *)(a1 + 14) & 0x1F);
    v12 = &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids;
  }
  v13 = *(_BYTE *)(a1 + 15);
  if ( v13 != *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = *(_WORD *)(a1 + 14) & 0x1F;
    LODWORD(v33) = v13;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v33,
      v34);
  }
  v14 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v14 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_QWORD *)(v6 + 56);
      LODWORD(v36) = *(_DWORD *)(v4 + 104);
      LODWORD(v35) = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
      LODWORD(v34) = *(_DWORD *)(v15 + 144);
      LODWORD(v33) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v15 + 80),
        3u,
        0xEu,
        0x18u,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        v33,
        v34,
        v35,
        v36);
    }
    v14 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      v16,
      (_DWORD)v12,
      25,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v17 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v14;
    if ( (*(_DWORD *)(v17 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v14);
  }
  if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v6 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    *(_DWORD *)(v4 + 124) = v18;
    v19 = *(_QWORD *)(v6 + 56);
    _m_prefetchw((const void *)(v19 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v19 + 32), 0x20u) & 0x20) != 0 )
    {
      v20 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_30:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v19,
        *(_QWORD *)(v19 + 8),
        *(_QWORD *)(v19 + 24),
        0x2000000LL,
        v20,
        0LL,
        0LL);
      return v8;
    }
    v21 = (void *)(v19 + 288);
    goto LABEL_55;
  }
  v22 = (KSPIN_LOCK *)(v6 + 96);
  if ( (unsigned __int8)(v18 - 26) <= 2u )
  {
    *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v22);
    v23 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v23;
    if ( v3 )
    {
      if ( *(_DWORD *)(v4 + 108) == *(_DWORD *)(v4 + 104) )
      {
        *(_DWORD *)(v4 + 124) = 1;
      }
      else if ( *(_BYTE *)(a1 + 11) == 28 )
      {
        *(_DWORD *)(v4 + 124) = 28;
      }
      v24 = *(_DWORD *)(v4 + 128) - v23;
    }
    else
    {
      v24 = 0;
    }
    *(_DWORD *)(v6 + 356) = v24;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
    v19 = *(_QWORD *)(v6 + 56);
    _m_prefetchw((const void *)(v19 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v19 + 32), 0x10u) & 0x10) != 0 )
    {
      v20 = "Received duplicate Stopped Transfer Events";
      goto LABEL_30;
    }
    _m_prefetchw((const void *)(v19 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v19 + 32), 8u) & 8) == 0 )
      return v8;
    v21 = (void *)(v19 + 288);
LABEL_55:
    ESM_AddEvent(v21);
    return v8;
  }
  *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v22);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v26 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *(unsigned __int8 *)(a1 + 11);
    if ( !v26 && *(_DWORD *)(v4 + 116) != 3 )
    {
      LOBYTE(v25) = a3;
      Control_Transfer_CompleteCancelable(v6, v25);
    }
  }
  v27 = *(_DWORD *)(v6 + 356);
  if ( v27 )
  {
    v28 = v27 - 1;
    *(_DWORD *)(v6 + 356) = v28;
    if ( !v28 )
      v5 = (*(_BYTE *)(v6 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
  if ( v5 )
  {
    v29 = *(_QWORD *)(v6 + 56);
    if ( !*(_BYTE *)(v29 + 37)
      || (v30 = *(_QWORD *)(v29 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 20)) == *(_DWORD *)(v30 + 8)) )
    {
      v21 = (void *)(v29 + 288);
      goto LABEL_55;
    }
  }
  return v8;
}
