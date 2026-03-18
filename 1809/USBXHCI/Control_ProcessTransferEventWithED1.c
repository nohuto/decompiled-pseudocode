/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C00263AC
 * Callers:
 *     TR_TransferEventHandler @ 0x1C002516C (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0025B50 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDiqq @ 0x1C00036F8 (WPP_RECORDER_SF_DDiqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0003838 (WPP_RECORDER_SF_DDqLDDi.c)
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00161B8 (Endpoint_HaltedCompletionCode.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0026D94 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0028B78 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  bool v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v7; // rbx
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // r8
  void *v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // r10
  const char *v24; // rax
  void *v25; // rcx
  KSPIN_LOCK *v26; // rcx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rdx
  bool v30; // zf
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = *(_QWORD *)a1 & 4LL;
  v5 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = a2;
  v9 = 1;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 344);
    if ( v5 != v10 )
    {
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*(_DWORD *)(a1 + 12)), v10, 0x13u, v36);
      Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      return 0;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 56);
    v11 = *(_QWORD *)(v7 + 344);
    if ( v5 != v11 )
    {
      v40 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8uLL;
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), HIBYTE(*(_DWORD *)(a1 + 12)), v11, 0x14u, v36);
    }
  }
  HIDWORD(v39) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDi(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF,
    (*(_DWORD *)(a1 + 12) >> 2) & 1,
    0x15u,
    v36);
  v12 = &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids;
  v13 = *(_QWORD *)(v7 + 56);
  v14 = *(_DWORD *)(a1 + 12);
  v15 = HIWORD(v14) & 0x1F;
  v16 = HIBYTE(v14);
  if ( v15 != *(_DWORD *)(v13 + 144) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v13 + 80),
      2u,
      0xEu,
      0x16u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v16,
      v15);
    LOBYTE(v16) = *(_BYTE *)(a1 + 15);
    v12 = &WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids;
  }
  if ( (_BYTE)v16 != *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL) )
  {
    v17 = *(_DWORD *)(a1 + 12);
    LODWORD(v38) = HIWORD(v17) & 0x1F;
    LODWORD(v37) = HIBYTE(v17);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v37,
      v38);
  }
  v18 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  if ( v18 > *(_DWORD *)(v5 + 104) )
  {
    v19 = *(_QWORD *)(v7 + 56);
    LODWORD(v40) = *(_DWORD *)(v5 + 104);
    LODWORD(v39) = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
    LODWORD(v38) = *(_DWORD *)(v19 + 144);
    LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v19 + 80),
      3u,
      0xEu,
      0x18u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v37,
      v38,
      v39,
      v40);
    v18 = 0;
  }
  v20 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
  LOBYTE(v20) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    v20,
    (_DWORD)v12,
    25,
    (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_QWORD *)(v5 + 24),
    v5);
  if ( !v4 )
  {
    v21 = *(_QWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 108) = v18;
    if ( (*(_DWORD *)(v21 + 32) & 1) != 0 && *(_DWORD *)(v5 + 64) == 2 )
      memmove(*(void **)(v5 + 80), *(const void **)(*(_QWORD *)(v5 + 88) + 16LL), v18);
  }
  if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v7 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    *(_DWORD *)(v5 + 124) = v22;
    v23 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v23 + 32), 0x20u) & 0x20) != 0 )
    {
      v24 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_19:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v23,
        *(_QWORD *)(v23 + 8),
        *(_QWORD *)(v23 + 24),
        0x2000000LL,
        v24,
        0LL,
        0LL);
      return v9;
    }
    v25 = (void *)(v23 + 288);
    goto LABEL_44;
  }
  v26 = (KSPIN_LOCK *)(v7 + 96);
  if ( (unsigned __int8)(v22 - 26) <= 2u )
  {
    *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v26);
    v27 = *(_DWORD *)(v5 + 132) + 1;
    *(_DWORD *)(v5 + 132) = v27;
    if ( v4 )
    {
      if ( *(_DWORD *)(v5 + 108) == *(_DWORD *)(v5 + 104) )
      {
        *(_DWORD *)(v5 + 124) = 1;
      }
      else if ( *(_BYTE *)(a1 + 11) == 28 )
      {
        *(_DWORD *)(v5 + 124) = 28;
      }
      v28 = *(_DWORD *)(v5 + 128) - v27;
    }
    else
    {
      v28 = 0;
    }
    *(_DWORD *)(v7 + 356) = v28;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    v23 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v23 + 32), 0x10u) & 0x10) != 0 )
    {
      v24 = "Received duplicate Stopped Transfer Events";
      goto LABEL_19;
    }
    _m_prefetchw((const void *)(v23 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v23 + 32), 8u) & 8) == 0 )
      return v9;
    v25 = (void *)(v23 + 288);
LABEL_44:
    ESM_AddEvent(v25);
    return v9;
  }
  *(_BYTE *)(v7 + 104) = KeAcquireSpinLockRaiseToDpc(v26);
  ++*(_DWORD *)(v5 + 132);
  if ( v4 )
  {
    v30 = *(_DWORD *)(v5 + 112) == 3;
    *(_DWORD *)(v5 + 124) = *(unsigned __int8 *)(a1 + 11);
    if ( !v30 && *(_DWORD *)(v5 + 116) != 3 )
    {
      LOBYTE(v29) = a3;
      Control_Transfer_CompleteCancelable(v7, v29);
    }
  }
  v31 = *(_DWORD *)(v7 + 356);
  if ( v31 )
  {
    v32 = v31 - 1;
    *(_DWORD *)(v7 + 356) = v32;
    if ( !v32 )
      v3 = (*(_BYTE *)(v7 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
  if ( v3 )
  {
    v33 = *(_QWORD *)(v7 + 56);
    if ( !*(_BYTE *)(v33 + 37)
      || (v34 = *(_QWORD *)(v33 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 20)) == *(_DWORD *)(v34 + 8)) )
    {
      v25 = (void *)(v33 + 288);
      goto LABEL_44;
    }
  }
  return v9;
}
