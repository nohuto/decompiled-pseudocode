/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C0019834
 * Callers:
 *     DpiDispatchPnp @ 0x1C013FE00 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = -1073741637;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v6 + 1) == 7 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = *(_QWORD *)(v7 + 152);
      ObfReferenceObject(*(PVOID *)(v7 + 152));
      v4 = 0;
      *(_QWORD *)(a2 + 56) = v13;
    }
    else
    {
      v4 = -1073741670;
      v16 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v16 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v16);
    }
  }
  else if ( *(_BYTE *)(v6 + 1) != 8 )
  {
    v15 = WdLogNewEntry5_WdError((unsigned int)*(unsigned __int8 *)(v6 + 1) - 7, v5, a3);
    *(_QWORD *)(v15 + 24) = *(unsigned __int8 *)(v6 + 1);
    WdLogEvent5_WdError(v15);
  }
  return v4;
}
