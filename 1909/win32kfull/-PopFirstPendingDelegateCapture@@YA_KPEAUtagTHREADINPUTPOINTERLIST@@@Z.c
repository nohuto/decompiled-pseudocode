/*
 * XREFs of ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F2334
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopFirstPendingDelegateCapture(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  __int64 v3; // rax

  if ( *(struct tagTHREADINPUTPOINTERLIST **)a1 == a1 )
    return 0LL;
  v1 = *((_QWORD *)a1 + 1);
  if ( (struct tagTHREADINPUTPOINTERLIST *)v1 == a1 )
    return 0LL;
  do
  {
    v2 = *(_DWORD *)(v1 + 48);
    v3 = v1;
    if ( (v2 & 4) != 0 )
      break;
    v1 = *(_QWORD *)(v1 + 8);
  }
  while ( (struct tagTHREADINPUTPOINTERLIST *)v1 != a1 );
  if ( (struct tagTHREADINPUTPOINTERLIST *)v1 == a1 )
    return 0LL;
  *(_DWORD *)(v3 + 48) = v2 & 0xFFFFFFFB;
  return *(_QWORD *)(v3 + 24);
}
