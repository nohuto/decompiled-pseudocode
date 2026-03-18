/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01BF488
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007EF4 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *a1, struct tagWND *a2)
{
  char v4; // bl

  v4 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  SetOrClrWF(0, (__int64)a1, 3968, 1);
  SetOrClrWF(1, (__int64)a1, 3904, 1);
  VerifyChildMenu(a1, (v4 & 0xC0) == 64);
  xxxSetWindowStyle(a1, -20, *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a1, a2, 0LL, 1);
}
