/*
 * XREFs of ?RequestInputThreadCursorUpdate@CGlobalInputManager@@UEAAJXZ @ 0x1800CC120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalInputManager::RequestInputThreadCursorUpdate(CGlobalInputManager *this)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 120);
    if ( v2 != (void *)-1LL )
      SetEvent(v2);
  }
  return 0LL;
}
