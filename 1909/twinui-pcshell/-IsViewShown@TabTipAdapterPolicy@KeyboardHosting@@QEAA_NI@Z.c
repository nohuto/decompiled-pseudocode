/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x18034B9D8
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180330950 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1803447C0 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x18034AC60 (-HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAP.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18034B330 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B380 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU-$IVectorView@UCoreKey.c)
 *     ?HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B450 (-HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU-$IVectorView@.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEA_N@Z @ 0x18034CE60 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU-$IVectorView@UCoreKeyboar.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *Ptr; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  _DWORD *i; // rdx
  _DWORD *v13; // rax
  char v14; // di
  int v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  v2 = this + 53;
  AcquireSRWLockShared(this + 53);
  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)&v16;
  v7 = 4LL;
  do
  {
    v8 = *v6++;
    v5 = 0x100000001B3LL * (v8 ^ v5);
    --v7;
  }
  while ( v7 );
  Ptr = this[48].Ptr;
  v10 = 2 * (v5 & (__int64)this[51].Ptr);
  v11 = this[46].Ptr;
  for ( i = (_DWORD *)Ptr[2 * (v5 & (__int64)this[51].Ptr)]; ; i = *(_DWORD **)i )
  {
    v13 = (_DWORD *)Ptr[v10] == v11 ? this[46].Ptr : *(_DWORD **)Ptr[v10 + 1];
    if ( i == v13 )
      break;
    if ( i[4] == a2 )
      goto LABEL_11;
  }
  i = this[46].Ptr;
LABEL_11:
  if ( i == v11 )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0;
  }
  else
  {
    v14 = *((_BYTE *)i + 20);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return v14;
  }
}
