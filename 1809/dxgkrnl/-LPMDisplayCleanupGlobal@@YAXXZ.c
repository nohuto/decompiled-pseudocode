/*
 * XREFs of ?LPMDisplayCleanupGlobal@@YAXXZ @ 0x1C021B308
 * Callers:
 *     DxgkUnload @ 0x1C0208940 (DxgkUnload.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C021B624 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 */

void LPMDisplayCleanupGlobal(void)
{
  PVOID *v0; // rbx

  v0 = (PVOID *)FileObject;
  if ( FileObject )
  {
    if ( *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    if ( *v0 )
      ObfDereferenceObject(*v0);
    operator delete(v0);
    FileObject = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    operator delete(Resource);
    Resource = 0LL;
  }
  qword_1C008EDB0 = 0LL;
}
