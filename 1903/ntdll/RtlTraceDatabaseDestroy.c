/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800FC0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800FC36C @ 0x1800FC36C (sub_1800FC36C.c)
 */

char __fastcall RtlTraceDatabaseDestroy(__int64 a1)
{
  _QWORD *v2; // rax
  char v3; // bl
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi

  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
    goto LABEL_9;
  v3 = 0;
  do
  {
    v4 = (_QWORD *)v2[2];
    v5 = v2 - 24;
    if ( v4 )
      v5 = v2;
    if ( !(unsigned __int8)sub_1800FC36C(v5) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v5);
      v3 = 1;
    }
    v2 = v4;
  }
  while ( v4 );
  if ( !v3 )
LABEL_9:
    LOBYTE(v2) = 1;
  return (char)v2;
}
