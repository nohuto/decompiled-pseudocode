/*
 * XREFs of DbgCommandString @ 0x1402ECAD0
 * Callers:
 *     <none>
 * Callees:
 *     DebugService2 @ 0x1401C5500 (DebugService2.c)
 */

void __stdcall DbgCommandString(PCCH Name, PCCH Command)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int16 v4; // [rsp+20h] [rbp-28h] BYREF
  PCCH v5; // [rsp+28h] [rbp-20h]
  __int16 v6; // [rsp+30h] [rbp-18h] BYREF
  PCCH v7; // [rsp+38h] [rbp-10h]

  v2 = -1LL;
  v7 = Name;
  v3 = -1LL;
  do
    ++v3;
  while ( Name[v3] );
  v6 = v3;
  v5 = Command;
  do
    ++v2;
  while ( Command[v2] );
  v4 = v2;
  DebugService2((__int64)&v6, (__int64)&v4, 5u);
}
