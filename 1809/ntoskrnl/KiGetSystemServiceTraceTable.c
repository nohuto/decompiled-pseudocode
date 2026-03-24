/*
 * XREFs of KiGetSystemServiceTraceTable @ 0x140844B14
 * Callers:
 *     KeSetSystemServiceCallback @ 0x140844960 (KeSetSystemServiceCallback.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x140844C64 (KiSystemServiceTraceTableCompareFunction.c)
 */

__int64 KiGetSystemServiceTraceTable()
{
  PVOID PoolWithTag; // rax
  unsigned __int64 v1; // rdi
  _BOOL8 v2; // r8
  _QWORD *v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // rax

  if ( !KiSystemServiceTraceCallbackTable )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8290uLL, 0x7454694Bu);
    v1 = (unsigned __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x8290uLL);
      v3 = &off_14090E1B8;
      v4 = 464LL;
      v5 = v1 + 40;
      do
      {
        *(_DWORD *)(v5 + 12) = *((_DWORD *)v3 - 2);
        v6 = *v3;
        *(_QWORD *)v5 = *v3;
        *(_DWORD *)(v5 + 8) = *((_DWORD *)v3 - 1);
        v7 = *(_QWORD *)(v1 + 8);
        v8 = *(_QWORD *)v1;
        if ( (v7 & 1) != 0 && v8 )
          v8 ^= v1;
        LOBYTE(v2) = 0;
        v9 = v7 & 1;
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
        RtlRbInsertNodeEx(v1, v8, v2, (_QWORD *)(v5 - 24));
        v5 += 72LL;
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
