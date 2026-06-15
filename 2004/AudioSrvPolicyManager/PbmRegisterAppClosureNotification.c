/*
 * XREFs of PbmRegisterAppClosureNotification @ 0x180023AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B43C @ 0x18001B43C (sub_18001B43C.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppClosureNotification(void *a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( qword_18004FE78 )
  {
    v1 = sub_18001B7E4(qword_18004FE78, a1, &v5);
    if ( v1 >= 0 )
    {
      v1 = sub_18001B43C(v2, (__int64)v5);
      if ( v1 >= 0 )
        *((_DWORD *)v5 + 122) = 1;
    }
    v3 = v5;
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    }
  }
  return (unsigned int)v1;
}
