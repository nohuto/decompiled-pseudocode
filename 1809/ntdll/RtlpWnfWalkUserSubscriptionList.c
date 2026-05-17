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
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800DFCD8 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800E0000 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 *v11; // rsi
  __int64 v13; // rbx
  void *v14; // r12
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // eax
  int v22; // [rsp+28h] [rbp-B0h]
  int v23; // [rsp+40h] [rbp-98h]
  int v24; // [rsp+50h] [rbp-88h]
  int v25; // [rsp+54h] [rbp-84h]
  __int64 v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+70h] [rbp-68h] BYREF
  __int64 v28; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-58h]
  char *v30; // [rsp+88h] [rbp-50h]
  void *v31; // [rsp+90h] [rbp-48h]
  volatile signed __int64 *v32; // [rsp+98h] [rbp-40h]
  BOOL v33; // [rsp+E0h] [rbp+8h]
  int v35; // [rsp+F0h] [rbp+18h]
  unsigned int v36; // [rsp+F8h] [rbp+20h]

  v35 = (int)a3;
  v4 = (int)a3;
  v27 = 0LL;
  v28 = 0LL;
  v24 = 0;
  v30 = (char *)a1 + (unsigned int)a1[11];
  v32 = (volatile signed __int64 *)(a2 + 56);
  RtlAcquireSRWLockExclusive(a2 + 56, a2, a3, a4);
  v7 = a2 + 64;
  v29 = a2 + 64;
  v8 = *(volatile signed __int32 **)(a2 + 64);
  while ( v8 != (volatile signed __int32 *)v7 )
  {
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v10 = a1[6] & v8[14];
    if ( *((_DWORD *)v8 + 22)
      || !v10
      || ((v10 & 1) == 0 || *((_DWORD *)v8 + 12) && a1[4] - *((_DWORD *)v8 + 12) <= 0)
      && ((v10 & 0xFFFFFFFE) == 0 || *((_DWORD *)v8 + 38))
      && (v10 & 0x10) == 0
      || *((_DWORD *)v8 + 28) && v9 < *((_QWORD *)v8 + 15) && *((_DWORD *)v8 + 35) >= a1[4]
      || v4 && !*((_DWORD *)v8 + 34) )
    {
      v11 = (__int64 *)(v8 - 2);
      goto LABEL_11;
    }
    v23 = 0;
    v25 = 0;
    v26 = *((_QWORD *)v8 + 3);
    v13 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
    v14 = (void *)*((_QWORD *)v8 + 5);
    *((_QWORD *)v8 + 18) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
    v17 = 0LL;
    v36 = 0;
    v33 = 0;
    v18 = *((_QWORD *)v8 + 8);
    if ( v18 )
    {
      v33 = !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0LL);
      if ( !v33 )
      {
        if ( v35 != 1 )
        {
          v21 = 1;
          v20 = a2 + 56;
          v11 = (__int64 *)(v8 - 2);
          goto LABEL_48;
        }
        RtlAcquireSRWLockExclusive(*((_QWORD *)v8 + 8) + 24LL, 0LL, v15, v16);
        v33 = 1;
      }
    }
    if ( *((_DWORD *)v8 + 22) )
    {
      v11 = (__int64 *)(v8 - 2);
    }
    else
    {
      v25 = 1;
      v31 = RtlSetThreadSubProcessTag(v14);
      if ( (v10 & 1) != 0 )
        v23 = _guard_dispatch_icall_fptr();
      if ( (v10 & 0x10) != 0 && !*((_DWORD *)v8 + 22) && (v23 >= 0 || (v8[13] & 4) == 0) )
      {
        _guard_dispatch_icall_fptr();
        v23 = 0;
      }
      if ( (v10 & 0xFFFFFFEE) != 0 )
      {
        v23 = 0;
        _guard_dispatch_icall_fptr();
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v19 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v19 = 2147353486LL;
      if ( *(_BYTE *)v19 )
      {
        v22 = v10;
        v11 = (__int64 *)(v8 - 2);
        RtlpWnfETWEventCallback(v13, a1[4], (_DWORD)v8 - 8, a2, v26, v22, v23);
      }
      else
      {
        v11 = (__int64 *)(v8 - 2);
      }
      RtlSetThreadSubProcessTag(v31);
    }
    if ( v33 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v8 + 8) + 24LL));
    v20 = a2 + 56;
    if ( !v25 )
      goto LABEL_63;
    RtlAcquireSRWLockExclusive(a2 + 56, v17, v15, v16);
    v17 = 1LL;
    v36 = 1;
    if ( v23 != -1073741267 && v23 != -1073741801 )
    {
      if ( !*((_DWORD *)v8 + 12) || a1[4] - *((_DWORD *)v8 + 12) > 0 )
        *((_DWORD *)v8 + 12) = a1[4];
      if ( (v8[13] & 4) != 0 && *((_DWORD *)v8 + 32) )
      {
        *((_DWORD *)v8 + 28) = 0;
        *((_QWORD *)v8 + 16) = 0LL;
        *((_QWORD *)v8 + 15) = 0LL;
        *((_DWORD *)v8 + 35) = 0;
      }
      goto LABEL_47;
    }
    if ( (v8[13] & 4) != 0 )
    {
      v24 = 1;
      RtlpWnfMarkFailure(v11, (unsigned int)v23, (unsigned int)a1[4]);
LABEL_63:
      v17 = v36;
    }
LABEL_47:
    v21 = 0;
LABEL_48:
    *((_DWORD *)v8 + 34) = v21;
    if ( !(_DWORD)v17 )
      RtlAcquireSRWLockExclusive(v20, v17, v15, v16);
    *((_QWORD *)v8 + 18) = 0LL;
    v4 = v35;
LABEL_11:
    v8 = *(volatile signed __int32 **)v8;
    RtlpDecRefWnfUserSubscription(v11, &v27, &v28);
    v7 = v29;
    if ( v27 )
    {
      _guard_dispatch_icall_fptr();
      v7 = v29;
    }
  }
  RtlReleaseSRWLockExclusive(v32);
  return v24 != 0 ? 0xC000022D : 0;
}
