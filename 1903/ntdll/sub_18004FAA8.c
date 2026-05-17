/*
 * XREFs of sub_18004FAA8 @ 0x18004FAA8
 * Callers:
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 * Callees:
 *     sub_18004FE48 @ 0x18004FE48 (sub_18004FE48.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_18004FAA8(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v5 = v3 << 20;
  sub_18004FE48(a1);
  return ZwFreeVirtualMemory(-1LL, &v6, &v5, 0x8000LL);
}
