/*
 * XREFs of MiInitializeSessionPool @ 0x14073FFF0
 * Callers:
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 * Callees:
 *     ExInitializePoolDescriptor @ 0x140740044 (ExInitializePoolDescriptor.c)
 */

__int64 MiInitializeSessionPool()
{
  unsigned __int64 v0; // r9
  __int64 v1; // r9

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  *(_QWORD *)(v0 + 168) = 0LL;
  ExInitializePoolDescriptor(v0 + 704, 33LL);
  *(_QWORD *)(v1 + 176) = 0x2000000LL;
  *(_DWORD *)(v1 + 4) |= 4u;
  return 0LL;
}
