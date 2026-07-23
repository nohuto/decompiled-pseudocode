/*
 * XREFs of PiDevCfgCopyVariableData @ 0x14082D7B8
 * Callers:
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140832430 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PiDevCfgCopyVariableData(__int64 a1, __int64 a2)
{
  int v2; // esi
  PVOID v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_12;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 0x8000 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      v7 = 0LL;
    v2 = SysCtxRegOpenKey(v7, v5, 0LL, 0, 0x20019u, (__int64)&v11);
    if ( v2 >= 0 )
    {
      v4 = v11;
LABEL_12:
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a1 + 40) = v4;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 36);
    if ( !v8 )
      goto LABEL_12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x63647050u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
