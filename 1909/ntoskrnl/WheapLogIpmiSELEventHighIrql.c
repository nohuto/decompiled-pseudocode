/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x140341380
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1403412E8 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1403412C0 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char WheapLogIpmiSELEventHighIrql()
{
  char v0; // bl
  bool v1; // di
  char v2; // si
  int v3; // r9d
  int v4; // eax
  int v5; // ecx
  _DWORD Src[9]; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+44h] [rbp-Ch]
  char v9; // [rsp+45h] [rbp-Bh]
  bool v10; // [rsp+46h] [rbp-Ah]
  char v11; // [rsp+47h] [rbp-9h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = -1073741823;
  if ( !WheapDispatchPtr.DeviceType )
    goto LABEL_6;
  v2 = 1;
  LOBYTE(v4) = WheapHighIrqlLogSelEventHandlerAcquireLock(0);
  v0 = v4;
  if ( !(_BYTE)v4 )
    goto LABEL_6;
  if ( WheapDispatchPtr.DeviceType != v5 )
  {
    v4 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, PDRIVER_CONTROL *))WheapDispatchPtr.Queue.ListEntry.Flink)(
           WheapDispatchPtr.Queue.ListEntry.Blink,
           &WheapDispatchPtr.Queue.Wcb.DeviceRoutine);
    v3 = v4;
    v1 = v4 < 0;
  }
  _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.StackSize, 0);
  if ( v3 < 0 )
  {
LABEL_6:
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 40;
    Src[3] = 1;
    Src[5] = -2147483624;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 8;
    Src[8] = v3;
    v8 = 1;
    v11 = v0;
    v9 = v2;
    v10 = v1;
    LOBYTE(v4) = WheaLogInternalEvent(Src);
  }
  return v4;
}
