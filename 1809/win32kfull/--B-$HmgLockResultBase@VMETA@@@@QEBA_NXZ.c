/*
 * XREFs of ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01105A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     UnlockDesktopMenu @ 0x1C0136274 (UnlockDesktopMenu.c)
 *     GreDeleteServerMetaFile @ 0x1C0157628 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C029C1D0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall HmgLockResultBase<META>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
