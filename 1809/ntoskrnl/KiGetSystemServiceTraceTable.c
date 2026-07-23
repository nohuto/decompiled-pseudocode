/*
 * XREFs of KiGetSystemServiceTraceTable @ 0x140845D74
 * Callers:
 *     KeSetSystemServiceCallback @ 0x140845BC0 (KeSetSystemServiceCallback.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x140845EC4 (KiSystemServiceTraceTableCompareFunction.c)
 */

__int64 KiGetSystemServiceTraceTable()
{
  _RTL_RB_TREE *PoolWithTag; // rax
  signed __int64 v1; // rdi
  __int64 v2; // r8
  _QWORD *v3; // r15
  __int64 v4; // r12
  char *v5; // r14
  __int64 v6; // rbp
  _RTL_BALANCED_NODE *v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // rax

  if ( !KiSystemServiceTraceCallbackTable )
  {
    PoolWithTag = (_RTL_RB_TREE *)ExAllocatePoolWithTag(PagedPool, 0x8290uLL, 0x7454694Bu);
    v1 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x8290uLL);
      v3 = &off_14090F478;
      v4 = 464LL;
      v5 = (char *)(v1 + 40);
      do
      {
        *((_DWORD *)v5 + 3) = *((_DWORD *)v3 - 2);
        v6 = *v3;
        *(_QWORD *)v5 = *v3;
        *((_DWORD *)v5 + 2) = *((_DWORD *)v3 - 1);
        v7 = *(_RTL_BALANCED_NODE **)(v1 + 8);
        v8 = *(_QWORD *)v1;
        if ( ((unsigned __int8)v7 & 1) != 0 && v8 )
          v8 ^= v1;
        LOBYTE(v2) = 0;
        v9 = (unsigned __int8)v7 & 1;
        if ( v8 )
        {
          while ( 1 )
          {
            if ( (int)KiSystemServiceTraceTableCompareFunction(v6, v8, v2) < 0 )
            {
              v10 = *(_QWORD *)v8;
              if ( v9 )
              {
                if ( !v10 )
                  goto LABEL_19;
                v10 ^= v8;
              }
              if ( !v10 )
              {
LABEL_19:
                LOBYTE(v2) = 0;
                break;
              }
            }
            else
            {
              v10 = *(_QWORD *)(v8 + 8);
              if ( v9 )
              {
                if ( !v10 )
                  goto LABEL_13;
                v10 ^= v8;
              }
              if ( !v10 )
              {
LABEL_13:
                LOBYTE(v2) = 1;
                break;
              }
            }
            v8 = v10;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v1, (PRTL_BALANCED_NODE)v8, v2, (PRTL_BALANCED_NODE)v5 - 1);
        v5 += 72;
        v3 += 2;
        --v4;
      }
      while ( v4 );
      if ( _InterlockedCompareExchange64(&KiSystemServiceTraceCallbackTable, v1, 0LL) )
        ExFreePoolWithTag((PVOID)v1, 0x7454694Bu);
    }
  }
  return KiSystemServiceTraceCallbackTable;
}
