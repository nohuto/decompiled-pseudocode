/*
 * XREFs of CmpInitializeKeyNameString @ 0x14083629C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408356C0 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1408373C4 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 */

unsigned __int64 __fastcall CmpInitializeKeyNameString(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  __int16 v6; // dx
  __int16 v7; // di
  unsigned __int64 result; // rax

  v5 = a1 + 76;
  v6 = *(_WORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v7 = 512;
    *(_WORD *)a2 = 2 * v6;
    result = CmpCopyCompressedName(a3, 0x200u, v5, *(unsigned __int16 *)(a1 + 72));
    *(_QWORD *)(a2 + 8) = a3;
  }
  else
  {
    *(_WORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = v5;
    v7 = *(_WORD *)(a1 + 52);
  }
  *(_WORD *)(a2 + 2) = v7;
  return result;
}
