/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x18008C490
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver **v2; // r8
  struct ISupportedInputUpdateObserver **i; // rcx

  v2 = (struct ISupportedInputUpdateObserver **)*((_QWORD *)this + 85);
  for ( i = (struct ISupportedInputUpdateObserver **)*((_QWORD *)this + 84); i != v2 && *i != a2; ++i )
    ;
  memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
  *((_QWORD *)this + 85) -= 8LL;
  return 0LL;
}
