/*
 * XREFs of ?SetResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAJ_K@Z @ 0x1C0085B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNotifiedDeletionResource::SetResourceLifetimeTag(
        DirectComposition::CNotifiedDeletionResource *this,
        __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 48) )
    return 3221225506LL;
  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = 1;
  return result;
}
