/*
 * XREFs of TpSetWaitEx @ 0x1800312D0
 * Callers:
 *     sub_1800065D0 @ 0x1800065D0 (sub_1800065D0.c)
 *     sub_180007E90 @ 0x180007E90 (sub_180007E90.c)
 *     sub_18002E988 @ 0x18002E988 (sub_18002E988.c)
 *     TpSetWait @ 0x18002F0A0 (TpSetWait.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 * Callees:
 *     sub_1800313F0 @ 0x1800313F0 (sub_1800313F0.c)
 *     sub_180031458 @ 0x180031458 (sub_180031458.c)
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  BOOL v11; // ebp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)sub_1800313F0(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    sub_18010EFC8();
    return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240);
  v9 = sub_180031458(a1, v8 + 112, 0LL, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v9 )
    {
      v13 = *(_BYTE *)(a1 + 464) | 1;
      *(_QWORD *)(a1 + 376) = a2;
      *(_BYTE *)(a1 + 464) = v13;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v13 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v10 += sub_180031544(a1, a2, a3);
      v14 = v10;
LABEL_8:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 240);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10) == -v10 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v11;
}
