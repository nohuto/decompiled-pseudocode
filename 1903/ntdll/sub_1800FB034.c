/*
 * XREFs of sub_1800FB034 @ 0x1800FB034
 * Callers:
 *     sub_1800FB2B8 @ 0x1800FB2B8 (sub_1800FB2B8.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     sub_1800FB36C @ 0x1800FB36C (sub_1800FB36C.c)
 *     sub_1800FB38C @ 0x1800FB38C (sub_1800FB38C.c)
 */

__int64 __fastcall sub_1800FB034(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  char v6; // al
  void *v7; // rcx
  unsigned __int64 v8; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  sub_1800FB36C(a1);
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(_BYTE *)(a1 + 128);
  v7 = *(void **)(a1 + 144);
  BaseAddress = v7;
  v8 = v5 + a2;
  if ( !v6 )
  {
    if ( v8 > (unsigned __int64)v7 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v7 + RegionSize >= *(_QWORD *)(a1 + 152)
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    v4 = v5;
    *(_QWORD *)(a1 + 160) = v8;
    goto LABEL_9;
  }
  if ( v8 <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  sub_1800FB38C(a1);
  return v4;
}
