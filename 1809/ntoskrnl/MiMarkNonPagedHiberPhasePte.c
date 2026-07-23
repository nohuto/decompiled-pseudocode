/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x14057D260
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     MiIsPfnTradable @ 0x1402BFD28 (MiIsPfnTradable.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  void *v3; // r8
  char v4; // r9
  int v5; // r10d
  ULONG_PTR v6; // r11
  ULONG_PTR v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v12 & 1) != 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    if ( (unsigned int)MiIsPfn((v2 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( v4 >= 0 )
      {
        if ( v5 )
          return 0LL;
        v9 = 48LL * (_QWORD)v3 - 0x58000000000LL;
        if ( *(_WORD *)(v9 + 32) <= (unsigned __int16)v6
          && (unsigned int)MiIsPfnTradable((_BYTE *)v9)
          && (*(_BYTE *)(v10 + 35) & 8) == 0 )
        {
          return 0LL;
        }
        v7 = v6;
      }
      else
      {
        v7 = 512LL;
        if ( v5 <= (int)v6 )
        {
LABEL_14:
          PoSetHiberRange(0LL, 0x14000u, v3, v7, 0x6C64704Eu);
          return 0LL;
        }
        v8 = (unsigned int)(v5 - 1);
        do
        {
          v7 <<= 9;
          v8 -= v6;
        }
        while ( v8 );
      }
      if ( v7 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
