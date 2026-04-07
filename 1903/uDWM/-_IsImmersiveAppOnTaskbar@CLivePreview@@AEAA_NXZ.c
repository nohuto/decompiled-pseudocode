/*
 * XREFs of ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x18007C9B0
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003A804 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x18007CFDC (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLivePreview::_IsImmersiveAppOnTaskbar(CLivePreview *this)
{
  __int64 v1; // r8
  char v2; // dl
  int v3; // ecx

  v1 = *((_QWORD *)this + 67);
  v2 = 0;
  if ( v1 )
  {
    if ( ((*((_DWORD *)this + 140) - 3) & 0xFFFFFFFD) == 0 )
    {
      v3 = *(_DWORD *)(v1 + 112);
      if ( ((v3 - 6) & 0xFFFFFFF9) == 0 )
        return v3 != 12;
    }
  }
  return v2;
}
