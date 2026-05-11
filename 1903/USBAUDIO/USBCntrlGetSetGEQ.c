/*
 * XREFs of USBCntrlGetSetGEQ @ 0x1C002EBB0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0029E4C (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetGEQ(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r12
  int SetProperty; // r14d
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // r15
  _DWORD *PoolWithTag; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v24; // [rsp+98h] [rbp+10h]
  ULONG v25; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v6 = *(_QWORD *)(a2 + 128);
  SetProperty = -1073741670;
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v10 = a4;
  v11 = 30;
  v12 = 5 * v10;
  if ( *(_DWORD *)a3 )
    v11 = *(_DWORD *)a3;
  v25 = v11 + 4;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(v11 + 4), 0x41627845u);
  if ( PoolWithTag )
  {
    if ( a5 == 1 )
    {
      v14 = 0;
      for ( *PoolWithTag = *(_DWORD *)(a3 + 4);
            v14 < *(_DWORD *)a3;
            *((_BYTE *)PoolWithTag + v15 + 4) = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4 * v15) / 0x4000 )
      {
        v15 = v14++;
      }
    }
    SetProperty = USBHwGetSetProperty(
                    a1,
                    0x1Bu,
                    a5 != 1,
                    a5,
                    6,
                    *(_WORD *)(v6 + 8 * v12 + 8),
                    *(_WORD *)(a2 + 80),
                    *(unsigned __int8 *)(*(_QWORD *)(v24 + 48) + 2LL),
                    PoolWithTag,
                    v25);
    if ( SetProperty >= 0 )
    {
      v16 = *(_DWORD *)a3;
      if ( (a5 & 0x80u) == 0 )
      {
        if ( v16 )
        {
          do
          {
            v21 = v5++;
            *(_DWORD *)(*(_QWORD *)(v6 + 8 * v12 + 32) + 20 * v21) = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4 * v21);
          }
          while ( v5 < *(_DWORD *)a3 );
        }
      }
      else
      {
        if ( v16 )
          goto LABEL_23;
        v17 = 0;
        *(_DWORD *)(a3 + 4) = *PoolWithTag;
        do
        {
          v18 = *PoolWithTag;
          v19 = *(_DWORD *)a3;
          if ( _bittest(&v18, v17) )
            *(_DWORD *)a3 = ++v19;
          ++v17;
        }
        while ( v17 < 0x1E );
        if ( v19 )
        {
LABEL_23:
          do
          {
            v20 = v5++;
            *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4 * v20) = *((char *)PoolWithTag + v20 + 4) << 14;
          }
          while ( v5 < *(_DWORD *)a3 );
        }
      }
    }
    ExFreePool(PoolWithTag);
  }
  return (unsigned int)SetProperty;
}
