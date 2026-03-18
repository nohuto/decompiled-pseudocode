/*
 * XREFs of ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800A3808 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800A3964 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x1800A3A1C (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800A3BAC (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800A4DB0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddHwndRenderTarget(CDesktopRenderTarget *this, CDisplay **a2)
{
  CDisplay *v3; // rsi
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v6; // ebx
  __int64 v7; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CRenderTarget *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (struct CRenderTarget *)a2;
  v3 = a2[21];
  (*((void (__fastcall **)(CDisplay **))*a2 + 1))(a2);
  if ( *((_QWORD *)this + 15) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 336LL))(v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v13 = 815;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v13, 0LL);
      goto LABEL_9;
    }
  }
  if ( (unsigned int)DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v14) )
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( CDisplay::IsPrimary(v3) )
  {
    v4 = DynArray<CHwndRenderTarget *,0>::InsertAt((char *)this + 176, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v13 = 827;
      goto LABEL_12;
    }
  }
  else
  {
    v9 = *((_DWORD *)this + 50);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
    {
      if ( v10 <= *((_DWORD *)this + 49) )
      {
        *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * *((unsigned int *)this + 50)) = v14;
        *((_DWORD *)this + 50) = v10;
        goto LABEL_7;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8, 1, &v14);
      v6 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC3u, 0LL);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x33Fu, 0LL);
      goto LABEL_9;
    }
  }
LABEL_7:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 8LL))(v14);
  v4 = CMonitorTreeAssociation::AddMonitorTree(
         *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
         *(HMONITOR *)(*((_QWORD *)v3 + 19) + 16LL),
         *((struct CVisualTree **)this + 15));
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 836;
    goto LABEL_12;
  }
  v4 = CComposition::AddRenderTarget(*((CComposition **)this + 2), v14);
  v6 = v4;
  if ( v4 < 0 )
  {
    v13 = 841;
    goto LABEL_12;
  }
LABEL_9:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v6;
}
