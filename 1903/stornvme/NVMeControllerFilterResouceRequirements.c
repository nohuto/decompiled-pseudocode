/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C000AD58
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00046D0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     memmove @ 0x1C00050C0 (memmove.c)
 *     GetProcessorGroupInformation @ 0x1C0009154 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000A688 (IsPci3MsiInterrupt.c)
 */

void *__fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebp
  int v5; // r15d
  void *result; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // edx
  _BYTE *v11; // r8
  _BYTE *v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // r10d
  int v21; // r11d
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // rdx
  _OWORD *v27; // rcx
  int v28; // r8d
  unsigned int v29; // r9d
  __int64 v30; // rax
  unsigned int i; // ecx
  __int64 v32; // rdx
  __int64 v33; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( GetProcessorGroupInformation(a1) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_DWORD *)(v8 + 36);
    v10 = v9;
    if ( v9 )
    {
      v11 = (_BYTE *)(v8 + 41);
      do
      {
        if ( IsPci3MsiInterrupt((__int64)(v11 - 1)) )
        {
          ++v4;
        }
        else if ( *v12 == 1 && (v12[3] & 1) != 0 )
        {
          ++v5;
        }
        v11 = v12 + 32;
      }
      while ( v13 != 1 );
    }
    v14 = *(unsigned __int16 *)(a1 + 202);
    if ( v4 > v14 + 1 )
    {
      v9 += v14 - v4 + 1;
      v15 = 0;
      v16 = v10;
      if ( v10 )
      {
        while ( 1 )
        {
          if ( IsPci3MsiInterrupt(32LL * v15 + v8 + 40) )
          {
            if ( v19 )
            {
              while ( !_bittest64(&v19, v20) )
                ++v20;
            }
            *(_DWORD *)(v17 + v8 + 48) = -2;
            *(_WORD *)(v17 + v8 + 44) |= 4u;
            *(_WORD *)(v17 + v8 + 56) = 4;
            *(_QWORD *)(v17 + v8 + 64) = 1LL << v20;
            *(_DWORD *)(v17 + v8 + 52) = -2;
            *(_WORD *)(v17 + v8 + 58) = v21;
            *(_DWORD *)(v17 + v8 + 60) = 3;
            if ( (v19 & ~(1LL << v20)) == 0 && v21 == *(unsigned __int16 *)(a1 + 200) - 1 )
              break;
          }
          v16 = *(_DWORD *)(v8 + 36);
          v15 = v18 + 1;
          if ( v15 >= v16 )
            goto LABEL_22;
        }
        v16 = *(_DWORD *)(v8 + 36);
        v15 = v18 + 1;
      }
LABEL_22:
      v10 = v16;
      if ( v15 < v16 )
      {
        while ( !IsPci3MsiInterrupt(32LL * v15 + v8 + 40) )
        {
          v10 = *(_DWORD *)(v8 + 36);
          v15 = v23 + 1;
          if ( v15 >= v10 )
            goto LABEL_33;
        }
        if ( v25 )
        {
          while ( !_bittest64(&v25, v24) )
            ++v24;
        }
        v26 = 32 * v22;
        *(_WORD *)(v26 + v8 + 44) |= 4u;
        *(_DWORD *)(v26 + v8 + 56) = 4;
        *(_QWORD *)(v26 + v8 + 64) = 1LL << v24;
        v15 = v23 + 1;
        *(_DWORD *)(v26 + v8 + 48) = -2;
        *(_DWORD *)(v26 + v8 + 52) = -2;
        *(_DWORD *)(v26 + v8 + 60) = 3;
        v10 = *(_DWORD *)(v8 + 36);
      }
LABEL_33:
      while ( v15 < v10 && !IsPci3MsiInterrupt(32LL * v15 + v8 + 40) )
      {
        v10 = *(_DWORD *)(v8 + 36);
        ++v15;
      }
      while ( v15 < v10 )
      {
        if ( !IsPci3MsiInterrupt(32LL * v15 + v8 + 40) && v28 != v29 )
        {
          v30 = 32LL * v29;
          *(_OWORD *)(v30 + v8 + 40) = *v27;
          *(_OWORD *)(v30 + v8 + 56) = v27[1];
        }
        v10 = *(_DWORD *)(v8 + 36);
        v15 = v28 + 1;
      }
    }
    if ( v5 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v32 = 32LL * i;
        if ( *(_BYTE *)(v32 + v8 + 41) != 1 || (*(_BYTE *)(v32 + v8 + 44) & 1) == 0 )
        {
          if ( i != v2 )
          {
            v33 = 32LL * v2;
            *(_OWORD *)(v33 + v8 + 40) = *(_OWORD *)(v32 + v8 + 40);
            *(_OWORD *)(v33 + v8 + 56) = *(_OWORD *)(v32 + v8 + 56);
          }
          ++v2;
        }
        v10 = *(_DWORD *)(v8 + 36);
      }
      v9 += v2 - i;
    }
    memmove(
      (void *)(32LL * v9 + v8 + 40),
      (const void *)(32LL * v10 + v8 + 40),
      (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (32 * v10 + (_DWORD)v8 + 40));
    result = NVMeZeroMemory(
               (void *)(*(_QWORD *)(a2 + 8) + **(unsigned int **)(a2 + 8) - 32LL * (*(_DWORD *)(v8 + 36) - v9)),
               32 * (*(_DWORD *)(v8 + 36) - v9));
    *(_DWORD *)(v8 + 36) = v9;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL);
  }
  return result;
}
