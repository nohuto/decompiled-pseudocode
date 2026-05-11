/*
 * XREFs of USBMidiOutCompleteCallback @ 0x1C0007110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBMidiOutCompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // edx
  struct _KSSTREAM_POINTER *v5; // r8
  struct _KSPIN *Pin; // rbp
  KSPIN_LOCK *Context; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  KIRQL v10; // si
  int v11; // eax
  PKSGATE i; // rax

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  Pin = v5->Pin;
  Context = (KSPIN_LOCK *)Pin->Context;
  if ( *(int *)(*(_QWORD *)(a3 + 24) + 4LL) < 0 )
    v3 = -1073741668;
  if ( v3 < 0 )
  {
    KsStreamPointerSetStatusCode(v5, v3);
    v5 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  }
  v8 = *((_QWORD *)v5->Pin->Context + 19);
  KsStreamPointerDelete(v5);
  v9 = *(_QWORD *)(v8 + 80);
  ++*(_DWORD *)(v9 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *(_WORD *)(v9 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, (PSLIST_ENTRY)a3);
  }
  else
  {
    ++*(_DWORD *)(v9 + 32);
    (*(void (__fastcall **)(__int64))(v9 + 56))(a3);
  }
  v10 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v11 = *((_DWORD *)Context + 14);
  if ( v11 == 20 )
  {
    for ( i = KsPinGetAndGate(Pin); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    KsPinAttemptProcessing(Pin, 1u);
    v11 = *((_DWORD *)Context + 14);
    *((_BYTE *)Context + 44) = 0;
  }
  *((_DWORD *)Context + 14) = v11 - 1;
  KeReleaseSpinLock(Context + 14, v10);
  return 3221225494LL;
}
