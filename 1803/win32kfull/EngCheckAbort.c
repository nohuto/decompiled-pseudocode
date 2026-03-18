/*
 * XREFs of EngCheckAbort @ 0x1C0248300
 * Callers:
 *     NtGdiEngCheckAbort @ 0x1C0282BE0 (NtGdiEngCheckAbort.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EngCheckAbort(SURFOBJ *pso)
{
  __int64 v1; // rax

  v1 = SURFOBJ_TO_SURFACE(pso);
  if ( v1 && *(_QWORD *)(v1 + 32) )
    return *(_DWORD *)(v1 + 112) & 0x40000000;
  else
    return 0;
}
