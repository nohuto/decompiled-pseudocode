/*
 * XREFs of PbmUnregisterAppManagerNotification @ 0x180023A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppManagerNotification(void *a1)
{
  int v1; // edi
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v4; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  v4 = 0LL;
  if ( qword_18004FE78 )
  {
    v1 = sub_18001B7E4(qword_18004FE78, a1, &v4);
    if ( v1 >= 0 )
    {
      sub_1800292E8(v4);
      *((_DWORD *)v4 + 121) = 0;
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
