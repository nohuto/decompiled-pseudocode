/*
 * XREFs of ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C01BE514
 * Callers:
 *     ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01BE280 (-SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C00986E0 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetTransformMatrixHelper(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // r14
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  bool *v15; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *((_QWORD *)this + 8);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 105LL)
    || (v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8),
        DirectComposition::CResourceMarshaler::AddRef(v11),
        --*((_DWORD *)v11 + 5),
        *((_DWORD *)v11 + 5) != 1) )
  {
    v7 = 1;
    v12 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x69u, &v17);
    v11 = v17;
    v13 = v12;
    if ( v12 < 0 )
      goto LABEL_8;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v11, 16LL, a3, a4);
  v13 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 8));
      v15 = a5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 8) = v11;
      *v15 = 1;
      return v13;
    }
LABEL_8:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
  }
  return v13;
}
