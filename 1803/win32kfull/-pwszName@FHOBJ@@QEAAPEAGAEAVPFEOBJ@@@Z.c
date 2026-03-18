/*
 * XREFs of ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C00CBDA0
 * Callers:
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00CC000 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00CC3AC (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FHOBJ::pwszName(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    v3 = *(int *)(v2 + 8);
  else
    v3 = *(int *)(v2 + 16);
  return (unsigned __int16 *)(v2 + v3);
}
