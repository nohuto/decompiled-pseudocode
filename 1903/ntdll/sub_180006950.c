/*
 * XREFs of sub_180006950 @ 0x180006950
 * Callers:
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 * Callees:
 *     sub_180006E00 @ 0x180006E00 (sub_180006E00.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008C14C @ 0x18008C14C (sub_18008C14C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800DD7D8 @ 0x1800DD7D8 (sub_1800DD7D8.c)
 */

__int64 __fastcall sub_180006950(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  volatile signed __int32 *Ptr; // r9
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v12; // rbx
  void *v13; // r12
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  _RTL_SRWLOCK *v17; // rbx
  int v18; // [rsp+40h] [rbp-98h]
  int v19; // [rsp+44h] [rbp-94h]
  int v20; // [rsp+48h] [rbp-90h]
  volatile signed __int32 *v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+60h] [rbp-78h]
  _RTL_SRWLOCK *v23; // [rsp+80h] [rbp-58h]
  PVOID SubProcessTag; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+98h] [rbp-40h]
  BOOL v26; // [rsp+E0h] [rbp+8h]
  int v29; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v19 = 0;
  SRWLock = a2 + 7;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v6 = a2 + 8;
  v23 = a2 + 8;
  Ptr = (volatile signed __int32 *)a2[8].Ptr;
  v21 = Ptr;
  while ( Ptr != (volatile signed __int32 *)v6 )
  {
    v8 = Ptr - 2;
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(Ptr + 18);
    v10 = *(_DWORD *)(a1 + 24) & Ptr[14];
    if ( !*((_DWORD *)Ptr + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v8 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v8 + 14) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v8 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v8 + 30) || v9 >= *((_QWORD *)v8 + 16) || *((_DWORD *)v8 + 37) < *(_DWORD *)(a1 + 16))
      && (!v3 || *((_DWORD *)v8 + 36)) )
    {
      v18 = 0;
      v20 = 0;
      v22 = *((_QWORD *)v8 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL);
      v13 = (void *)*((_QWORD *)v8 + 6);
      *((_QWORD *)v8 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 7);
      v14 = 0;
      v29 = 0;
      v26 = 0;
      v15 = *((_QWORD *)v8 + 9);
      if ( v15 )
      {
        v26 = !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0LL);
        if ( !v26 )
        {
          if ( a3 != 1 )
          {
            *((_DWORD *)v8 + 36) = 1;
            v17 = a2 + 7;
            goto LABEL_45;
          }
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
          v26 = 1;
        }
      }
      if ( !*((_DWORD *)v8 + 24) )
      {
        v20 = 1;
        SubProcessTag = RtlSetThreadSubProcessTag(v13);
        if ( (v10 & 1) != 0 )
          v18 = _guard_dispatch_icall_fptr();
        if ( (v10 & 0x10) != 0 && !*((_DWORD *)v8 + 24) && (v18 >= 0 || (v8[15] & 4) == 0) )
        {
          _guard_dispatch_icall_fptr();
          v18 = 0;
        }
        if ( (v10 & 0xFFFFFFEE) != 0 )
        {
          v18 = 0;
          _guard_dispatch_icall_fptr();
        }
        if ( RtlGetCurrentServiceSessionId() )
          v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
        else
          v16 = 2147353486LL;
        if ( *(_BYTE *)v16 )
          sub_1800DD7D8(v12, *(_DWORD *)(a1 + 16), (_DWORD)v8, (_DWORD)a2, v22, v10, v18);
        RtlSetThreadSubProcessTag(SubProcessTag);
      }
      if ( v26 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v8 + 9) + 24LL));
      v17 = a2 + 7;
      if ( v20 )
      {
        RtlAcquireSRWLockExclusive(a2 + 7);
        v14 = 1;
        v29 = 1;
        if ( v18 != -1073741801 && v18 != -1073741267 )
        {
          if ( !*((_DWORD *)v8 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v8 + 14) > 0 )
            *((_DWORD *)v8 + 14) = *(_DWORD *)(a1 + 16);
          if ( (v8[15] & 4) != 0 && *((_DWORD *)v8 + 34) )
          {
            *((_DWORD *)v8 + 30) = 0;
            *((_QWORD *)v8 + 17) = 0LL;
            *((_QWORD *)v8 + 16) = 0LL;
            *((_DWORD *)v8 + 37) = 0;
          }
          goto LABEL_44;
        }
        if ( (v8[15] & 4) != 0 )
        {
          v19 = 1;
          sub_18008C14C(v8, (unsigned int)v18, *(unsigned int *)(a1 + 16));
          goto LABEL_59;
        }
      }
      else
      {
LABEL_59:
        v14 = v29;
      }
LABEL_44:
      *((_DWORD *)v8 + 36) = 0;
LABEL_45:
      if ( !v14 )
        RtlAcquireSRWLockExclusive(v17);
      *((_QWORD *)v8 + 19) = 0LL;
      Ptr = v21;
      v3 = a3;
    }
    v21 = *(volatile signed __int32 **)Ptr;
    sub_180006E00((PVOID)v8);
    Ptr = v21;
    v6 = v23;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v19 != 0 ? 0xC000022D : 0;
}
