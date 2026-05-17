/*
 * XREFs of sub_18001A870 @ 0x18001A870
 * Callers:
 *     sub_18001F014 @ 0x18001F014 (sub_18001F014.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 * Callees:
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_18001A870(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  int VirtualMemory; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  VirtualMemory = 0;
  v6 = 0LL;
  v7 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v7 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( *(_WORD *)(v7 + 24) == 267 || *(_WORD *)(v7 + 24) == 523 )
    {
      v6 = *(unsigned int *)(v7 + 80);
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  v6 = sub_18001A7F0(a1);
  if ( !v6 )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v3, 3LL, v9, 40LL, 0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      v6 = v10;
  }
LABEL_6:
  *a2 = v6;
  return (unsigned int)VirtualMemory;
}
