/*
 * XREFs of SendDwmIconChange @ 0x1C008CDB8
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0056AEC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023A730 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C023FDC0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxGetWindowSmIcon @ 0x1C008BB70 (xxxGetWindowSmIcon.c)
 *     DwmAsyncIconChange @ 0x1C008CE58 (DwmAsyncIconChange.c)
 */

__int64 __fastcall SendDwmIconChange(__int64 *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2)
    && (*(_BYTE *)(BugCheckParameter2[5] + 30) & 8) != 0
    && xxxGetWindowSmIcon(BugCheckParameter2, 1) )
  {
    xxxGetWindowSmIcon(BugCheckParameter2, 1);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  v5 = (void *)ReferenceDwmApiPort(v3, v2, v4);
  return DwmAsyncIconChange(v5);
}
