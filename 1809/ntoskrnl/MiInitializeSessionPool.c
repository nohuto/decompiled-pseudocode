/*
 * XREFs of MiInitializeSessionPool @ 0x1407156A4
 * Callers:
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     ExInitializePoolDescriptor @ 0x140715A6C (ExInitializePoolDescriptor.c)
 */

__int64 MiInitializeSessionPool()
{
  unsigned __int64 v0; // rbx

  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v0 + 184) = 0LL;
  ExInitializePoolDescriptor(v0 + 3456, 33LL);
  *(_QWORD *)(v0 + 208) = MiGetPteAddress(*(_QWORD *)(v0 + 56));
  if ( !(unsigned int)MiInitializeDynamicBitmap(v0 + 192, qword_140438F68, 0x2000000LL, 0LL) )
    return 3221225626LL;
  *(_QWORD *)(v0 + 192) = 0LL;
  *(_QWORD *)(v0 + 216) = 0x2000000LL;
  *(_DWORD *)(v0 + 4) |= 4u;
  return 0LL;
}
