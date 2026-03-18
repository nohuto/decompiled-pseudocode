/*
 * XREFs of MiAddRangeToPartitionTree @ 0x1402E97D0
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1402E96E8 (MiAddMdlToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x14089C880 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r13d
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *PoolWithTag; // rbx
  PVOID v18; // r14
  __int64 v19; // r12
  __int64 v20; // rcx
  bool v21; // r8
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  _QWORD v31[6]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+18h]

  v5 = a2;
  v6 = a1;
  memset(v31, 0, sizeof(v31));
  v7 = v31[3];
  v8 = 0;
  v9 = 0LL;
  v10 = v5 & 0x7FFFFFFFFFFC0000LL;
  v11 = v5 + 0x3FFFF;
  v30 = v5 + 0x3FFFF;
  v29 = v5 & 0x7FFFFFFFFFFC0000LL;
LABEL_2:
  v7 = v10 | v7 & 0x8000000000000000uLL;
  v12 = (a3 + v11 - (v7 & 0x7FFFFFFFFFFFFFFFLL)) >> 18;
LABEL_3:
  v34 = v5;
  if ( v12 )
  {
    v13 = (_QWORD *)*v6;
    if ( !*v6 )
      goto LABEL_11;
    v14 = v7 & 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v15 = v13[3];
      v16 = v15 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v14 < (v15 & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v13 = (_QWORD *)*v13;
      }
      else
      {
        if ( v14 <= v16 )
        {
          if ( v13 )
          {
            v19 = (__int64)(v13 + 4);
            if ( v15 >= 0 || a4 != 1 )
            {
              v13[3] = v16;
              v15 &= ~0x8000000000000000uLL;
            }
            goto LABEL_28;
          }
LABEL_11:
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x7070694Du);
          if ( PoolWithTag )
          {
            v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8000uLL, 0x6270694Du);
            if ( v18 )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              memset(v18, 0, 0x8000uLL);
              v19 = (__int64)(PoolWithTag + 4);
              PoolWithTag[4] = 0x40000LL;
              PoolWithTag[5] = v18;
              v20 = PoolWithTag[3] ^ (v7 ^ PoolWithTag[3]) & 0x7FFFFFFFFFFFFFFFLL;
              PoolWithTag[3] = v20;
              if ( a4 == 1 )
              {
                v20 |= 0x8000000000000000uLL;
                PoolWithTag[3] = v20;
              }
              v21 = 0;
              v22 = (_QWORD *)*a1;
              if ( *a1 )
              {
                v23 = v20 & 0x7FFFFFFFFFFFFFFFLL;
                while ( 1 )
                {
                  if ( v23 < (v22[3] & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v24 = (_QWORD *)*v22;
                    if ( !*v22 )
                    {
                      v21 = 0;
                      break;
                    }
                  }
                  else
                  {
                    v24 = (_QWORD *)v22[1];
                    if ( !v24 )
                    {
                      v21 = 1;
                      break;
                    }
                  }
                  v22 = v24;
                }
              }
              RtlAvlInsertNodeEx(a1, (unsigned __int64)v22, v21, PoolWithTag);
              v15 = PoolWithTag[3];
              v5 = v34;
LABEL_28:
              v25 = v15 & 0x7FFFFFFFFFFFFFFFLL;
              v26 = a3;
              if ( v25 - v5 + 0x40000 <= a3 )
                v26 = v25 - v5 + 0x40000;
              v27 = v5 - v25;
              if ( v8 )
              {
                RtlClearBitsEx(v19, v27, v26);
              }
              else
              {
                RtlSetBitsEx(v19, v27, v26);
                v9 += v26;
              }
              v5 += v26;
              a3 -= v26;
              v6 = a1;
              --v12;
              v7 ^= (v7 ^ (v7 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_3;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          v8 = 1;
          if ( v9 )
          {
            v6 = a1;
            a3 = v9;
            v5 = a2;
            v10 = v29;
            v11 = v30;
            goto LABEL_2;
          }
          return 0LL;
        }
        v13 = (_QWORD *)v13[1];
      }
      if ( !v13 )
        goto LABEL_11;
    }
  }
  return v8 != 1;
}
