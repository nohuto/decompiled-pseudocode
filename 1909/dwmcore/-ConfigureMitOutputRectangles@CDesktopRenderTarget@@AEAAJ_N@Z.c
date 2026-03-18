/*
 * XREFs of ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180099574
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18002A91C (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18002A944 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18002A970 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?AddMultipleAndSet@?$DynArray@UINPUT_SPACE_REGION@@$0A@@@QEAAJPEFBUINPUT_SPACE_REGION@@I@Z @ 0x1801A5FFC (-AddMultipleAndSet@-$DynArray@UINPUT_SPACE_REGION@@$0A@@@QEAAJPEFBUINPUT_SPACE_REGION@@I@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ConfigureMitOutputRectangles(CDesktopRenderTarget *this, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  char v5; // si
  unsigned int v7; // r14d
  __int128 v8; // xmm6
  __int64 v9; // rcx
  __int128 *DisplayRect; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm0_4
  int Rotation; // eax
  __int64 v15; // rcx
  __int128 *ClipBox; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int128 v22; // xmm0
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // r8
  unsigned int v26; // [rsp+28h] [rbp-99h]
  float lpMem; // [rsp+38h] [rbp-89h]
  void *lpMem_8[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v29; // [rsp+50h] [rbp-71h]
  unsigned int v30; // [rsp+58h] [rbp-69h]
  __int128 v31; // [rsp+60h] [rbp-61h] BYREF
  __int128 v32; // [rsp+78h] [rbp-49h] BYREF
  int v33; // [rsp+88h] [rbp-39h]
  __int16 v34; // [rsp+8Ch] [rbp-35h]
  __int16 v35; // [rsp+8Eh] [rbp-33h]
  __int64 v36; // [rsp+90h] [rbp-31h]
  int v37; // [rsp+98h] [rbp-29h]
  __int64 v38; // [rsp+9Ch] [rbp-25h]
  int v39; // [rsp+A4h] [rbp-1Dh]
  int v40; // [rsp+A8h] [rbp-19h]
  __int128 v41; // [rsp+ACh] [rbp-15h]
  __int128 v42; // [rsp+BCh] [rbp-5h]
  void *retaddr; // [rsp+120h] [rbp+5Fh]

  *(_QWORD *)((char *)&v31 + 4) = 0LL;
  v3 = 0;
  LODWORD(v31) = *((_DWORD *)this + 100);
  v4 = 0LL;
  v5 = 0;
  *(_OWORD *)lpMem_8 = 0LL;
  v29 = 0LL;
  v30 = 0;
  if ( !CCommonRegistryData::m_fConfigureInput || *(_BYTE *)(*((_QWORD *)this + 2) + 1278LL) )
    return v3;
  if ( !a2 && !*((_BYTE *)this + 321) )
    goto LABEL_24;
  v5 = 1;
  v7 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    v8 = v31;
    while ( 1 )
    {
      memset_0(&v32, 0, 0x54uLL);
      v9 = *((_QWORD *)this + 22);
      v33 = 2;
      DisplayRect = (__int128 *)CHwndRenderTarget::GetDisplayRect(*(CHwndRenderTarget **)(v9 + 8LL * v7));
      v11 = *((_QWORD *)this + 22);
      v32 = *DisplayRect;
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8LL * v7) + 168LL);
      v37 = *(_DWORD *)(v12 + 240);
      v36 = *(_QWORD *)(v12 + 232);
      v39 = *(_DWORD *)(v12 + 64);
      v38 = *(_QWORD *)(v12 + 232);
      v13 = *(float *)(*(_QWORD *)(v11 + 8LL * v7) + 508LL);
      v35 = 0;
      lpMem = (float)(v13 * 96.0) + 6291456.25;
      v34 = (int)(LODWORD(lpMem) << 10) >> 11;
      Rotation = CHwndRenderTarget::GetRotation(*(CHwndRenderTarget **)(v11 + 8LL * v7));
      v15 = *((_QWORD *)this + 22);
      v40 = Rotation;
      ClipBox = (__int128 *)CHwndRenderTarget::GetClipBox(*(CHwndRenderTarget **)(v15 + 8LL * v7));
      v17 = *((_QWORD *)this + 22);
      v42 = *ClipBox;
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8LL * v7) + 168LL);
      if ( v18 )
        v8 = *(_OWORD *)(v18 + 88);
      v3 = v18 == 0 ? 0x88982F04 : 0;
      if ( !v18 )
        break;
      v41 = v8;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 8LL * v7) + 256LL))(*(_QWORD *)(v17 + 8LL * v7)) )
        v33 |= 1u;
      v19 = DynArray<INPUT_SPACE_REGION,0>::AddMultipleAndSet(lpMem_8, &v32);
      v3 = v19;
      if ( v19 < 0 )
      {
        v26 = 938;
        goto LABEL_29;
      }
      if ( ++v7 >= *((_DWORD *)this + 50) )
      {
        v4 = v30;
        goto LABEL_16;
      }
    }
    v24 = v18 == 0 ? 0x88982F04 : 0;
    v26 = 930;
    goto LABEL_31;
  }
LABEL_16:
  v20 = *((_DWORD *)this + 104);
  if ( v20 > *((_DWORD *)this + 106)
    || (v21 = *((_DWORD *)this + 107), *((_DWORD *)this + 105) > v21)
    || !v20 && !*((_DWORD *)this + 106) && !*((_DWORD *)this + 105) && !v21 )
  {
LABEL_24:
    *((_BYTE *)this + 321) = 0;
    if ( (_DWORD)v4 )
    {
      if ( !(unsigned int)ConfigureInputSpace(&v31, lpMem_8[0], v4) )
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v23);
    }
    else if ( v5 && !(unsigned int)ConfigureInputSpace(&v31, 0LL, 0LL) )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v25);
    }
    goto LABEL_32;
  }
  memset_0((char *)&v32 + 4, 0, 0x50uLL);
  v22 = *((_OWORD *)this + 26);
  v33 = 4;
  v32 = v22;
  v19 = DynArray<INPUT_SPACE_REGION,0>::AddMultipleAndSet(lpMem_8, &v32);
  v3 = v19;
  if ( v19 >= 0 )
  {
    v4 = v30;
    goto LABEL_24;
  }
  v26 = 955;
LABEL_29:
  v24 = v19;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v24, v26, 0LL);
LABEL_32:
  if ( lpMem_8[0] != lpMem_8[1] )
    operator delete(lpMem_8[0]);
  return v3;
}
