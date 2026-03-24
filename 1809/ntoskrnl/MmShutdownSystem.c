/*
 * XREFs of MmShutdownSystem @ 0x14057BEF0
 * Callers:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1402B4320 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_14043A764 < 2 )
    {
      dword_14043A764 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_14043E520;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*v2 + 204LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*v2 + 56LL));
            ++v2;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_14043A764 < 3 )
  {
    dword_14043A764 = 3;
  }
  return 1;
}
