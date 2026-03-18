/*
 * XREFs of StageQueue_Acquire @ 0x1C0027BD0
 * Callers:
 *     Isoch_Stage_Acquire @ 0x1C003060C (Isoch_Stage_Acquire.c)
 *     Bulk_Stage_Acquire @ 0x1C00365AC (Bulk_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StageQueue_Acquire(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned __int8 v3; // r10
  unsigned __int8 *v4; // r9
  int v5; // ecx
  __int64 v6; // rax

  v1 = a1[2];
  v3 = a1[1];
  if ( v1 == v3 )
    return 0LL;
  v5 = a1[3];
  v6 = v5 * (unsigned int)*a1;
  a1[2] = v1 + 1;
  v4 = &a1[v6 + 16];
  a1[3] = (v5 + 1) % (unsigned int)v3;
  return v4;
}
