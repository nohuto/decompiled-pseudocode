/*
 * XREFs of TopologyPUUpDownMix @ 0x1C00231C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyPUUpDownMix(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  NTSTATUS v4; // ebx
  __int64 v5; // rbp
  _DWORD *PoolWithTag; // rdi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax

  v3 = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a3 + 76) = 21;
  v4 = -1073741438;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_UPDOWN_MIX;
  v5 = a3;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_UPDOWN_MIX;
  PoolWithTag = 0LL;
  if ( (_DWORD)v3 )
  {
    v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 4 * v3 + 40, 0x41627845u);
    if ( !PoolWithTag )
      v4 = -1073741670;
  }
  if ( v4 >= 0 )
  {
    *(_QWORD *)(v5 + 128) = PoolWithTag;
    *PoolWithTag = 2;
    PoolWithTag[2] = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
    PoolWithTag[3] = *(_DWORD *)(a2 + 24);
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
    PoolWithTag[5] = v3;
    if ( (_DWORD)v3 )
    {
      v9 = 0LL;
      a3 = v3;
      do
      {
        *(_DWORD *)(v9 + *((_QWORD *)PoolWithTag + 4)) = *(_DWORD *)(v9 + *(_QWORD *)(a2 + 88));
        v9 += 4LL;
        --a3;
      }
      while ( a3 );
    }
    v10 = PoolWithTag + 6;
    if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
    {
      *v10 = 0;
      LOBYTE(a3) = -127;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 136))(a1, v5, a3);
    }
    else
    {
      v11 = (_DWORD *)*((_QWORD *)PoolWithTag + 4);
      v4 = 0;
      *v10 = 1;
      *(_DWORD *)(v5 + 88) = *v11;
    }
    if ( v4 < 0 || (v4 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool), v4 < 0) )
      ExFreePool(PoolWithTag);
  }
  return (unsigned int)v4;
}
