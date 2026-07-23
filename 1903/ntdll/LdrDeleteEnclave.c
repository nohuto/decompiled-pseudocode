/*
 * XREFs of LdrDeleteEnclave @ 0x1800CD470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx
  int v4; // esi
  PVOID BaseAddressa; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  v1 = sub_18001B2F8((unsigned __int64)BaseAddress, 1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = *((_DWORD *)v1 + 14);
  v4 = sub_1800CDAC4(v1);
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v2 + 2));
  sub_1800CDB44(v2);
  if ( v3 != 16 )
    v2 = 0LL;
  if ( v4 >= 0 )
  {
LABEL_5:
    RegionSize = 0LL;
    v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v2 )
    sub_1800D062C((unsigned int)v4);
  return v4;
}
