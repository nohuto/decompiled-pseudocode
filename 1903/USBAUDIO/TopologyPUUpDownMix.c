/*
 * XREFs of TopologyPUUpDownMix @ 0x1C0024350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyPUUpDownMix(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  NTSTATUS v7; // ebx
  __int64 v8; // r14
  _DWORD *PoolWithTag; // rax
  __int64 v10; // r8
  void *v11; // rdi
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax

  v3 = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a3 + 76) = 21;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_UPDOWN_MIX;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_UPDOWN_MIX;
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 4 * v3 + 40, 0x41627845u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)(a3 + 128) = PoolWithTag;
      *PoolWithTag = 2;
      PoolWithTag[2] = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
      PoolWithTag[3] = *(_DWORD *)(a2 + 24);
      *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
      PoolWithTag[5] = v3;
      v12 = 0LL;
      do
      {
        *(_DWORD *)(v12 + *((_QWORD *)PoolWithTag + 4)) = *(_DWORD *)(v12 + *(_QWORD *)(a2 + 88));
        v12 += 4LL;
        --v8;
      }
      while ( v8 );
      v13 = PoolWithTag + 6;
      if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
      {
        *v13 = 0;
        LOBYTE(v10) = -127;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 136))(a1, a3, v10);
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)PoolWithTag + 4);
        v7 = 0;
        *v13 = 1;
        *(_DWORD *)(a3 + 88) = *v14;
      }
      if ( v7 < 0 || (v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v11, ExFreePool), v7 < 0) )
        ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v7;
}
