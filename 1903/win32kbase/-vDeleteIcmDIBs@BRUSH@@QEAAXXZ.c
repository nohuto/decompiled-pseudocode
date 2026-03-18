/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B3478
 * Callers:
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00BDB10 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  SURFACE *v3; // rax
  struct OBJECT *v4; // rbx

  v1 = *((_QWORD *)this + 11);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = (SURFACE *)HmgShareLockCheck(*(_QWORD *)(v1 + 8), 5);
      v4 = v3;
      if ( v3 )
      {
        SURFACE::vDec_cRef(v3);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      }
      Win32FreePool(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
