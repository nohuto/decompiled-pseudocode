/*
 * XREFs of PopPowerRequestExecuteCallbacks @ 0x1400038BC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PopPowerRequestCallbackWorker @ 0x140003790 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall **__fastcall PopPowerRequestExecuteCallbacks(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(int, int, int, int, int, int, __int64)
{
  unsigned int v3; // ebp
  __int64 (__fastcall **v4)(); // rbx
  __int64 v7; // rdi
  char v8; // al
  __int64 (__fastcall **result)(int, int, int, int, int, int, __int64); // rax

  v3 = a3;
  v4 = &off_1403FF778;
  v7 = 0LL;
  do
  {
    v8 = *(_BYTE *)(v7 + a1);
    if ( v8 )
    {
      LOBYTE(a3) = v8 > 0;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))*v4)(v3, a2, a3);
    }
    ++v7;
    result = &off_1403FF7D8;
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&off_1403FF7D8 );
  return result;
}
