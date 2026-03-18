/*
 * XREFs of ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAEKPEAK@Z @ 0x1C0255FC8
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C010A9B0 (MonitorAPIProcessTerminating.c)
 * Callees:
 *     <none>
 */

char __fastcall OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(__int64 *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // eax

  v3 = a2 + 1;
  if ( a2 + 1 < a2 )
    return 0;
  v5 = a2 + 1;
  v6 = *((_DWORD *)a1 + 3);
  if ( v3 >= v6 )
    return 0;
  v7 = *a1;
  while ( 1 )
  {
    v8 = v5;
    if ( *(_QWORD *)(v7 + 8LL * v5) )
      break;
    v9 = v5 + 1;
    v10 = -1;
    if ( v5 + 1 >= v5 )
      v10 = v5 + 1;
    v5 = v10;
    if ( v9 < v8 || v10 >= v6 )
      return 0;
  }
  *a3 = v5;
  return 1;
}
