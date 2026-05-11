/*
 * XREFs of USBCntrlGetSetGEQ @ 0x1C002D880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     USBHwGetSetProperty @ 0x1C0028C78 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetGEQ(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  int SetProperty; // r13d
  unsigned int v10; // r15d
  int *PoolWithTag; // rsi
  _BYTE *v12; // rcx
  __int64 v13; // r9
  int *v14; // r8
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp-48h]

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 128);
  SetProperty = -1073741670;
  v10 = 30;
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
    v10 = *(_DWORD *)(v7 + 40LL * a5 + 12);
  PoolWithTag = (int *)ExAllocatePoolWithTag((POOL_TYPE)512, v10 + 4, 0x41627845u);
  if ( PoolWithTag )
  {
    if ( a6 == 1 )
    {
      if ( a3 != 4 * v10 )
      {
        ExFreePool(PoolWithTag);
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          0xAu,
          0xCu,
          (__int64)&WPP_5429d2dbdad8394cbb96feb220daa312_Traceguids);
        return 3221225990LL;
      }
      *PoolWithTag = *(_DWORD *)(v7 + 40LL * a5 + 16);
      v12 = PoolWithTag + 1;
      v13 = v10;
      v14 = (int *)a4;
      do
      {
        v15 = *v14++;
        *v12++ = v15 / 0x4000;
        --v13;
      }
      while ( v13 );
    }
    SetProperty = USBHwGetSetProperty(
                    a1,
                    0x1Bu,
                    a6 != 1,
                    a6,
                    6,
                    *(_WORD *)(v7 + 40LL * a5 + 8),
                    *(_WORD *)(a2 + 80),
                    *(unsigned __int8 *)(*(_QWORD *)(v23 + 48) + 2LL),
                    PoolWithTag,
                    v10 + 4);
    if ( SetProperty >= 0 )
    {
      if ( (a6 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
        {
          do
          {
            v22 = v6++;
            *(_DWORD *)(*(_QWORD *)(v7 + 40LL * a5 + 32) + 20 * v22) = a4[v22];
          }
          while ( v6 < *(_DWORD *)(v7 + 40LL * a5 + 12) );
        }
      }
      else
      {
        if ( *a4 )
          goto LABEL_26;
        v16 = 0;
        a4[1] = *PoolWithTag;
        do
        {
          v17 = *PoolWithTag;
          v18 = *a4;
          if ( _bittest(&v17, v16) )
            *a4 = ++v18;
          ++v16;
        }
        while ( v16 < 0x1E );
        if ( v18 )
        {
LABEL_26:
          do
          {
            v19 = v6++;
            *(_DWORD *)(*((_QWORD *)a4 + 2) + 4 * v19) = *((char *)PoolWithTag + v19 + 4) << 14;
          }
          while ( v6 < *a4 );
        }
      }
    }
    ExFreePool(PoolWithTag);
  }
  return (unsigned int)SetProperty;
}
