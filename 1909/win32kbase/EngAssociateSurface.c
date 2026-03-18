/*
 * XREFs of EngAssociateSurface @ 0x1C0089720
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00896C0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00229D0 (HmgShareLockCheckIgnoreStockBit.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  __int64 v6; // rax

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    v6 = HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 136) = 0LL;
      *(_QWORD *)(v6 + 48) = hdev;
      v3 = 1;
      *(_QWORD *)(v6 + 40) = *((_QWORD *)hdev + 225);
      *(_DWORD *)(v6 + 112) |= v4;
      HmgDecrementShareReferenceCountEx((struct OBJECT *)v6, 0LL);
    }
  }
  return v3;
}
