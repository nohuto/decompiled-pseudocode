/*
 * XREFs of PiProcessReenumeration @ 0x140721EC4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140721F78 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(v3[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 787) <= 1 )
  {
    ObfDereferenceObject(v3);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(*(_QWORD *)(v3[39] + 40LL), 0x80000000);
      v5 = 1;
    }
    else
    {
      v5 = 2;
    }
    LOBYTE(a2) = v5 != 1;
    PiMarkDeviceTreeForReenumeration(v4, a2);
    BYTE4(v7) = PnPBootDriversInitialized;
    LODWORD(v7) = 3;
    PipProcessDevNodeTree(v4, a1, (__int64)&v7, v5, 0, 0, 0);
    return 0LL;
  }
}
