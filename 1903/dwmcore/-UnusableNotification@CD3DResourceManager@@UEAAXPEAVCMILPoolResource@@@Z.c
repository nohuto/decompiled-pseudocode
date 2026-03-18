/*
 * XREFs of ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1800B1C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CD3DResourceManager::UnusableNotification(CD3DResourceManager *this, struct CMILPoolResource *a2)
{
  CD3DResourceManager::DestroyResource(this, a2);
}
