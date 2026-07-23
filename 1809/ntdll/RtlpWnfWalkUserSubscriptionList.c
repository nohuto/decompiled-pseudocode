/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18005E1EC
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180015920 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005E64C (RtlpDecRefWnfUserSubscription.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800DFCD8 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800E0000 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  unsigned __int64 Value; // rdi
  unsigned __int64 v8; // rcx
  int v9; // esi
  void *v10; // rsi
  __int64 v12; // rbx
  void *v13; // r12
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  _RTL_SRWLOCK *v17; // rbx
  int v18; // eax
  int v19; // [rsp+28h] [rbp-B0h]
  int v20; // [rsp+40h] [rbp-98h]
  int v21; // [rsp+50h] [rbp-88h]
  int v22; // [rsp+54h] [rbp-84h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  _RTL_SRWLOCK *v24; // [rsp+80h] [rbp-58h]
  PVOID SubProcessTag; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+98h] [rbp-40h]
  BOOL v27; // [rsp+E0h] [rbp+8h]
  int v30; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v21 = 0;
  SRWLock = a2 + 7;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v24 = a2 + 8;
  Value = a2[8].Value;
  while ( (_RTL_SRWLOCK *)Value != v6 )
  {
    v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement((volatile signed __int32 *)(Value + 72));
    v9 = *(_DWORD *)(a1 + 24) & *(_DWORD *)(Value + 56);
    if ( *(_DWORD *)(Value + 88)
      || !v9
      || ((v9 & 1) == 0 || *(_DWORD *)(Value + 48) && *(_DWORD *)(a1 + 16) - *(_DWORD *)(Value + 48) <= 0)
      && ((v9 & 0xFFFFFFFE) == 0 || *(_DWORD *)(Value + 152))
      && (v9 & 0x10) == 0
      || *(_DWORD *)(Value + 112) && v8 < *(_QWORD *)(Value + 120) && *(_DWORD *)(Value + 140) >= *(_DWORD *)(a1 + 16)
      || v3 && !*(_DWORD *)(Value + 136) )
    {
      v10 = (void *)(Value - 8);
      goto LABEL_11;
    }
    v20 = 0;
    v22 = 0;
    v23 = *(_QWORD *)(Value + 24);
    v12 = *(_QWORD *)(*(_QWORD *)(Value + 16) + 16LL);
    v13 = *(void **)(Value + 40);
    *(_QWORD *)(Value + 144) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive(a2 + 7);
    v14 = 0;
    v30 = 0;
    v27 = 0;
    v15 = *(_QWORD *)(Value + 64);
    if ( v15 )
    {
      v27 = !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0LL);
      if ( !v27 )
      {
        if ( a3 != 1 )
        {
          v18 = 1;
          v17 = a2 + 7;
          v10 = (void *)(Value - 8);
          goto LABEL_47;
        }
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
        v27 = 1;
      }
    }
    if ( *(_DWORD *)(Value + 88) )
    {
      v10 = (void *)(Value - 8);
    }
    else
    {
      v22 = 1;
      SubProcessTag = RtlSetThreadSubProcessTag(v13);
      if ( (v9 & 1) != 0 )
        v20 = _guard_dispatch_icall_fptr();
      if ( (v9 & 0x10) != 0 && !*(_DWORD *)(Value + 88) && (v20 >= 0 || (*(_BYTE *)(Value + 52) & 4) == 0) )
      {
        _guard_dispatch_icall_fptr();
        v20 = 0;
      }
      if ( (v9 & 0xFFFFFFEE) != 0 )
      {
        v20 = 0;
        _guard_dispatch_icall_fptr();
      }
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v16 = 2147353486LL;
      if ( *(_BYTE *)v16 )
      {
        v19 = v9;
        v10 = (void *)(Value - 8);
        RtlpWnfETWEventCallback(v12, *(_DWORD *)(a1 + 16), Value - 8, (_DWORD)a2, v23, v19, v20);
      }
      else
      {
        v10 = (void *)(Value - 8);
      }
      RtlSetThreadSubProcessTag(SubProcessTag);
    }
    if ( v27 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
    v17 = a2 + 7;
    if ( !v22 )
      goto LABEL_62;
    RtlAcquireSRWLockExclusive(a2 + 7);
    v14 = 1;
    v30 = 1;
    if ( v20 != -1073741267 && v20 != -1073741801 )
    {
      if ( !*(_DWORD *)(Value + 48) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(Value + 48) > 0 )
        *(_DWORD *)(Value + 48) = *(_DWORD *)(a1 + 16);
      if ( (*(_BYTE *)(Value + 52) & 4) != 0 && *(_DWORD *)(Value + 128) )
      {
        *(_DWORD *)(Value + 112) = 0;
        *(_QWORD *)(Value + 128) = 0LL;
        *(_QWORD *)(Value + 120) = 0LL;
        *(_DWORD *)(Value + 140) = 0;
      }
      goto LABEL_46;
    }
    if ( (*(_BYTE *)(Value + 52) & 4) != 0 )
    {
      v21 = 1;
      RtlpWnfMarkFailure(v10, (unsigned int)v20, *(unsigned int *)(a1 + 16));
LABEL_62:
      v14 = v30;
    }
LABEL_46:
    v18 = 0;
LABEL_47:
    *(_DWORD *)(Value + 136) = v18;
    if ( !v14 )
      RtlAcquireSRWLockExclusive(v17);
    *(_QWORD *)(Value + 144) = 0LL;
    v3 = a3;
LABEL_11:
    Value = *(_QWORD *)Value;
    RtlpDecRefWnfUserSubscription(v10);
    v6 = v24;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v21 != 0 ? 0xC000022D : 0;
}
