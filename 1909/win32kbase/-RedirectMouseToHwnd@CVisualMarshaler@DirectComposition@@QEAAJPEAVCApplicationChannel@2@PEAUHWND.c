/*
 * XREFs of ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00013EC
 * Callers:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0001320 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00015D0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0013D90 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00799B4 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0079BF8 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00887A0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        __int16 a5,
        __int16 a6)
{
  DirectComposition::CInteractionMarshaler *v6; // rdi
  HWND v7; // rax
  int WindowForInputType; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  bool v19[8]; // [rsp+38h] [rbp-D0h] BYREF
  HWND v20; // [rsp+40h] [rbp-C8h] BYREF
  void *v21; // [rsp+48h] [rbp-C0h] BYREF
  DirectComposition::CInteractionMarshaler *v22; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v23[19]; // [rsp+58h] [rbp-B0h] BYREF

  v6 = (DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 25);
  v7 = 0LL;
  WindowForInputType = 0;
  v20 = 0LL;
  v22 = v6;
  if ( !v6 )
    goto LABEL_5;
  v13 = *((_QWORD *)v6 + 31);
  if ( v13 )
  {
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v13, 1LL, &v20);
    v7 = v20;
  }
  if ( WindowForInputType >= 0 )
  {
LABEL_5:
    if ( a3 == v7 )
    {
LABEL_6:
      if ( WindowForInputType >= 0 && v6 )
      {
        v14 = *((_DWORD *)v6 + 31);
        if ( (a5 & 0x803F) != 0 )
        {
          if ( (a6 & 0x803F) != 0 )
            v14 |= 0x803Fu;
          else
            v14 &= 0xFFFF7FC0;
        }
        if ( (a5 & 0x100) != 0 )
        {
          if ( (a6 & 0x100) != 0 )
            v14 |= 0x100u;
          else
            v14 &= ~0x100u;
        }
        if ( v14 != *((_DWORD *)v6 + 31) )
        {
          *((_DWORD *)v6 + 13) |= 1u;
          *((_DWORD *)v6 + 31) = v14;
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v6);
        }
      }
      return (unsigned int)WindowForInputType;
    }
    v21 = 0LL;
    if ( *((_QWORD *)this + 25) )
    {
      v16 = *(_QWORD *)this;
      v19[0] = 0;
      WindowForInputType = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(v16 + 176))(
                             this,
                             a2,
                             23LL);
    }
    if ( WindowForInputType >= 0 )
    {
      WindowForInputType = DirectComposition::CVisualMarshaler::EnsureInteraction(this, a2, 0, L"RedirectMouse", &v22);
      if ( WindowForInputType >= 0 )
      {
        memset(v23, 0, 0x128uLL);
        LODWORD(v23[0]) = 232;
        if ( a4 )
        {
          v17 = *(_OWORD *)a4;
          DWORD2(v23[0]) = 3;
          v18 = *((_OWORD *)a4 + 1);
          *(_OWORD *)((char *)&v23[1] + 8) = v17;
          *((_QWORD *)&v23[3] + 1) = *((_QWORD *)a4 + 4);
          *(_OWORD *)((char *)&v23[2] + 8) = v18;
        }
        else
        {
          DWORD2(v23[0]) = 2;
        }
        LODWORD(v23[4]) = 0;
        DWORD2(v23[7]) = 0;
        LODWORD(v23[11]) = 0;
        *(_QWORD *)&v23[1] = a3;
        WindowForInputType = CompositionInputObject::KernelCreateCompositionInputSink(
                               (const struct COMPOSITION_INPUT_SINK_V2 *)v23,
                               &v21);
        if ( WindowForInputType >= 0 )
        {
          v6 = v22;
          WindowForInputType = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v22, v21, v19);
          goto LABEL_6;
        }
      }
    }
  }
  return (unsigned int)WindowForInputType;
}
