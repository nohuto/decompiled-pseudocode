/*
 * XREFs of VerifyChildMenu @ 0x1C0164690
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F837C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F84E4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012E2BC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
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
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  else if ( v4 == 64 )
  {
    SetOrClrWF(0, (__int64)a1, 1u, 0);
    return UnlockWndMenuWorker(a1, 0);
  }
  return result;
}
