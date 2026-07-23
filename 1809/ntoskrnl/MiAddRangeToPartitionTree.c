/*
 * XREFs of MiAddRangeToPartitionTree @ 0x1402D09F8
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1402D0928 (MiAddMdlToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  int v6; // r13d
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *PoolWithTag; // rbx
  PVOID v17; // r14
  __int64 v18; // r12
  __int64 v19; // rcx
  bool v20; // r8
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v30; // [rsp+80h] [rbp+8h]
  unsigned __int64 v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v31 = a2;
  v30 = a1;
  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = a2 & 0x7FFFFFFFFFFC0000LL;
  v9 = a2 + 0x3FFFF;
  v29 = a2 + 0x3FFFF;
  v28 = a2 & 0x7FFFFFFFFFFC0000LL;
LABEL_2:
  v4 = v8 | v4 & 0x8000000000000000uLL;
  v10 = a2;
  v11 = (a3 + v9 - (v4 & 0x7FFFFFFFFFFFFFFFLL)) >> 18;
LABEL_3:
  v32 = v10;
  if ( v11 )
  {
    v12 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_11;
    v13 = v4 & 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v14 = v12[3];
      v15 = v14 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v13 < (v14 & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v12 = (_QWORD *)*v12;
      }
      else
      {
        if ( v13 <= v15 )
        {
          if ( v12 )
          {
            v18 = (__int64)(v12 + 4);
            if ( v14 >= 0 || a4 != 1 )
            {
              v12[3] = v15;
              v14 &= ~0x8000000000000000uLL;
            }
            goto LABEL_28;
          }
LABEL_11:
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x7070694Du);
          if ( PoolWithTag )
          {
            v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8000uLL, 0x6270694Du);
            if ( v17 )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              memset(v17, 0, 0x8000uLL);
              v18 = (__int64)(PoolWithTag + 4);
              PoolWithTag[4] = 0x40000LL;
              PoolWithTag[5] = v17;
              v19 = PoolWithTag[3] ^ (v4 ^ PoolWithTag[3]) & 0x7FFFFFFFFFFFFFFFLL;
              PoolWithTag[3] = v19;
              if ( v33 == 1 )
              {
                v19 |= 0x8000000000000000uLL;
                PoolWithTag[3] = v19;
              }
              v20 = 0;
              v21 = (_QWORD *)*v30;
              if ( *v30 )
              {
                v22 = v19 & 0x7FFFFFFFFFFFFFFFLL;
                while ( 1 )
                {
                  if ( v22 < (v21[3] & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v23 = (_QWORD *)*v21;
                    if ( !*v21 )
                    {
                      v20 = 0;
                      break;
                    }
                  }
                  else
                  {
                    v23 = (_QWORD *)v21[1];
                    if ( !v23 )
                    {
                      v20 = 1;
                      break;
                    }
                  }
                  v21 = v23;
                }
              }
              RtlAvlInsertNodeEx(v30, (unsigned __int64)v21, v20, PoolWithTag);
              v14 = PoolWithTag[3];
              v10 = v32;
LABEL_28:
              v24 = v14 & 0x7FFFFFFFFFFFFFFFLL;
              v25 = a3;
              if ( v24 - v10 + 0x40000 <= a3 )
                v25 = v24 - v10 + 0x40000;
              v26 = v10 - v24;
              if ( v6 )
              {
                RtlClearBitsEx(v18, v26, v25);
              }
              else
              {
                RtlSetBitsEx(v18, v26, v25);
                v7 += v25;
              }
              a1 = v30;
              a4 = v33;
              v10 += v25;
              a3 -= v25;
              --v11;
              v4 ^= (v4 ^ (v4 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_3;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          v6 = 1;
          if ( v7 )
          {
            a1 = v30;
            a3 = v7;
            a2 = v31;
            v8 = v28;
            a4 = v33;
            v9 = v29;
            goto LABEL_2;
          }
          return 0LL;
        }
        v12 = (_QWORD *)v12[1];
      }
      if ( !v12 )
        goto LABEL_11;
    }
  }
  return v6 != 1;
}
