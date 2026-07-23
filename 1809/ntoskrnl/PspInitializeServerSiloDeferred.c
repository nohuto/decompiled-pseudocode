/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1408886A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1408887A4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     CmInitServerSiloState @ 0x1407318F4 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407574E8 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x14075B090 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x14080F538 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140888334 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140888B50 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140888EB8 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14088CFC4 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14089CA24 (SeInitServerSilo.c)
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
