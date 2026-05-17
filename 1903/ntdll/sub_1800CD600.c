/*
 * XREFs of sub_1800CD600 @ 0x1800CD600
 * Callers:
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

char __fastcall sub_1800CD600(unsigned __int64 a1)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  char v7; // [rsp+3Ch] [rbp-2Ch]

  v2 = sub_18001B2F8(a1, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory() >= 0 )
          v3 = (v7 & 0x40) != 0;
      }
    }
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    sub_1800CDB44(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
