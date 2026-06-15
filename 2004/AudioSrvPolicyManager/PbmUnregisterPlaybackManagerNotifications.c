/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x180023460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 *     sub_180015700 @ 0x180015700 (sub_180015700.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int v3; // edi
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( !qword_18004FE78 )
    return (unsigned int)v3;
  v3 = sub_18001B7E4(qword_18004FE78, a1, &v11);
  if ( v3 >= 0 )
  {
    if ( !a2 )
    {
      v6 = qword_18004FE78;
      v7 = v11;
      v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
      sub_180015640((__int64)v7, 0, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v6 = qword_18004FE78;
      v7 = v11;
      v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
      sub_180015700((__int64)v7, 0, a3);
LABEL_7:
      sub_18001B65C(v6, (__int64)v7);
      if ( v8 )
        LeaveCriticalSection(v8);
      v3 = 0;
    }
  }
  v9 = v11;
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return (unsigned int)v3;
}
