/*
 * XREFs of ?_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z @ 0x1800AAD08
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180023F34 (--1_Locinfo@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // rdx

  v1 = (const char *)*((_QWORD *)a1 + 9);
  if ( v1 )
    setlocale(0, v1);
}
