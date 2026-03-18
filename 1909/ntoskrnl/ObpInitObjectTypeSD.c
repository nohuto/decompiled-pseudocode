/*
 * XREFs of ObpInitObjectTypeSD @ 0x14075E94C
 * Callers:
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1405C7D10 (ObLogSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14075E9E8 (ObpCreateDefaultObjectTypeSD.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  char *v4; // rbx
  int v5; // eax
  int v6; // edi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = a2;
  v4 = (char *)a2;
  if ( a2 || (v5 = ObpCreateDefaultObjectTypeSD(&P), v4 = (char *)P, v6 = v5, v5 >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4, &P, 0x10u);
    if ( v6 >= 0 )
    {
      if ( P )
        *(_QWORD *)(a1 - 8) = (char *)P + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
