/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0073954
 * Callers:
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001DB74 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
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
