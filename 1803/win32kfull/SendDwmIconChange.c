/*
 * XREFs of SendDwmIconChange @ 0x1C00C4848
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00098F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01F9FB0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DwmAsyncIconChange @ 0x1C00C48E4 (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C00C4A6C (xxxGetWindowSmIcon.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( (unsigned int)HasCaptionIcon(BugCheckParameter2)
    && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(BugCheckParameter2) )
  {
    xxxGetWindowSmIcon(BugCheckParameter2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  v5 = (void *)ReferenceDwmApiPort(v3, v2, v4);
  return DwmAsyncIconChange(v5);
}
