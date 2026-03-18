/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1408C57C0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1408C58B4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     PspInitializeProtectedProcessParameters @ 0x140757FA4 (PspInitializeProtectedProcessParameters.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     CmInitServerSiloState @ 0x14077C1B0 (CmInitServerSiloState.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140847B90 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1408C4E30 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C5494 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408C5CAC (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C6034 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1408CA1E0 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
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
