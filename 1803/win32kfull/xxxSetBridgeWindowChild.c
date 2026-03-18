/*
 * XREFs of xxxSetBridgeWindowChild @ 0x1C01BF73C
 * Callers:
 *     NtUserSetBridgeWindowChild @ 0x1C01F4880 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetBridgeWindowChild(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  char v6; // bl

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  SetOrClrWF(1, (__int64)a1, 56192, 1);
  v6 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  SetOrClrWF(0, (__int64)a2, 3968, 1);
  SetOrClrWF(1, (__int64)a2, 3904, 1);
  VerifyChildMenu(a2, (v6 & 0xC0) == 64);
  xxxSetWindowStyle(a2, -20, *(_DWORD *)(*((_QWORD *)a2 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a2, a1, 0LL, 1);
  if ( *((struct tagWND **)a2 + 10) == a1 && *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) == *(_QWORD *)(v2 + 424) )
    return 1;
  else
    SetOrClrWF(0, (__int64)a1, 56192, 1);
  return v5;
}
