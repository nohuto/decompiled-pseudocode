/*
 * XREFs of ?RtlULongLongAdd@@YGJ_K0PA_K@Z @ 0x10012137
 * Callers:
 *     ?RtlULongLongMult@@YGJ_K0PA_K@Z @ 0x10012171 (-RtlULongLongMult@@YGJ_K0PA_K@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge RtlULongLongAdd@<eax>(
        __int64 *a1@<ecx>,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  int v6; // ecx

  v4 = a3 + a2;
  if ( a3 + a2 < a2 )
  {
    v4 = -1LL;
    v6 = -1073741675;
  }
  else
  {
    v6 = 0;
  }
  *a1 = v4;
  LODWORD(v4) = v6;
  return v4;
}
