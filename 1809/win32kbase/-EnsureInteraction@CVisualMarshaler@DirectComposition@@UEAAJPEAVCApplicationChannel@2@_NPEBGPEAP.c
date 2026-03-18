/*
 * XREFs of ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0082390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxxqtz @ 0x1C016BD90 (McTemplateK0qqqxxqtz.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned __int8 a3,
        const unsigned __int16 *a4,
        struct DirectComposition::CInteractionMarshaler **a5)
{
  int v8; // esi
  int v9; // eax
  struct DirectComposition::CResourceMarshaler *v10; // r14
  int v11; // edx
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+60h] [rbp-38h] BYREF
  char v14; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0;
  v14 = 0;
  if ( !*((_QWORD *)this + 25) )
  {
    v13 = 0LL;
    v9 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x53u, &v13);
    v10 = v13;
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_11;
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)this + 176LL))(
           this,
           a2,
           23LL,
           v13,
           &v14);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    if ( v8 < 0 )
      goto LABEL_11;
    if ( a3 )
      v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 248LL))(v10);
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
      if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
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
