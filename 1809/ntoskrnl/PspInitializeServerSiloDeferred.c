/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x140887440
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x140887544 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     CmInitServerSiloState @ 0x140730704 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407562F8 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x140759EA0 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x14080E338 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140886A70 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870D4 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408878F0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B38 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140887C58 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14088BD64 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14089B7C4 (SeInitServerSilo.c)
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
            if ( inited < 0 )
              goto LABEL_15;
            result = ExpTimeZoneInitSiloState((__int64)a1);
            if ( (int)result < 0 )
              return result;
            inited = SeInitServerSilo(a1);
            if ( inited < 0
              || (inited = CmInitServerSiloState(), inited < 0)
              || (inited = EtwInitializeSiloState(a1), inited < 0)
              || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
            {
LABEL_15:
              ServerSiloGlobals[276] = 4;
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
