/*
 * XREFs of PsGetSiloContext @ 0x1402E97E0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x1402EC3D4 (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_14055C988;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
