/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x180023B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppClosureNotification(void *a1)
{
  int v1; // esi
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v7 = 0LL;
  if ( qword_18004FE78 )
  {
    v1 = sub_18001B7E4(qword_18004FE78, a1, &v7);
    if ( v1 >= 0 )
    {
      v2 = qword_18004FE78;
      v3 = v7;
      v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
      *((_DWORD *)v3 + 122) = 0;
      sub_18001B65C(v2, (__int64)v3);
      if ( v4 )
        LeaveCriticalSection(v4);
      *((_DWORD *)v7 + 122) = 0;
    }
    v5 = v7;
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return (unsigned int)v1;
}
