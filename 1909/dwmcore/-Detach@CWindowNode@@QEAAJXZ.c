/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x18004CEC4
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18004B9E0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z @ 0x18004C5C8 (-ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BDC70 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18004CF00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xD27u, 0LL);
  else
    *((_QWORD *)this + 80) = 0LL;
  return v4;
}
