/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18004CF00
 * Callers:
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18004CE3C (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18004CEC4 (-Detach@CWindowNode@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18004B31C (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18004D160 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    v5 = *(CWindowManager **)(*((_QWORD *)this + 2) + 1328LL);
    if ( v3 )
    {
      CWindowManager::RemoveWindowNode(v5, this);
    }
    else
    {
      v6 = CWindowManager::AddWindowNode(v5, this);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x392u, 0LL);
    }
  }
  return v2;
}
