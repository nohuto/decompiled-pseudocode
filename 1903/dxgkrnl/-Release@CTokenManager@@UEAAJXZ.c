/*
 * XREFs of ?Release@CTokenManager@@UEAAJXZ @ 0x1C0013850
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013818 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CTokenManager::Release(CTokenManager *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    CTokenManager::`scalar deleting destructor'(this);
  return v1;
}
