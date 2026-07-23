/*
 * XREFs of PopFxConvertV1Components @ 0x140726994
 * Callers:
 *     PoFxRegisterDevice @ 0x140726800 (PoFxRegisterDevice.c)
 *     PoFxRegisterCoreDevice @ 0x140726B50 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14086A5B0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *__fastcall PopFxConvertV1Components(__int64 a1, unsigned int a2)
{
  char *v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int v5; // r9d
  unsigned int v6; // edx
  _DWORD *v7; // r8
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  SIZE_T v13; // rax
  size_t v14; // rsi
  char *PoolWithTag; // rax
  char *v16; // rbx
  unsigned int v17; // r11d
  char *v18; // r10
  __int64 v19; // r8
  char *v20; // r9
  __int128 v21; // xmm0
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (_DWORD *)(a1 + 16);
    while ( 1 )
    {
      v8 = v5;
      if ( !*v7 )
        break;
      v9 = *v7 + v5;
      v10 = -1;
      if ( v9 >= v5 )
        v10 = *v7 + v5;
      v5 = v10;
      if ( v9 < v8 )
        break;
      ++v6;
      v7 += 8;
      if ( v6 >= (unsigned int)v3 )
      {
        if ( is_mul_ok(v3, 0x38uLL) )
        {
          v11 = (56 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v12 = 24LL * v10;
          if ( v12 <= 0xFFFFFFFF )
          {
            v13 = v11 + (unsigned int)v12;
            if ( v13 >= (unsigned int)v12 )
            {
              v14 = v11 + (unsigned int)v12;
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x4D584650u);
              v16 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, v14);
                v17 = 0;
                v18 = &v16[v11];
                if ( (_DWORD)v3 )
                {
                  v19 = a1 + 16;
                  v20 = v16 + 28;
                  while ( 1 )
                  {
                    v21 = *(_OWORD *)(v19 - 16);
                    *(_QWORD *)(v20 - 12) = 0LL;
                    v22 = 0LL;
                    *(_OWORD *)(v20 - 28) = v21;
                    *(_DWORD *)v20 = *(_DWORD *)v19;
                    *(_QWORD *)(v20 + 4) = v18;
                    *((_DWORD *)v20 - 1) = *(_DWORD *)(v19 + 4);
                    if ( *(_DWORD *)v19 )
                      break;
LABEL_17:
                    ++v17;
                    v19 += 32LL;
                    v20 += 56;
                    if ( v17 >= (unsigned int)v3 )
                      goto LABEL_18;
                  }
                  while ( v18 - v16 <= v14 - 24 )
                  {
                    v23 = *(_QWORD *)(v19 + 8);
                    v24 = 3 * v22;
                    v22 = (unsigned int)(v22 + 1);
                    *((_DWORD *)v18 + 4) = *(_DWORD *)(v23 + 8 * v24 + 16);
                    *(_QWORD *)v18 = *(_QWORD *)(v23 + 8 * v24);
                    *((_QWORD *)v18 + 1) = *(_QWORD *)(v23 + 8 * v24 + 8);
                    v18 += 24;
                    if ( (unsigned int)v22 >= *(_DWORD *)v19 )
                      goto LABEL_17;
                  }
                }
                else
                {
LABEL_18:
                  v2 = v16;
                  v16 = 0LL;
                }
                if ( v16 )
                  ExFreePoolWithTag(v16, 0x4D584650u);
              }
            }
          }
        }
        return v2;
      }
    }
  }
  return v2;
}
