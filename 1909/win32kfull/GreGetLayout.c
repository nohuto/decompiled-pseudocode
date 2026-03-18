/*
 * XREFs of GreGetLayout @ 0x1C0069560
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C0100F20 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A40C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetLayout(HDC a1)
{
  unsigned int v1; // ebx
  DC *v2; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v4; // rdi
  DC *v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+28h] [rbp-8h]
  unsigned int v8; // [rsp+2Ch] [rbp-4h]
  int v9; // [rsp+48h] [rbp+18h] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v1 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    v1 = *(_DWORD *)(*((_QWORD *)v6 + 122) + 108LL);
    if ( v7 && (*((_DWORD *)v6 + 11) & 2) != 0 )
    {
      if ( !v8 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v6);
        v2 = v6;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v6, UserAttr);
          v2 = v6;
        }
      }
      *((_DWORD *)v2 + 11) &= ~2u;
      v7 = 0;
      v2 = v6;
    }
    v9 = 0;
    v4 = *(_QWORD *)v2;
    HmgDecrementExclusiveReferenceCountEx(v2, v8, &v9);
    if ( v9 )
      bDeleteDCInternalEx(v4, 0LL);
  }
  return v1;
}
