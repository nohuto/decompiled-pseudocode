/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390
 * Callers:
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028368 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x1801FC470 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180240184 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x180242EE0 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x180028468 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v3; // si
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  __int64 v10; // rcx
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-18h]
  struct CRenderTarget *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v3 = 0;
  v4 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 80LL) == 0;
  v5 = *(_QWORD *)v20;
  if ( !v4 )
  {
    if ( (*(unsigned __int8 (**)(void))(v5 + 256))() )
      v6 = 0LL;
    else
      v6 = *((unsigned int *)this + 24);
    v7 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v20, v6);
    v9 = v7;
    if ( v7 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v20 + 248LL))(v20) )
      {
        v12 = *((_DWORD *)this + 25);
        if ( !v12 )
        {
          DwmGenerateMoveData(1LL);
          v12 = *((_DWORD *)this + 25);
        }
        *((_DWORD *)this + 25) = v12 + 1;
      }
      ++*((_DWORD *)this + 24);
      v3 = 1;
      goto LABEL_7;
    }
    v19 = 501;
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(v5 + 48))(v20, 73LL) )
  {
    v7 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v20, 0LL);
    v9 = v7;
    if ( v7 < 0 )
    {
      v19 = 518;
LABEL_17:
      v13 = v7;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v13, v19, 0LL);
      return (unsigned int)v9;
    }
    ++*((_DWORD *)this + 27);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v20 + 48LL))(v20, 84LL) )
      ++*((_DWORD *)this + 26);
    v16 = *((_DWORD *)this + 12);
    v17 = v16 + 1;
    if ( v16 + 1 >= v16 )
    {
      if ( v17 <= *((_DWORD *)this + 11) )
      {
        v9 = 0;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned int *)this + 12)) = v20;
        *((_DWORD *)this + 12) = v17;
        goto LABEL_7;
      }
      v18 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v15, &v20);
      v9 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v18, 0xC3u, 0LL);
    }
    else
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    if ( v9 < 0 )
    {
      v13 = v9;
      v19 = 529;
      goto LABEL_31;
    }
  }
LABEL_7:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v20 + 8LL))(v20);
  if ( v3 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 376LL);
    if ( v10 )
      *(_BYTE *)(v10 + 20) = 1;
  }
  return (unsigned int)v9;
}
