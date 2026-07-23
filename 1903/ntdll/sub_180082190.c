/*
 * XREFs of sub_180082190 @ 0x180082190
 * Callers:
 *     sub_1800820B0 @ 0x1800820B0 (sub_1800820B0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18008226C @ 0x18008226C (sub_18008226C.c)
 *     sub_180083108 @ 0x180083108 (sub_180083108.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 __fastcall sub_180082190(void *a1)
{
  bool v2; // di
  NTSTATUS v3; // ecx
  int v4; // eax
  int v5; // ebx
  char v7; // al
  int v8; // edx
  void *v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v9 = a1;
  v3 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v9, 0x10uLL, 0LL);
  if ( v3 < 0 )
  {
    v7 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1971,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n",
        v3);
      v7 = dword_18015FAB0;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v10 & 1) != 0 )
  {
    v2 = (v10 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v4 = sub_18008226C(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (dword_18015FAB0 & 3) == 0 )
        goto LABEL_21;
      v8 = 1981;
      goto LABEL_20;
    }
  }
  v5 = sub_180083108((int)a1);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v4 = sub_18008226C(a1);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_9;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    v8 = 2005;
LABEL_20:
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v8,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      (__int64)"Changing the protection of the executable at %p failed with status 0x%08lx\n",
      a1,
      v4);
  }
LABEL_21:
  if ( (dword_18015FAB0 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      2045,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v5);
  return (unsigned int)v5;
}
