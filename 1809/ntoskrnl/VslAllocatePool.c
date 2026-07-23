/*
 * XREFs of VslAllocatePool @ 0x14027AE00
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(SIZE_T NumberOfBytes, ULONG Tag, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // ebx
  PVOID PoolWithTag; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // ebx

  v7 = NumberOfBytes;
  if ( NumberOfBytes > 0x1FA000 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x54736D56u);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741670;
LABEL_9:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v12;
  }
  v12 = VslpLockPagesForTransfer((_DWORD)v10, (_DWORD)PoolWithTag, v7, 1, 0);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_9;
  }
  *a3 = v11[7];
  *a4 = *v11;
  *a5 = v11;
  return 0LL;
}
