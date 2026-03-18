/*
 * XREFs of ACPIGetTableVersion @ 0x1C0001E80
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIGetTableVersion(int a1, _DWORD *a2)
{
  if ( a1 == 1413763908 )
  {
    *a2 = *(unsigned __int8 *)(*((_QWORD *)AcpiInformation + 3) + 8LL);
    return 0LL;
  }
  if ( a1 == 1346584902 )
  {
    *a2 = *(unsigned __int8 *)(*((_QWORD *)AcpiInformation + 1) + 8LL);
    return 0LL;
  }
  return 3221225659LL;
}
