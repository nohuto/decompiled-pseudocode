/*
 * XREFs of ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0003C94
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0096D80 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0096EE0 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // r14
  int v11; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rbx
  unsigned int v13; // esi
  int v14; // eax
  bool *v15; // rax
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *((_QWORD *)this + 15);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 105LL)
    || (v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15),
        DirectComposition::CResourceMarshaler::AddRef(v12),
        --*((_DWORD *)v12 + 5),
        *((_DWORD *)v12 + 5) != 1) )
  {
    v7 = 1;
    v11 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x69u, &v17);
    v12 = v17;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_7;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v13 = v14;
  if ( v7 )
  {
    if ( v14 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 15));
      v15 = a5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 15) = v12;
      *v15 = 1;
      return v13;
    }
LABEL_7:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  }
  return v13;
}
