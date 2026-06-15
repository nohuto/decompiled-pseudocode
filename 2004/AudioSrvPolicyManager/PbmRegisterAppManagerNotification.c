/*
 * XREFs of PbmRegisterAppManagerNotification @ 0x180023980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_180028D80 @ 0x180028D80 (sub_180028D80.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterAppManagerNotification(void *a1)
{
  int v1; // ebx
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v4; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v4 = 0LL;
  if ( qword_18004FE78 )
  {
    v1 = sub_18001B7E4(qword_18004FE78, a1, &v4);
    if ( v1 >= 0 )
    {
      v1 = sub_180028D80(v4);
      if ( v1 >= 0 )
        *((_DWORD *)v4 + 121) = 1;
    }
    v2 = v4;
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    }
  }
  return (unsigned int)v1;
}
