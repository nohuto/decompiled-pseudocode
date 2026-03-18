/*
 * XREFs of ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C00E6678
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005650 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00E6700 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::IsPrimaryClonePath(DMMVIDPNPRESENTPATH *this, bool *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 Container; // rax
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
    v6 = *(_QWORD *)(v3 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v6 + 64, (__int64)a2);
  MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                  (DMMVIDPNTOPOLOGY *)(Container + 96),
                                  v7);
  if ( MostImportantPathFromSource )
    *a2 = *(_DWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 24LL) == *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  else
    return (unsigned int)-1071774919;
  return v4;
}
