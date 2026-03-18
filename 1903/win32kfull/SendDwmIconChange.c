/*
 * XREFs of SendDwmIconChange @ 0x1C00483E8
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxGetWindowSmIcon @ 0x1C00471A0 (xxxGetWindowSmIcon.c)
 *     DwmAsyncIconChange @ 0x1C0048488 (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( (unsigned int)HasCaptionIcon(a1)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(a1, 1) )
  {
    xxxGetWindowSmIcon(a1, 1);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  v5 = (void *)ReferenceDwmApiPort(v3, v2, v4);
  return DwmAsyncIconChange(v5);
}
