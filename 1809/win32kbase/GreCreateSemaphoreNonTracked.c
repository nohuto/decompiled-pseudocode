/*
 * XREFs of GreCreateSemaphoreNonTracked @ 0x1C0005538
 * Callers:
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *GreCreateSemaphoreNonTracked()
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v1; // rbx

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x6D657347u);
  v1 = PoolWithTag;
  if ( PoolWithTag && ExInitializeResourceLite(PoolWithTag) < 0 )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
