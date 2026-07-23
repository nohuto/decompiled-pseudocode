/*
 * XREFs of sub_1800CF1D4 @ 0x1800CF1D4
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CEF90 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800CF050 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     _stricmp @ 0x18008DB50 (_stricmp.c)
 */

__int64 __fastcall sub_1800CF1D4(unsigned __int64 a1, const char *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rdi
  DWORD v7; // ebx
  DWORD v8; // esi
  DWORD v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = sub_18001C4DC(a1, 1, 0xDu, &v10, &v11);
  v5 = v11;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( *(_DWORD *)(v5 + 4) )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)(a1 + *(unsigned int *)(v5 + 32LL * v7 + 4)), a2) )
          return v5 + 32LL * v7;
        if ( !*(_DWORD *)(32LL * ++v7 + v5 + 4) )
          return v6;
      }
    }
  }
  return v6;
}
