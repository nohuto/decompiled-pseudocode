/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00799B4
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00013EC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00798CC (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0013D90 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C007A1A4 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxxqtz @ 0x1C01A7064 (McTemplateK0qqqxxqtz.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned __int8 a3,
        const unsigned __int16 *a4,
        struct DirectComposition::CInteractionMarshaler **a5)
{
  int v8; // ebp
  int v9; // eax
  struct DirectComposition::CResourceMarshaler *v10; // rdi
  int v11; // edx
  char v12; // al
  struct DirectComposition::CResourceMarshaler *v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0;
  v15 = 0;
  if ( !*((_QWORD *)this + 25) )
  {
    v14 = 0LL;
    v9 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x57u, &v14);
    v10 = v14;
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_11;
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 176LL))(
           this,
           a2,
           23LL,
           v14,
           &v15);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    if ( v8 < 0 )
      goto LABEL_11;
    if ( a3 )
    {
      v12 = *((_BYTE *)v10 + 316);
      *((_DWORD *)v10 + 4) |= 0x800u;
      *((_BYTE *)v10 + 316) = v12 & 0x9E | 1;
      v8 = DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(v10);
    }
    if ( v8 < 0 )
    {
LABEL_11:
      if ( v10 )
        (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 176LL))(
          this,
          a2,
          23LL);
    }
    else
    {
      if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
        McTemplateK0qqqxxqtz(
          a3,
          v11,
          *((_DWORD *)v10 + 6),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 6),
          *((_DWORD *)v10 + 6),
          *((_DWORD *)this + 6),
          *((_DWORD *)v10 + 6));
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v10);
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
    }
  }
  *a5 = (struct DirectComposition::CInteractionMarshaler *)*((_QWORD *)this + 25);
  return (unsigned int)v8;
}
