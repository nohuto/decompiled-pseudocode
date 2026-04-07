/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FA78
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F9E0 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18002016C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x18004E242 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm0_4
  __int128 v10; // xmm6
  _OWORD *v11; // rcx
  CVisual *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)((char *)a2 + 260) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 67) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 68) == 0x7FFFFFFF )
  {
    v10 = *(_OWORD *)((char *)a2 + 260);
    v13 = v10;
  }
  else
  {
    v3 = *((float *)a2 + 76);
    v4 = (int)ceilf_0((float)*((int *)a2 + 65) * v3);
    v5 = (float)*((int *)a2 + 66);
    LODWORD(v13) = v4;
    v6 = (int)ceilf_0(v5 * v3);
    v7 = (float)*((int *)a2 + 67);
    DWORD1(v13) = v6;
    v8 = (int)ceilf_0(v7 * v3);
    v9 = (float)*((int *)a2 + 68);
    DWORD2(v13) = v8;
    HIDWORD(v13) = (int)ceilf_0(v9 * v3);
    v10 = v13;
  }
  if ( !(unsigned __int8)operator==((char *)a2 + 80, &v13) )
  {
    *v11 = v10;
    v12 = (CVisual *)*((_QWORD *)a2 + 49);
    if ( v12 )
      CVisual::SetDirtyFlags(v12, 0x4000u);
  }
}
