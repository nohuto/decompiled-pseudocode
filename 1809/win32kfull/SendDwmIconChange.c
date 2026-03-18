/*
 * XREFs of SendDwmIconChange @ 0x1C00B7154
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0222680 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DwmAsyncIconChange @ 0x1C00B71F4 (DwmAsyncIconChange.c)
 *     xxxGetWindowSmIcon @ 0x1C00B72A4 (xxxGetWindowSmIcon.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  if ( (unsigned int)HasCaptionIcon(BugCheckParameter2)
    && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(BugCheckParameter2) )
  {
    xxxGetWindowSmIcon(BugCheckParameter2);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  v4 = (void *)ReferenceDwmApiPort(v3, v2);
  return DwmAsyncIconChange(v4);
}
