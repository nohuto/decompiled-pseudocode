/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0061CCC
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00603B0 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0105804 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C01CE2F0 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  memset(word_1C01CE308, 0, 0x20uLL);
  qword_1C01CE2F4 = 0LL;
}
