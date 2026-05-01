/*
 * XREFs of ?GetVerticalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x1801A2090
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801A1D20 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::GetVerticalAlignment(
        CQuickConnectExperienceManager *this,
        int a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // r9d

  v3 = *((_DWORD *)this + 95);
  if ( v3 == *((_DWORD *)this + 97) )
    v3 = (int)*((float *)this + 83);
  if ( (signed int)(v3 + a2) > a3->bottom )
    return (unsigned int)(int)(float)((float)(*((float *)this + 85) + *((float *)this + 83)) - (float)a2);
  return v3;
}
