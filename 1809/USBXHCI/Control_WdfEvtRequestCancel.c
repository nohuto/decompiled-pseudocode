/*
 * XREFs of Control_WdfEvtRequestCancel @ 0x1C0028280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C00035F0 (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C0024DAC (TR_QueueDpcForTransferCompletion.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

void __fastcall Control_WdfEvtRequestCancel(__int64 a1)
{
  char v2; // si
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rdx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F068);
  v5 = *(_QWORD *)(v4 + 56);
  v6 = *(_QWORD *)(v5 + 56);
  v10 = *(_DWORD *)(v6 + 144);
  v9 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
  WPP_RECORDER_SF_DDi(
    *(_QWORD *)(v6 + 80),
    4u,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
    0x29u,
    (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
    v9,
    v10,
    a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v7;
  if ( *(_DWORD *)(v4 + 112) == 1 )
  {
    if ( (*(_DWORD *)(v5 + 352) & 8) != 0 )
      v2 = 1;
    else
      v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v7);
  if ( v3 )
  {
    v8 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v8 + 288));
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 112) == 2 && (!v3 || (*(_DWORD *)(v5 + 352) & 0xA) != 0) )
    v2 = 1;
  *(_DWORD *)(v4 + 112) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v2 )
    TR_QueueDpcForTransferCompletion(v5);
}
