/*
 * XREFs of ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801C3F80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessProtectContent(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_PROTECTCONTENT *a3)
{
  char v3; // r10
  unsigned int v5; // ecx
  __int64 v6; // rdx
  char v7; // r10
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  v3 = *((_BYTE *)a3 + 8);
  v5 = *((unsigned __int8 *)this + 95);
  if ( ((v5 >> 3) & 1) != (v3 != 0) )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = -v3;
    *((_BYTE *)this + 95) = v5 & 0xF7 | (v7 != 0 ? 8 : 0);
    v8 = *(_DWORD *)(v6 + 280);
    v9 = v8 - 1;
    v10 = v8 + 1;
    if ( (v7 != 0 ? 8 : 0) == 0 )
      v10 = v9;
    *(_DWORD *)(v6 + 280) = v10;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
