/*
 * XREFs of PepQueryName @ 0x1C003718C
 * Callers:
 *     PepQueryVetoList @ 0x1C001FADC (PepQueryVetoList.c)
 *     RegisterKernelPlatformStates @ 0x1C003550C (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C003651C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036BA8 (PepNotifyQueryProcessorIdleStatesV2.c)
 * Callees:
 *     memset @ 0x1C00046C0 (memset.c)
 */

__int64 __fastcall PepQueryName(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v8; // ebx
  SIZE_T v9; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  _WORD *v14; // rax
  __int16 v15; // cx
  __int16 v16; // cx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v18 = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(a1 + 1104);
  LODWORD(v18) = a2;
  v8 = PoFxProcessorNotification(v6, a3, &v18);
  if ( !v8 )
  {
    v9 = 2 * (unsigned int)WORD2(v18) + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
    v11 = (unsigned __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v12 = *(_QWORD *)(a1 + 1104);
      v19 = v11;
      v8 = PoFxProcessorNotification(v12, a3, &v18);
      if ( !v8 )
      {
        *(_QWORD *)a4 = 0LL;
        *(_QWORD *)(a4 + 8) = 0LL;
        v13 = 0x7FFFLL;
        v14 = (_WORD *)v11;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v13;
        }
        while ( v13 );
        v8 = v13 == 0 ? 0xC000000D : 0;
        if ( v13 )
          v15 = 0x7FFF - v13;
        else
          v15 = 0;
        if ( v13 )
        {
          if ( a4 )
          {
            v16 = 2 * v15;
            *(_QWORD *)(a4 + 8) = v11;
            *(_WORD *)a4 = v16;
            *(_WORD *)(a4 + 2) = v16 + 2;
          }
          else
          {
            v8 = -1073741811;
          }
        }
        v11 &= -(__int64)(v8 != 0);
      }
      if ( v11 )
        ExFreePoolWithTag((PVOID)v11, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
