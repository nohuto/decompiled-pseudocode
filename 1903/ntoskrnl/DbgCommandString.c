/*
 * XREFs of DbgCommandString @ 0x14030B090
 * Callers:
 *     <none>
 * Callees:
 *     DebugService2 @ 0x1401CB9C0 (DebugService2.c)
 */

void __stdcall DbgCommandString(PCCH Name, PCCH Command)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  PCCH v5; // [rsp+28h] [rbp-20h]
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[1] = Name;
  v6[0] = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v2 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Name[v3] );
  LOWORD(v6[0]) = v3;
  v5 = Command;
  do
    ++v2;
  while ( Command[v2] );
  LOWORD(v4) = v2;
  DebugService2((__int64)v6, (__int64)&v4, 5u);
}
