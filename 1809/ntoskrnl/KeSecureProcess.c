/*
 * XREFs of KeSecureProcess @ 0x14028E968
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  _BYTE v14[8]; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-A1h]
  __int64 v16; // [rsp+30h] [rbp-99h]
  __int64 v17; // [rsp+38h] [rbp-91h]
  __int64 v18; // [rsp+40h] [rbp-89h]
  __int64 v19; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h]
  __int64 v21; // [rsp+58h] [rbp-71h]
  __int64 v22; // [rsp+60h] [rbp-69h]
  _BYTE v23[48]; // [rsp+90h] [rbp-39h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)v23);
  SecureHandle = a1->SecureState.SecureHandle;
  v19 = a5;
  v22 = a8;
  v17 = a2;
  v18 = a3;
  v16 = a4;
  v20 = a6;
  v21 = a7;
  v12 = VslpEnterIumSecureMode(2u, 7LL, 0, (__int64)v14);
  KiUnstackDetachProcess((__int64)v23, 0LL);
  return v12;
}
