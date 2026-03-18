/*
 * XREFs of ?GetExclusiveSurfaceUpdateEvent@CHolographicClient@@UEAAPEAXXZ @ 0x1802125C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CHolographicClient::GetExclusiveSurfaceUpdateEvent(CHolographicClient *this)
{
  if ( *((_QWORD *)this + 21) )
    return (void *)*((_QWORD *)this + 27);
  else
    return 0LL;
}
