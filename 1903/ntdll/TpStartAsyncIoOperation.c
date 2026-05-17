/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800629D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

signed __int64 __fastcall TpStartAsyncIoOperation(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB_LDR_DATA *v4; // rsi
  int ShutdownThreadId; // eax
  char v6; // r14
  signed __int64 Blink; // rbx
  signed __int64 v8; // rdi
  signed __int64 v9; // rbx
  struct _LIST_ENTRY *v10; // rdi
  signed __int64 result; // rax
  __int64 v12; // rbx

  v4 = Ldr;
  if ( !Ldr )
    return sub_18010EFC8(Ldr, a2, a3, a4);
  ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
  if ( (ShutdownThreadId & 0x10000) != 0 )
    return sub_18010EFC8(Ldr, a2, a3, a4);
  if ( (ShutdownThreadId & 0x20000) != 0 )
    return sub_18010EFC8(Ldr, a2, a3, a4);
  if ( Ldr->SsHandle != off_180118410 )
    return sub_18010EFC8(Ldr, a2, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_18010EFC8(Ldr, a2, a3, a4);
  v6 = 0;
  _m_prefetchw(&v4->InInitializationOrderModuleList.Blink);
  Blink = (signed __int64)v4->InInitializationOrderModuleList.Blink;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v4->EntryInProgress);
      v6 = 0;
    }
    v8 = Blink;
    v9 = (Blink ^ (Blink + 1)) & 0xFFFFFFFFFFFFFFFLL ^ Blink;
    if ( v8 < 0 && (v9 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v9 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)&v4->EntryInProgress);
    }
    Blink = _InterlockedCompareExchange64((volatile signed __int64 *)&v4->InInitializationOrderModuleList.Blink, v9, v8);
  }
  while ( v8 != Blink );
  if ( v6 )
  {
    v12 = *(_QWORD *)&v4->ShutdownInProgress;
    *(_QWORD *)&v4->ShutdownInProgress = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v4->EntryInProgress);
    sub_180066D3C(v12);
  }
  _InterlockedIncrement((volatile signed __int32 *)&v4[3].InLoadOrderModuleList);
  _InterlockedIncrement((volatile signed __int32 *)v4);
  v10 = v4[1].InInitializationOrderModuleList.Blink;
  if ( !v10 || (result = LODWORD(v10[27].Blink), !(_DWORD)result) )
    result = MEMORY[0x7FFE03C0];
  if ( LODWORD(v10[26].Blink) != (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&v10[4].Blink);
    sub_18010EB1C(v10);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v10[4].Blink);
  }
  return result;
}
