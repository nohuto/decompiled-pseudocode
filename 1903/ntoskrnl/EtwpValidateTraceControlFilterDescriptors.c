/*
 * XREFs of EtwpValidateTraceControlFilterDescriptors @ 0x1408FFA14
 * Callers:
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1408FE998 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateTraceControlFilterDescriptors(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned int *v12; // rbx
  unsigned __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v4 = a3;
  v17 = 0LL;
  v18 = 0LL;
  if ( a1 <= 0xD )
  {
    v8 = 0;
    v9 = 16 * a1;
    v10 = 0;
    if ( a1 )
    {
      v11 = v9;
      v12 = (unsigned int *)(a2 + 8);
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 - 1);
        if ( v13 < v11 )
          break;
        v14 = v12[1];
        if ( v14 == -2147479552 )
          break;
        if ( v14 == -2147483136 )
          break;
        if ( v14 == -2147482624 )
          break;
        if ( v14 == -2147483392 )
          break;
        if ( v14 == 0x80000000 )
          break;
        if ( v14 == -2147483646 )
          break;
        v15 = *v12;
        if ( (unsigned int)v15 > 0x400 || v13 + v15 > v4 )
          break;
        v8 += v15;
        if ( v14 == -2147483644 )
        {
          *(_QWORD *)(a4 + 80) = a2 + 16LL * v10;
        }
        else
        {
          v18 = __PAIR64__(v14, v15);
          v17 = v13 + a2;
          result = EtwpAllocateFilter(v14, &v17, a4, 0LL);
          if ( (int)result < 0 )
            return result;
        }
        ++v10;
        v11 = v9;
        v12 += 4;
        if ( v10 >= a1 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( v8 + v9 <= (unsigned int)v4 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
