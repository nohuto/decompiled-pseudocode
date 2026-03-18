/*
 * XREFs of ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01CF1DC
 * Callers:
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01CF894 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     FreeDdeXact @ 0x1C01D0380 (FreeDdeXact.c)
 * Callees:
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01CEFFC (-GiveObject@@YAHIPEAXK@Z.c)
 */

__int64 __fastcall RemovePublicObject(int a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  void *v4; // r8
  _QWORD *v5; // rdi
  _QWORD *v6; // r9
  bool v7; // zf

  if ( a1 != 2 && a1 != 9 && a1 != 130 )
    return 0LL;
  v2 = gpPublicObjectList;
  v3 = 0LL;
  if ( !gpPublicObjectList )
    return 0LL;
  while ( 1 )
  {
    v4 = *(void **)(v2 + 8);
    v5 = (_QWORD *)v2;
    v6 = (_QWORD *)v3;
    v7 = v4 == a2;
    if ( v4 == a2 )
      break;
    v3 = v2;
    v2 = *(_QWORD *)v2;
    if ( !v2 )
    {
      v7 = v4 == a2;
      break;
    }
  }
  if ( v7 )
    v5 = v6;
  if ( !v2 )
    return 0LL;
  v7 = (*(_DWORD *)(v2 + 16))-- == 1;
  if ( v7 )
  {
    GiveObject(a1, a2, *(_DWORD *)(v2 + 20));
    if ( v5 )
      *v5 = *(_QWORD *)v2;
    else
      gpPublicObjectList = *(_QWORD *)v2;
    Win32FreePool(v2);
  }
  return 1LL;
}
