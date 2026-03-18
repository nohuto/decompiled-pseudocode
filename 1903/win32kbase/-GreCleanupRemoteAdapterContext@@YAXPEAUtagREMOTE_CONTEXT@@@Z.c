/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00B6AC0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C012E9C8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C0215BA0 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  memset(Dest, 0, 0x20uLL);
  qword_1C0215BA4 = 0LL;
}
