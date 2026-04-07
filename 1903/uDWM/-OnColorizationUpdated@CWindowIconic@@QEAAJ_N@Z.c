/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FD2C
 * Callers:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180005254 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 605LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 605LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 605LL)) & 0x20;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x100000);
  if ( a2 )
  {
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1F5u, v7);
  }
  return v4;
}
