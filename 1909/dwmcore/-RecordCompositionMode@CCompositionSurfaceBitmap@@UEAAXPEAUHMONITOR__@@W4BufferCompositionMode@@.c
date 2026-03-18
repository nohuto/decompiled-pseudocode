/*
 * XREFs of ?RecordCompositionMode@CCompositionSurfaceBitmap@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180012990
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180012C44 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::RecordCompositionMode(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char result; // al
  __int64 v9; // r9

  result = CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(a1 - 56));
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 136LL))(
             *(_QWORD *)(a1 + 32),
             a2,
             a3,
             v9);
  }
  return result;
}
