/*
 * XREFs of ?GetHorizontalAlignment@CQuickConnectExperienceManager@@AEAAHHAEBUtagRECT@@@Z @ 0x1801C0E7C
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801C0C10 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::GetHorizontalAlignment(
        CQuickConnectExperienceManager *this,
        int a2,
        const struct tagRECT *a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  LONG v5; // ecx

  v3 = *((float *)this + 84);
  v4 = *((float *)this + 82);
  v5 = (int)(float)((float)((float)(v3 - (float)a2) * 0.5) + v4);
  if ( v5 < a3->left )
    return (unsigned int)(int)v4;
  if ( v5 + a2 > a3->right )
  {
    v4 = (float)(v4 + v3) - (float)a2;
    return (unsigned int)(int)v4;
  }
  return (unsigned int)v5;
}
