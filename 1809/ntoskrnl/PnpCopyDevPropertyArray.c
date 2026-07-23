/*
 * XREFs of PnpCopyDevPropertyArray @ 0x1406D84D0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x1407555DC (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14083700C (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpCopyDevProperty @ 0x14075151C (PnpCopyDevProperty.c)
 */

__int64 __fastcall PnpCopyDevPropertyArray(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, void **a5)
{
  unsigned int v5; // edi
  __int64 v8; // rbp
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  void *v13; // rcx
  __int64 v14; // rbp

  v5 = 0;
  *a4 = 0;
  v8 = a1;
  *a5 = 0LL;
  if ( a2 && a1 )
  {
    if ( !is_mul_ok(a1, 0x30uLL) )
      return (unsigned int)-1073741675;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a1, 0x57706E50u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 48 * v8);
      v11 = 0LL;
      if ( !(_DWORD)v8 )
        return v5;
      while ( 1 )
      {
        v5 = PnpCopyDevProperty(a2 + 48 * v11, v10, (char *)*a5 + 48 * v11);
        if ( (v5 & 0x80000000) != 0 )
          break;
        ++*a4;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= (unsigned int)v8 )
          return v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    v13 = *a5;
    if ( *a5 )
    {
      v14 = 0LL;
      if ( *a4 )
      {
        do
        {
          ExFreePoolWithTag(*((PVOID *)*a5 + 6 * v14 + 5), 0x57706E50u);
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *a4 );
        v13 = *a5;
      }
      ExFreePoolWithTag(v13, 0x57706E50u);
      *a4 = 0;
      *a5 = 0LL;
    }
  }
  return v5;
}
