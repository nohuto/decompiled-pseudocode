/*
 * XREFs of ??_ECFlipQueuedObject@@MEAAPEAXI@Z @ 0x1C005E460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall CFlipQueuedObject::`vector deleting destructor'(char *P, char a2)
{
  char *v3; // rax
  __int64 v4; // r8
  char **v5; // rcx

  *(_QWORD *)P = &CFlipPresentCancel::`vftable';
  v3 = P + 8;
  v4 = *((_QWORD *)P + 1);
  if ( *(char **)(v4 + 8) != P + 8 || (v5 = (char **)*((_QWORD *)P + 2), *v5 != v3) )
    __fastfail(3u);
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
