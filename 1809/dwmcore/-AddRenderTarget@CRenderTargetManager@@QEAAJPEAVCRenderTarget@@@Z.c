/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E880
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x18001FB50 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E858 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x18020B124 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18020C3F0 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18007E9D0 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v3; // si
  CHwndRenderTarget *v4; // rsi
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CHwndRenderTarget *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 76LL) )
  {
    v4 = v19;
    if ( CHwndRenderTarget::IsPrimaryMonitor(v19) )
      v5 = 0LL;
    else
      v5 = *((unsigned int *)this + 24);
    v6 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v19, v5);
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v4 + 224LL))(v4) )
      {
        v15 = *((_DWORD *)this + 25);
        if ( !v15 )
        {
          DwmGenerateMoveData(1LL);
          v15 = *((_DWORD *)this + 25);
        }
        *((_DWORD *)this + 25) = v15 + 1;
      }
      ++*((_DWORD *)this + 24);
      v3 = 1;
      goto LABEL_7;
    }
    v18 = 502;
    goto LABEL_25;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v19 + 48LL))(v19, 69LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v19 + 48LL))(v19, 80LL) )
      ++*((_DWORD *)this + 26);
    v13 = *((_DWORD *)this + 12);
    v14 = v13 + 1;
    v8 = v13 + 1 < v13 ? 0x80070216 : 0;
    if ( v13 + 1 < v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)this + 11) )
    {
      v16 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v12, &v19);
      v8 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      v7 = *((_DWORD *)this + 12);
      *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v13) = v19;
      *((_DWORD *)this + 12) = v14;
    }
    if ( v8 >= 0 )
      goto LABEL_7;
    v18 = 530;
    v17 = v8;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v17, v18);
    return (unsigned int)v8;
  }
  v6 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v19, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v18 = 519;
LABEL_25:
    v17 = v6;
    goto LABEL_32;
  }
  ++*((_DWORD *)this + 27);
LABEL_7:
  (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v3 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
    if ( v9 )
      *(_BYTE *)(v9 + 20) = 1;
  }
  return (unsigned int)v8;
}
