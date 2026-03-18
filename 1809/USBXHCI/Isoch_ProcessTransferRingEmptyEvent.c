/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x1C002B13C
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_GetFrameNumber @ 0x1C000C31C (Controller_GetFrameNumber.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C0029E90 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDL @ 0x1C002E16C (WPP_RECORDER_SF_DDDL.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Isoch_ProcessTransferRingEmptyEvent(__int64 a1, __int64 a2, char a3)
{
  char v6; // r14
  int FrameNumber; // ebp
  KIRQL v8; // al
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  int v15; // [rsp+40h] [rbp-28h]

  v6 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
  v15 = *(unsigned __int8 *)(a2 + 11);
  WPP_RECORDER_SF_DDDL(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    v15,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v9 = *(_DWORD *)(a1 + 328);
  ++*(_DWORD *)(a1 + 268);
  v10 = v9 & 0xFFFFFFEF;
  v11 = *(_DWORD *)(a1 + 376);
  *(_BYTE *)(a1 + 104) = v8;
  *(_DWORD *)(a1 + 328) = v10;
  if ( !v11 )
  {
    v10 &= ~0x20u;
    *(_DWORD *)(a1 + 328) = v10;
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x40000000000LL) != 0
    && v11
    && (v10 & 0x20) != 0
    && FrameNumber - *(_DWORD *)(a1 + 364) >= 0 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x27u,
      (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      FrameNumber,
      v15);
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v6 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v12 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
    if ( (result & 1) == 0 )
      return ESM_AddEvent((PVOID)(v12 + 288));
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 348), 1);
    result = TR_AttemptStateChange(a1, 4, 3);
    if ( (_DWORD)result == 4 )
    {
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(a1 + 320),
        0LL);
      LOBYTE(v14) = a3;
      return Isoch_MapTransfers(a1, v14);
    }
  }
  return result;
}
