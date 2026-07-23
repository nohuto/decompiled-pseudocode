/*
 * XREFs of MmShutdownSystem @ 0x14057CEF0
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1402B4510 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_14043B824 < 2 )
    {
      dword_14043B824 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_14043F5E0;
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
  else if ( (unsigned int)dword_14043B824 < 3 )
  {
    dword_14043B824 = 3;
  }
  return 1;
}
