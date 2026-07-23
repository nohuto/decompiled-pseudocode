/*
 * XREFs of EtwpValidateTraceControlFilterDescriptors @ 0x1408C3ACC
 * Callers:
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1408C2A1C (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateTraceControlFilterDescriptors(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r10
  int v8; // r15d
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned int *v12; // rdi
  unsigned __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+2Ch] [rbp-2Ch]

  v4 = a3;
  v5 = a4;
  if ( a1 <= 0xD )
  {
    v8 = 0;
    v9 = 16 * a1;
    if ( 16 * a1 <= a3 )
    {
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
          if ( v13 >= v4 )
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
            *(_QWORD *)(v5 + 80) = a2 + 16LL * v10;
          }
          else
          {
            v18 = *v12;
            v17 = v13 + a2;
            v19 = v14;
            result = EtwpAllocateFilter(v14, &v17, v5, 0LL);
            if ( (int)result < 0 )
              return result;
            v5 = a4;
          }
          ++v10;
          v11 = v9;
          v12 += 4;
          if ( v10 >= a1 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        if ( v8 + v9 <= (unsigned int)v4 )
          return 0LL;
      }
    }
  }
  return 3221225485LL;
}
