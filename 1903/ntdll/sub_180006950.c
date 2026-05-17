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

__int64 __fastcall sub_180006950(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r12d
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // r9
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v12; // rbx
  __int64 v13; // r12
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+40h] [rbp-98h]
  int v19; // [rsp+44h] [rbp-94h]
  int v20; // [rsp+48h] [rbp-90h]
  volatile signed __int32 *v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+60h] [rbp-78h]
  __int64 v23; // [rsp+70h] [rbp-68h] BYREF
  __int64 v24; // [rsp+78h] [rbp-60h] BYREF
  volatile signed __int32 *v25; // [rsp+80h] [rbp-58h]
  char *v26; // [rsp+88h] [rbp-50h]
  __int64 v27; // [rsp+90h] [rbp-48h]
  __int64 v28; // [rsp+98h] [rbp-40h]
  BOOL v29; // [rsp+E0h] [rbp+8h]
  int v32; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0;
  v26 = (char *)a1 + (unsigned int)a1[11];
  v28 = a2 + 56;
  RtlAcquireSRWLockExclusive(a2 + 56);
  v6 = (volatile signed __int32 *)(a2 + 64);
  v25 = (volatile signed __int32 *)(a2 + 64);
  v7 = *(volatile signed __int32 **)(a2 + 64);
  v21 = v7;
  while ( v7 != v6 )
  {
    v8 = v7 - 2;
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v7 + 18);
    v10 = a1[6] & v7[14];
    if ( !*((_DWORD *)v7 + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v8 + 14) || a1[4] - *((_DWORD *)v8 + 14) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v8 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v8 + 30) || v9 >= *((_QWORD *)v8 + 16) || *((_DWORD *)v8 + 37) < a1[4])
      && (!v3 || *((_DWORD *)v8 + 36)) )
    {
      v18 = 0;
      v20 = 0;
      v22 = *((_QWORD *)v8 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 16LL);
      v13 = *((_QWORD *)v8 + 6);
      *((_QWORD *)v8 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 56);
      v14 = 0;
      v32 = 0;
      v29 = 0;
      v15 = *((_QWORD *)v8 + 9);
      if ( v15 )
      {
        v29 = !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0LL);
        if ( !v29 )
        {
          if ( a3 != 1 )
          {
            *((_DWORD *)v8 + 36) = 1;
            v17 = a2 + 56;
            goto LABEL_46;
          }
          RtlAcquireSRWLockExclusive(*((_QWORD *)v8 + 9) + 24LL);
          v29 = 1;
        }
      }
      if ( !*((_DWORD *)v8 + 24) )
      {
        v20 = 1;
        v27 = RtlSetThreadSubProcessTag(v13);
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
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
        else
          v16 = 2147353486LL;
        if ( *(_BYTE *)v16 )
          sub_1800DD7D8(v12, a1[4], (_DWORD)v8, a2, v22, v10, v18);
        RtlSetThreadSubProcessTag(v27);
      }
      if ( v29 )
        RtlReleaseSRWLockExclusive(*((_QWORD *)v8 + 9) + 24LL);
      v17 = a2 + 56;
      if ( v20 )
      {
        RtlAcquireSRWLockExclusive(a2 + 56);
        v14 = 1;
        v32 = 1;
        if ( v18 != -1073741801 && v18 != -1073741267 )
        {
          if ( !*((_DWORD *)v8 + 14) || a1[4] - *((_DWORD *)v8 + 14) > 0 )
            *((_DWORD *)v8 + 14) = a1[4];
          if ( (v8[15] & 4) != 0 && *((_DWORD *)v8 + 34) )
          {
            *((_DWORD *)v8 + 30) = 0;
            *((_QWORD *)v8 + 17) = 0LL;
            *((_QWORD *)v8 + 16) = 0LL;
            *((_DWORD *)v8 + 37) = 0;
          }
          goto LABEL_45;
        }
        if ( (v8[15] & 4) != 0 )
        {
          v19 = 1;
          sub_18008C14C(v8, (unsigned int)v18, (unsigned int)a1[4]);
          goto LABEL_60;
        }
      }
      else
      {
LABEL_60:
        v14 = v32;
      }
LABEL_45:
      *((_DWORD *)v8 + 36) = 0;
LABEL_46:
      if ( !v14 )
        RtlAcquireSRWLockExclusive(v17);
      *((_QWORD *)v8 + 19) = 0LL;
      v7 = v21;
      v3 = a3;
    }
    v21 = *(volatile signed __int32 **)v7;
    sub_180006E00(v8, &v23, &v24);
    v7 = v21;
    v6 = v25;
    if ( v23 )
    {
      _guard_dispatch_icall_fptr();
      v7 = v21;
      v6 = v25;
    }
  }
  RtlReleaseSRWLockExclusive(v28);
  return v19 != 0 ? 0xC000022D : 0;
}
