/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800FEC30
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlpTraceDatabaseFree @ 0x1800FEEF0 (RtlpTraceDatabaseFree.c)
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
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v5) )
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
