/*
 * XREFs of ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x1800C8BB8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D9074 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800D90A0 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D90C8 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@UINPUT_SPACE_REGION@@$0A@@@QEAAJPEFBUINPUT_SPACE_REGION@@I@Z @ 0x180159784 (-AddMultipleAndSet@-$DynArray@UINPUT_SPACE_REGION@@$0A@@@QEAAJPEFBUINPUT_SPACE_REGION@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopRenderTarget::ConfigureMitOutputRectangles(CDesktopRenderTarget *this, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  char v4; // si
  __int64 v7; // r14
  __int128 v8; // xmm6
  __int64 v9; // rcx
  __int128 *DisplayRect; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  enum DXGI_MODE_ROTATION Rotation; // eax
  __int64 v14; // rcx
  __int128 *ClipBox; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int128 v21; // xmm0
  int v22; // r9d
  unsigned int v23; // [rsp+28h] [rbp-79h]
  void *v24[2]; // [rsp+38h] [rbp-69h] BYREF
  int v25; // [rsp+48h] [rbp-59h]
  int v26; // [rsp+4Ch] [rbp-55h]
  unsigned int v27; // [rsp+50h] [rbp-51h]
  __int128 v28; // [rsp+58h] [rbp-49h] BYREF
  __int128 v29; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+78h] [rbp-29h]
  __int16 v31; // [rsp+7Eh] [rbp-23h]
  __int64 v32; // [rsp+80h] [rbp-21h]
  int v33; // [rsp+88h] [rbp-19h]
  __int64 v34; // [rsp+8Ch] [rbp-15h]
  int v35; // [rsp+94h] [rbp-Dh]
  enum DXGI_MODE_ROTATION v36; // [rsp+98h] [rbp-9h]
  __int128 v37; // [rsp+9Ch] [rbp-5h]
  __int128 v38; // [rsp+ACh] [rbp+Bh]
  void *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = 0;
  v25 = 0;
  v3 = 0LL;
  v26 = 0;
  v4 = 0;
  *(_QWORD *)((char *)&v28 + 4) = 0LL;
  LODWORD(v28) = *((_DWORD *)this + 88);
  *(_OWORD *)v24 = 0LL;
  v27 = 0;
  if ( !CCommonRegistryData::m_fConfigureInput || *(_BYTE *)(*((_QWORD *)this + 2) + 1261LL) )
    return v2;
  if ( !a2 && !*((_BYTE *)this + 273) )
    goto LABEL_24;
  v7 = 0LL;
  v4 = 1;
  if ( *((_DWORD *)this + 50) )
  {
    v8 = v28;
    while ( 1 )
    {
      memset_0(&v29, 0, 0x54uLL);
      v9 = *((_QWORD *)this + 22);
      v30 = 2;
      DisplayRect = (__int128 *)CHwndRenderTarget::GetDisplayRect(*(_QWORD *)(v9 + 8 * v7));
      v11 = *((_QWORD *)this + 22);
      v29 = *DisplayRect;
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v7) + 168LL);
      v33 = *(_DWORD *)(v12 + 248);
      v32 = *(_QWORD *)(v12 + 240);
      v35 = *(_DWORD *)(v12 + 64);
      v34 = *(_QWORD *)(v12 + 240);
      v31 = 192;
      Rotation = CHwndRenderTarget::GetRotation(*(CHwndRenderTarget **)(v11 + 8 * v7));
      v14 = *((_QWORD *)this + 22);
      v36 = Rotation;
      ClipBox = (__int128 *)CHwndRenderTarget::GetClipBox(*(_QWORD *)(v14 + 8 * v7));
      v16 = *((_QWORD *)this + 22);
      v38 = *ClipBox;
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * v7) + 168LL);
      if ( v17 )
        v8 = *(_OWORD *)(v17 + 88);
      v2 = v17 == 0 ? 0x88982F04 : 0;
      if ( !v17 )
        break;
      v37 = v8;
      if ( CHwndRenderTarget::IsPrimaryMonitor(*(CDisplay ***)(v16 + 8 * v7)) )
        v30 |= 1u;
      v18 = DynArray<INPUT_SPACE_REGION,0>::AddMultipleAndSet(v24, &v29);
      v2 = v18;
      if ( v18 < 0 )
      {
        v23 = 924;
        goto LABEL_29;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 50) )
      {
        v3 = v27;
        goto LABEL_16;
      }
    }
    v23 = 917;
    v22 = -2003292412;
    goto LABEL_31;
  }
LABEL_16:
  v19 = *((_DWORD *)this + 92);
  if ( v19 > *((_DWORD *)this + 94)
    || (v20 = *((_DWORD *)this + 95), *((_DWORD *)this + 93) > v20)
    || !v19 && !*((_DWORD *)this + 94) && !*((_DWORD *)this + 93) && !v20 )
  {
LABEL_24:
    *((_BYTE *)this + 273) = 0;
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)ConfigureInputSpace(&v28, v24[0], v3) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    else if ( v4 && !(unsigned int)ConfigureInputSpace(&v28, 0LL, 0LL) )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    goto LABEL_32;
  }
  memset_0((char *)&v29 + 4, 0, 0x50uLL);
  v21 = *((_OWORD *)this + 23);
  v30 = 4;
  v29 = v21;
  v18 = DynArray<INPUT_SPACE_REGION,0>::AddMultipleAndSet(v24, &v29);
  v2 = v18;
  if ( v18 >= 0 )
  {
    v3 = v27;
    goto LABEL_24;
  }
  v23 = 941;
LABEL_29:
  v22 = v18;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v22, v23);
LABEL_32:
  if ( v24[0] != v24[1] )
    WPF::ProcessHeapImpl::Free(v24[0]);
  return v2;
}
