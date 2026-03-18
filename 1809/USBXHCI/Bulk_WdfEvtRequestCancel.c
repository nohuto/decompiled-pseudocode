/*
 * XREFs of Bulk_WdfEvtRequestCancel @ 0x1C0033510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0003C28 (WPP_RECORDER_SF_DDDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C0024DAC (TR_QueueDpcForTransferCompletion.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

void __fastcall Bulk_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bp
  char v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 *v11; // rcx
  int v12; // [rsp+20h] [rbp-38h]

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F068);
  v4 = *(_QWORD *)(v3 + 56);
  WPP_RECORDER_SF_DDDi(
    *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
    4u,
    *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
    0xDu,
    v12);
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 1 )
  {
    v5 = *(_DWORD *)(v4 + 324);
    if ( (v5 & 0x20) != 0 )
    {
      v6 = v4 + 368;
      v7 = *(_QWORD *)(v4 + 368);
      if ( v7 != v4 + 368 )
      {
        **(_QWORD **)(v4 + 408) = v7;
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = *(_QWORD *)(v4 + 408);
        **(_QWORD **)(v4 + 376) = v4 + 400;
        *(_QWORD *)(v4 + 408) = *(_QWORD *)(v4 + 376);
        *(_QWORD *)(v4 + 376) = v4 + 368;
        *(_QWORD *)v6 = v6;
      }
      v1 = 1;
    }
    else
    {
      v2 = 1;
      *(_DWORD *)(v4 + 324) = v5 | 0x10;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v2 )
  {
    v8 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v8 + 288));
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 2 )
  {
    v9 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
      || (v10 = *(_QWORD **)(v3 + 8), *v10 != v3)
      || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *(__int64 **)(v4 + 408), *v11 != v4 + 400) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v4 + 400;
    v1 = 1;
    *(_QWORD *)(v3 + 8) = v11;
    *v11 = v3;
    *(_QWORD *)(v4 + 408) = v3;
  }
  *(_DWORD *)(v3 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion(v4);
}
