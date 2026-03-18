/*
 * XREFs of MiQueryLeafPte @ 0x1402D8770
 * Callers:
 *     <none>
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400054B0 (MiIdentifyPfnWrapper.c)
 *     MiHyperSpaceSize @ 0x140075EC0 (MiHyperSpaceSize.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnProtection @ 0x1400CAE80 (MiGetPfnProtection.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // r8
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  int PfnProtection; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v21; // rbx
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  v5 = (__int64)(a2 << 25) >> 16;
  if ( (v5 < qword_140465BD8 || v5 >= qword_140465BD8 + MiHyperSpaceSize()) && a3 < 1 )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v4);
    if ( (v22 & 1) != 0 )
    {
      v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL)
         - 0x58000000000LL;
      if ( (*(_DWORD *)v7 & 1) != 0 )
      {
        v8 = *(_QWORD *)(v7 + 16) + 1LL;
        *(_QWORD *)(v7 + 16) = v8;
        if ( v8 < *(_QWORD *)(v7 + 24) )
        {
          v9 = *(_QWORD *)(v7 + 8);
          v10 = v5 ^ (*(_DWORD *)(v9 + 8 * v8 - 8) ^ (unsigned int)v5) & 0xFFF;
          *(_QWORD *)(v9 + 8 * v8 - 8) = v10;
          v11 = v10 ^ ((unsigned __int16)v10 ^ (*(_QWORD *)(v6 + 40) >> 49)) & 0xE00;
          *(_QWORD *)(v9 + 8 * v8 - 8) = v11;
          v12 = v11 ^ ((unsigned __int16)v11 ^ (*(_QWORD *)(v6 + 40) >> 49)) & 0x100;
          v13 = 0x200000000000000LL;
          *(_QWORD *)(v9 + 8 * v8 - 8) = v12;
          if ( (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
          {
            if ( (*(_DWORD *)v7 & 2) != 0 )
            {
              v14 = v12 & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
            }
            else
            {
              LOBYTE(v15) = 7;
              if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v15 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v13 = (unsigned __int8)(v12 ^ (32 * v15)) & 0xE0;
              v14 = v13 ^ v12;
            }
            *(_QWORD *)(v9 + 8 * v8 - 8) = v14;
            PfnProtection = MiGetPfnProtection(v13, v5);
            v17 = *(_QWORD *)(v9 + 8 * v8 - 8) ^ (*(_DWORD *)(v9 + 8 * v8 - 8) ^ PfnProtection) & 0x1F;
          }
          else
          {
            v18 = v12 & 0xFFFFFFFFFFFFFF1FuLL;
            *(_QWORD *)(v9 + 8 * v8 - 8) = v18;
            v17 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v6 + 16) >> 5)) & 0x1F;
          }
          *(_QWORD *)(v9 + 8 * v8 - 8) = v17;
          return 0LL;
        }
        return 4LL;
      }
      if ( (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
      {
        v19 = *(_QWORD *)(v7 + 16) + 1LL;
        *(_QWORD *)(v7 + 16) = v19;
        if ( v19 >= *(_QWORD *)(v7 + 24) )
          return 4LL;
        v21 = 32 * v19 + *(_QWORD *)(v7 + 8);
        MiIdentifyPfnWrapper(v6);
        *(_QWORD *)(v21 - 8) = v5;
      }
    }
  }
  return 0LL;
}
