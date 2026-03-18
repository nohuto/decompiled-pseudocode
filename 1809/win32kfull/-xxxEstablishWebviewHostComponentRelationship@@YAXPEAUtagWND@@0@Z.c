/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008B78 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     VerifyChildMenu @ 0x1C015E6C4 (VerifyChildMenu.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *a1, struct tagWND *a2)
{
  char v4; // bl

  v4 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  SetOrClrWF(0, (__int64)a1, 0xF80u, 1);
  SetOrClrWF(1, (__int64)a1, 0xF40u, 1);
  VerifyChildMenu(a1, (v4 & 0xC0) == 64);
  xxxSetWindowStyle(a1, -20, *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a1, a2, 0LL, 1);
}
