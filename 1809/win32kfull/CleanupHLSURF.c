/*
 * XREFs of CleanupHLSURF @ 0x1C0136FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0076174 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall CleanupHLSURF(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rdx
  HLSURF i; // rcx
  HLSURF *Objt; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  HLSURF v11; // rbx

  v4 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  for ( i = 0LL; ; i = v11 )
  {
    LOBYTE(v5) = 18;
    Objt = (HLSURF *)HmgSafeNextObjt(i, v5);
    if ( !Objt )
      break;
    v11 = *Objt;
    if ( !*Objt )
      break;
    bhLSurfDestroyLogicalSurfaceObject(Objt, 1, v4);
  }
  return GreReleaseHmgrSemaphore(v9, v8);
}
