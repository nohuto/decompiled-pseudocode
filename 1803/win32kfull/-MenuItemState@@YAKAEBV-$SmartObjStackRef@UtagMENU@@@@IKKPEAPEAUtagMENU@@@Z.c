/*
 * XREFs of ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00C2838
 * Callers:
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     _CheckMenuItem @ 0x1C01307A0 (_CheckMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 */

__int64 __fastcall MenuItemState(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v7; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a1;
  v9 = MNLookUpItem(v7, a2, a3 & 0x400, a5);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *v9;
  v11 = *(_DWORD *)(*v9 + 4LL);
  result = a4 & v11;
  *(_DWORD *)(v10 + 4) = v11 ^ a4 & (a3 ^ result);
  return result;
}
