/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180095FC8
 * Callers:
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180095F04 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180095F8C (-Detach@CWindowNode@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180068320 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180095C10 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::WindowManagerAddRemove(CWindowNode *this, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  CWindowManager *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = 0;
  if ( *((_QWORD *)this + 80) )
  {
    v3 = a2 == 0;
    v5 = *(CWindowManager **)(*((_QWORD *)this + 2) + 80LL);
    if ( v3 )
    {
      CWindowManager::RemoveWindowNode(v5, this);
    }
    else
    {
      v6 = CWindowManager::AddWindowNode(v5, this);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3A3u);
    }
  }
  return v2;
}
