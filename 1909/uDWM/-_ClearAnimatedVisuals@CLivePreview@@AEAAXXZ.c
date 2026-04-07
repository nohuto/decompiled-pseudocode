/*
 * XREFs of ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18007B41C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x18007AAD0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003B488 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CLivePreview::_ClearAnimatedVisuals(CLivePreview *this)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CTopLevelWindow *v8; // rcx

  v2 = *((_DWORD *)this + 82) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *((_QWORD *)this + 38);
      v6 = *(CBaseObject **)(v4 + v5 + 8);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(*((_QWORD *)this + 38) + v4 + 8) = 0LL;
        v5 = *((_QWORD *)this + 38);
      }
      v7 = *(CBaseObject **)(v4 + v5 + 16);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(*((_QWORD *)this + 38) + v4 + 16) = 0LL;
        v5 = *((_QWORD *)this + 38);
      }
      v8 = *(CTopLevelWindow **)(*(_QWORD *)(v4 + v5) + 400LL);
      if ( v8 )
        CTopLevelWindow::StopLivePreviewAnimation(v8);
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 304, 0x28u);
}
