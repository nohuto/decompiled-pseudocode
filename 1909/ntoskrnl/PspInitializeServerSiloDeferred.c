/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1408C50A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1408C5194 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PspInitializeProtectedProcessParameters @ 0x14075C838 (PspInitializeProtectedProcessParameters.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     CmInitServerSiloState @ 0x14077EA80 (CmInitServerSiloState.c)
 *     ObInitServerSilo @ 0x140782F9C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140847298 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C4D74 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408C558C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C5914 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1408C9AC0 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1408D9844 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = PspSiloInitializeUserSharedData();
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeSystemRootSymlink(a1);
    if ( (int)result >= 0 )
    {
      result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
      if ( (int)result >= 0 )
      {
        result = PspSiloLoadApiSets(a1);
        if ( (int)result >= 0 )
        {
          result = PspSiloInitializeIsMultiSessionSku(a1);
          if ( (int)result >= 0 )
          {
            inited = ObInitServerSilo((__int64)a1);
            if ( inited < 0
              || (inited = SeInitServerSilo(a1), inited < 0)
              || (inited = CmInitServerSiloState((__int64)a1), inited < 0)
              || (inited = EtwInitializeSiloState(a1), inited < 0)
              || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
            {
              ServerSiloGlobals[272] = 4;
              PspDeleteExternalServerSiloState((__int64)a1);
            }
            else
            {
              inited = PspNotifyServerSiloCreation(a1);
              if ( inited >= 0 )
                return 0LL;
              PsTerminateServerSilo((__int64)a1);
            }
            return (unsigned int)inited;
          }
        }
      }
    }
  }
  return result;
}
