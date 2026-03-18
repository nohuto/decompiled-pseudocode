/*
 * XREFs of ?WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z @ 0x180244C10
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x180240F00 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::WaitForVBlank(CHolographicInteropTarget *this, void *a2)
{
  CHolographicManager *v2; // rcx
  __int64 result; // rax

  v2 = (CHolographicManager *)*((_QWORD *)this + 13);
  result = 0LL;
  if ( v2 )
    return CHolographicManager::WaitForVBlank(v2);
  return result;
}
