/*
 * XREFs of RtlDeregisterWaitEx @ 0x18002F8A0
 * Callers:
 *     RtlDeregisterWait @ 0x1800328F0 (RtlDeregisterWait.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18002F850 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x1800303D0 (TpWaitForWait.c)
 *     RtlpTpWaitRundown @ 0x180030624 (RtlpTpWaitRundown.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  _PEB_LDR_DATA *Ldr; // r8
  unsigned __int64 v5; // rdx
  int v6; // edi
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  HANDLE v11; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+70h] [rbp+18h]
  int v14; // [rsp+78h] [rbp+20h]

  v11 = 0LL;
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v6 = RtlpTpRevertCapture(&v11, 0, (__int64)Ldr);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 16, v5, v7, v8);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    v9 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v12 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v12->ClientId.UniqueThread)) )
    {
      v9 = 0;
    }
    v14 = v9;
    if ( a2 == -1 )
    {
      if ( !v9 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v13 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v13 = 0;
    }
    if ( v13 )
      v6 = v14 == 0 ? 0x103 : 0;
    else
      v6 = 0;
  }
  RtlpTpResumeImpersonation(v11);
  return (unsigned int)v6;
}
