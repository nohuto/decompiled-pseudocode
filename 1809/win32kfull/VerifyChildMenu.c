/*
 * XREFs of VerifyChildMenu @ 0x1C015E6C4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012456C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall VerifyChildMenu(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  char v4; // cl

  result = *((_QWORD *)a1 + 5);
  v4 = *(_BYTE *)(result + 31) & 0xC0;
  if ( a2 )
  {
    if ( v4 != 64 )
    {
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 18) = 0LL;
    }
  }
  else if ( v4 == 64 )
  {
    SetOrClrWF(0, (__int64)a1, 1u, 0);
    return UnlockWndMenuWorker(a1, 0);
  }
  return result;
}
