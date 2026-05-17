/*
 * XREFs of sub_180005400 @ 0x180005400
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 * Callees:
 *     sub_18000550C @ 0x18000550C (sub_18000550C.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180005400(__int64 a1)
{
  int v1; // r9d
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v8; // edx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 204);
  v3 = *(_DWORD *)(a1 + 216);
  v10 = 0LL;
  if ( v3 < 2 * v1 )
    v3 = 2 * v1 + 22;
  v4 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)(a1 + 216) = v3;
  if ( v4 < 2 * v1 || v4 > v3 )
    v4 = 2 * v1;
  *(_DWORD *)(a1 + 220) = v4;
  if ( v3 > 0x400 )
  {
    *(_DWORD *)(a1 + 216) = 1024;
    v3 = 1024;
  }
  if ( v4 > 0x400 )
  {
    *(_DWORD *)(a1 + 220) = 1024;
    v4 = 1024;
  }
  v5 = *(_DWORD *)(a1 + 368);
  if ( v5 )
  {
    v8 = v3 - v1 - 1;
    if ( v5 > v8 )
      *(_DWORD *)(a1 + 368) = v8;
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x400) != 0 )
  {
    *(_DWORD *)(a1 + 216) = v4;
    v3 = v4;
  }
  v9 = v3 * *(_DWORD *)(a1 + 208);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 0x2000, 4) >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 220);
    *(_QWORD *)(a1 + 424) = v10;
    if ( (unsigned int)sub_18000550C(a1, v6) == v6 )
      return 0LL;
    v9 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v9, 0x8000LL);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  return 8LL;
}
