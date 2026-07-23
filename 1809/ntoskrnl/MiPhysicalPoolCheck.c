/*
 * XREFs of MiPhysicalPoolCheck @ 0x140164648
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1401626D4 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x140164514 (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPhysicalPoolCheck(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // r13
  unsigned __int64 v11; // rbx
  __int64 v13; // r11
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  bool v26; // cc
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v11 = 0LL;
  v29 = a7 - 1;
  v13 = -1LL;
  v14 = ~(a7 - 1);
  v15 = qword_14043B118[25 * a8 + 20].Alignment + ((a1 + a2) << 12);
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v13 == -1 )
      {
        if ( a3 - v11 < a4 )
          return -1LL;
      }
      else if ( a3 - v13 < a4 )
      {
        return -1LL;
      }
      v28 = MI_READ_PTE_LOCK_FREE(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
      v19 = 48 * (((v18 >> 3) & 0x1FF) + ((v16 >> 12) & 0xFFFFFFFFFLL));
      v20 = v19 - 0x58000000000LL;
      if ( *(_QWORD *)(v19 - 0x58000000000LL + 40) >> 58 != a8 )
      {
        v22 = 1LL;
LABEL_20:
        v13 = -1LL;
        goto LABEL_21;
      }
      if ( v13 != -1 )
        break;
      v21 = (unsigned __int128)(v19 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v22 = v17;
      v23 = ((unsigned __int64)v21 >> 63) + (v21 >> 3);
      if ( v23 <= a5 )
      {
        if ( v23 < a6 )
        {
          v22 = a6 - v23;
          v26 = v17 + v23 <= a6;
          goto LABEL_25;
        }
        if ( v23 + a4 > v23 )
        {
          v24 = v23 + a4 - 1;
          if ( v24 <= a5 )
          {
            if ( a7 && ((v23 ^ v24) & v14) != 0 )
            {
              v27 = v14 & (v23 + v29);
              v22 = v27 - v23;
              v26 = v17 + v23 <= v27;
LABEL_25:
              if ( v26 )
                v22 = v17;
              goto LABEL_21;
            }
            v13 = v11;
LABEL_13:
            if ( v13 != -1 && v11 - v13 + 1 >= a4 )
              return v13 + a1;
            v22 = 1LL;
            v8 = v20;
          }
        }
      }
LABEL_21:
      v11 += v22;
      v15 += v22 << 12;
      if ( v11 >= a3 )
        return -1LL;
    }
    if ( v20 != v8 + 48 )
    {
      v22 = 0LL;
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  return -1LL;
}
