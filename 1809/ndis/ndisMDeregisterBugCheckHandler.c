/*
 * XREFs of ndisMDeregisterBugCheckHandler @ 0x1C00F2D4C
 * Callers:
 *     ndisMHaltMiniport @ 0x1C00EC4FC (ndisMHaltMiniport.c)
 *     NdisMDeregisterAdapterShutdownHandler @ 0x1C00F1C00 (NdisMDeregisterAdapterShutdownHandler.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMDeregisterBugCheckHandler(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x2000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xFFFFDFFF;
    LOBYTE(v1) = KeDeregisterBugCheckCallback((PKBUGCHECK_CALLBACK_RECORD)(a1 + 2088));
  }
  return v1;
}
