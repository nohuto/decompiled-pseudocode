/*
 * XREFs of ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016DD3C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C016D40C (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0234D9C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z @ 0x1C016DDC4 (-SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C016E064 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C016E224 (_UpgradeDispModeFlags.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C016E278 (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddUniqueMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // ebx
  struct _D3DKMT_DISPLAYMODE *v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = MODE_UNION_LIST::SearchIndexdModeList(this, a2, &v7);
  if ( v5 )
  {
    if ( (*(_DWORD *)&v5->Flags & 2) != 0 )
    {
      MODE_UNION_LIST::RemoveMode(this, v7);
      MODE_UNION_LIST::AddMode(this, a2, v7);
    }
    else
    {
      UpgradeDispModeFlags(v5, a2);
    }
  }
  else
  {
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v7);
  }
  return v2;
}
