/*
 * XREFs of NtUserCallOneParam @ 0x1C0025F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v2 = a2;
  if ( ((a2 - 54) & 0xFFFFFFDF) != 0 )
    EnterCrit(0LL, 1LL);
  else
    EnterSharedCrit(0LL, 1LL);
  if ( (unsigned int)(v2 - 44) > 0x2A )
    goto LABEL_9;
  _mm_lfence();
  v8 = (_QWORD *)((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
  v9 = v8;
  if ( (unsigned int)v2 < 0x2E )
  {
    if ( v8 )
    {
      v9 = (_QWORD *)*v8;
      goto LABEL_5;
    }
LABEL_9:
    v9 = 0LL;
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
