/*
 * XREFs of sub_180020514 @ 0x180020514
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_1800D0BEC @ 0x1800D0BEC (sub_1800D0BEC.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     sub_18006E0E0 @ 0x18006E0E0 (sub_18006E0E0.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180020514(char *a1, unsigned int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  int v9; // esi
  unsigned __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v7 = a3;
  if ( a3 )
  {
    v9 = 1;
  }
  else
  {
    v8 = sub_180020454(a1, a2, &v12, &v13);
    v9 = v12;
    v7 = (_QWORD *)v8;
    v5 = v13;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( v7 && *v7 == 0x2B992DDFA232LL )
  {
    v10 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ sub_18006E0E0(v7)) & 0xFFFFFFFFFFFFLL;
    if ( v10 == 0x2B992DDFA232LL || !v10 )
      v10 = 0x2B992DDFA233LL;
    if ( !v9 )
    {
      *v7 = v10;
      return 1LL;
    }
    BaseAddress = v7;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect) >= 0 )
    {
      *v7 = v10;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
      return 1LL;
    }
  }
  return 0LL;
}
