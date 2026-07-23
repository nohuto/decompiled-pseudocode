/*
 * XREFs of PnprRecopyMappingReserve @ 0x14028A85C
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14028A948 (PnprRecopyMirrorPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     PnprRecopyAddress @ 0x14028A804 (PnprRecopyAddress.c)
 *     PnprMarkOrMirrorPages @ 0x14057AEA8 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE((((a1[1] + (unsigned __int64)(unsigned int)(v3 << 12)) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL;
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 20984);
  if ( !v9 )
    v9 = 5725;
  *(_DWORD *)(PnprContext + 20984) = v9;
  v10 = *(_DWORD *)(v8 + 20988);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 20988) = v10;
  return (unsigned int)v6;
}
