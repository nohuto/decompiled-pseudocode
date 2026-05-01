/*
 * XREFs of ?SetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x18018D690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  *((_BYTE *)this + 236) = 1;
  if ( a2 )
    v2 = (__int64)*a2;
  *((_QWORD *)this + 30) = v2;
  return 0LL;
}
