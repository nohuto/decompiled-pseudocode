/*
 * XREFs of ?ProtectSectionMemory@SipcPort@@CAJPEAX_KK@Z @ 0x1800D6790
 * Callers:
 *     ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800D6730 (-ProtectSection@SipcPort@@QEAAJPEAX_K1@Z.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800D67DC (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800D3F68 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

__int64 __fastcall SipcPort::ProtectSectionMemory(void *a1, __int64 a2, DWORD a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag0 *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  DWORD flOldProtect; // [rsp+30h] [rbp+8h] BYREF

  v3 = ((unsigned __int64)a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v4 = ((unsigned __int64)a1 + a2) & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 <= v3
    || VirtualProtect((LPVOID)(((unsigned __int64)a1 + 4095) & 0xFFFFFFFFFFFFF000uLL), v4 - v3, a3, &flOldProtect) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag0::Return_GetLastError(v6, v5, v7, v8);
  }
}
