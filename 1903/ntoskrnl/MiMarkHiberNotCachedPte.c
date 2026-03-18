/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x1405AC060
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v3; // r9
  int v4; // eax
  unsigned __int64 v5; // rax
  void *v6; // r8
  char v7; // r9
  int v8; // r10d
  ULONG_PTR v9; // r11
  ULONG_PTR v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = v2;
  v3 = v2;
  if ( (v2 & 1) != 0 && ((v4 = v2 & 0x10) == 0 && (v3 & 8) != 0 || v4) )
  {
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    if ( (unsigned int)MiIsPfn((v5 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( v7 >= 0 )
      {
        if ( v8 )
          return 0LL;
        v10 = v9;
      }
      else
      {
        v10 = 512LL;
        if ( v8 <= (int)v9 )
        {
LABEL_14:
          PoSetHiberRange(0LL, 0x14000u, v6, v10, 0x636E6D4Du);
          return 0LL;
        }
        v11 = (unsigned int)(v8 - 1);
        do
        {
          v10 <<= 9;
          v11 -= v9;
        }
        while ( v11 );
      }
      if ( v10 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
