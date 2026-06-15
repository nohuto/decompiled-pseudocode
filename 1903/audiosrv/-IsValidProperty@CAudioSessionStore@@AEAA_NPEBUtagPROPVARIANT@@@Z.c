/*
 * XREFs of ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x1800DFF78
 * Callers:
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800DECA0 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E12D0 (-SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAudioSessionStore::IsValidProperty(CAudioSessionStore *this, const struct tagPROPVARIANT *a2)
{
  if ( a2->vt > 0x1Fu )
  {
    if ( a2->vt < 0x40u || a2->vt > 0x41u && a2->vt != 70 && a2->vt != 8196 )
      return 0;
  }
  else if ( a2->vt < 0x1Eu
         && a2->vt
         && (a2->vt <= 1u || a2->vt > 8u && (a2->vt <= 9u || a2->vt > 0xBu && (a2->vt <= 0xFu || a2->vt > 0x17u))) )
  {
    return 0;
  }
  return 1;
}
