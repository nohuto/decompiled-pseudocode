/*
 * XREFs of MmShutdownSystem @ 0x1405ABED0
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1402C97C0 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140466204 < 2 )
    {
      dword_140466204 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_14046A360;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v2 + 204LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)v2 + 56LL));
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140466204 < 3 )
  {
    dword_140466204 = 3;
  }
  return 1;
}
