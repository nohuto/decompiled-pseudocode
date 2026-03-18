/*
 * XREFs of PspCreateActivityReference @ 0x1406F96D0
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1406F95D0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     PsChargeProcessWakeCounter @ 0x1406EBAF0 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspCreateActivityReference(__int64 Object, _QWORD *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-68h]
  _DWORD v8[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  __int128 v13; // [rsp+70h] [rbp-18h]
  PVOID Objecta; // [rsp+A0h] [rbp+18h] BYREF

  v8[1] = 0;
  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8[0] = 48;
  v9 = 0LL;
  v11 = 32;
  v10 = 0LL;
  v13 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (int)v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &Objecta,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = Objecta;
    *v6 = PsChargeProcessWakeCounter(Object, 0, 5u, (__int64)Objecta);
    return ObInsertObjectEx(v6, 0LL, 0xF0000u, 0, 0, 0LL, a2);
  }
  return result;
}
