/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x14057D070
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v3; // r9
  int v4; // eax
  BOOL v5; // ecx
  unsigned __int64 v6; // rax
  void *v7; // r8
  char v8; // r9
  int v9; // r10d
  ULONG_PTR v10; // r11
  ULONG_PTR v11; // r9
  __int64 v12; // rcx
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v14 = v2;
  v3 = v2;
  if ( (v2 & 1) != 0 )
  {
    v4 = v2 & 0x10;
    v5 = !v4 && (v3 & 8) != 0;
    if ( v5 || v4 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
      if ( (unsigned int)MiIsPfn((v6 >> 12) & 0xFFFFFFFFFLL) )
      {
        if ( v8 >= 0 )
        {
          if ( v9 )
            return 0LL;
          v11 = v10;
        }
        else
        {
          v11 = 512LL;
          if ( v9 <= (int)v10 )
          {
LABEL_17:
            PoSetHiberRange(0LL, 0x14000u, v7, v11, 0x636E6D4Du);
            return 0LL;
          }
          v12 = (unsigned int)(v9 - 1);
          do
          {
            v11 <<= 9;
            v12 -= v10;
          }
          while ( v12 );
        }
        if ( v11 )
          goto LABEL_17;
      }
    }
  }
  return 0LL;
}
