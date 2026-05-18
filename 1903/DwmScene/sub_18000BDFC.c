/*
 * XREFs of sub_18000BDFC @ 0x18000BDFC
 * Callers:
 *     sub_180134D20 @ 0x180134D20 (sub_180134D20.c)
 * Callees:
 *     sub_18000A870 @ 0x18000A870 (sub_18000A870.c)
 *     sub_18000A9B8 @ 0x18000A9B8 (sub_18000A9B8.c)
 *     sub_18000AF84 @ 0x18000AF84 (sub_18000AF84.c)
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     sub_18000D308 @ 0x18000D308 (sub_18000D308.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18000BDFC(_QWORD *lpMem)
{
  void *v2; // rdi
  DWORD v3; // eax
  bool v4; // zf
  int result; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  BOOL v8; // eax
  void *v9; // rcx
  HANDLE ProcessHeap; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hMutex; // [rsp+40h] [rbp+8h] BYREF

  v2 = (void *)lpMem[1];
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_6;
    if ( v3 != 128 )
    {
      sub_18000AF84(
        (int)retaddr,
        2838,
        (int)"d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      goto LABEL_19;
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_6:
  hMutex = v2;
  v4 = *(_DWORD *)lpMem == 1;
  result = *(_DWORD *)lpMem - 1;
  *(_DWORD *)lpMem = result;
  if ( v4 )
  {
    sub_18000D298(lpMem + 2, 0LL);
    sub_18000D298(lpMem + 3, 0LL);
    result = sub_18000D308(&hMutex, 0LL);
    if ( !byte_180268B28 )
    {
      result = (int)qword_180268B20;
      if ( qword_180268B20 )
        result = (unsigned __int8)qword_180268B20(v6);
      if ( !result )
      {
        sub_18000A870(lpMem + 5);
        sub_18000A9B8((__int64)(lpMem + 2));
        v7 = (void *)lpMem[1];
        if ( !v7 || (v8 = CloseHandle(v7), v9 = retaddr, v8) )
        {
          ProcessHeap = GetProcessHeap();
          result = HeapFree(ProcessHeap, 0, lpMem);
          goto LABEL_14;
        }
LABEL_19:
        sub_18000D190(v9, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
        JUMPOUT(0x18000BF38LL);
      }
    }
  }
LABEL_14:
  if ( hMutex )
  {
    result = ReleaseMutex(hMutex);
    if ( !result )
    {
      sub_18000D190(retaddr, 2298LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      __debugbreak();
    }
  }
  return result;
}
