/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B6150
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0056B40 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C0078B80 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C00B621C (GreDeleteSemaphoreNonTracked.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int v0; // edx
  int v1; // edx
  int v2; // edx
  struct _LIST_ENTRY *Flink; // [rsp+30h] [rbp+8h]

  if ( MultiUserEngAllocListLock )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        Flink = MultiUserGreEngAllocList.Flink;
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_11;
        v1 = (int)MultiUserGreEngAllocList.Flink[1].Flink;
        if ( v1 )
          break;
        EngFreeMem(&MultiUserGreEngAllocList.Flink[2]);
      }
      v0 = v1 - 1;
      if ( v0 )
      {
        v2 = v0 - 1;
        if ( v2 )
        {
          if ( v2 == 2 )
            goto LABEL_4;
        }
        else if ( (int)IsVerifierEngFreeMemSupported() >= 0 )
        {
          VerifierEngFreeMem(&Flink[2]);
        }
      }
      else
      {
LABEL_4:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_11:
  if ( GreEngLoadModuleAllocListLock )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( (int)IsEngFreeModuleSupported() >= 0 )
        EngFreeModule(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(MultiUserEngAllocListLock);
  MultiUserEngAllocListLock = 0LL;
  GreDeleteSemaphoreNonTracked(GreEngLoadModuleAllocListLock);
  GreEngLoadModuleAllocListLock = 0LL;
}
