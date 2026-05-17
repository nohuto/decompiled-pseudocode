/*
 * XREFs of TpSetWaitEx @ 0x18002C0B0
 * Callers:
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     TpSetWait @ 0x18002F840 (TpSetWait.c)
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitCheckReset @ 0x18003035C (RtlpTpWaitCheckReset.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 *     RtlpWnfNotificationThread @ 0x18005DF40 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRegisterTpNotification @ 0x180080E64 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180081BF0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18002C238 (TppCancelWait.c)
 *     TppSetupNextWait @ 0x18002C320 (TppSetupNextWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  char v13; // al
  signed int v14; // ebx
  BOOL v15; // ebp
  char v17; // al
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    TppRaiseInvalidParameter(v9, v8, v10, v11);
    return 0LL;
  }
  v12 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240, v8, v10, v11);
  v13 = TppCancelWait(a1, v12 + 112, 0LL, &v18);
  v14 = v18;
  v15 = v18 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v13 )
    {
      v17 = *(_BYTE *)(a1 + 464) | 1;
      *(_QWORD *)(a1 + 376) = a2;
      *(_BYTE *)(a1 + 464) = v17;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v17 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v14 += TppSetupNextWait(a1, a2, a3);
      v18 = v14;
LABEL_8:
      if ( v14 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14);
        v14 = 0;
        v18 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  if ( v14 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v14) == -v14 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v15;
}
