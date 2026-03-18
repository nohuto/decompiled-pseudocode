/*
 * XREFs of ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0094770
 * Callers:
 *     ?SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B3D40 (-SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01C0AB0 (-SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CGeometryMarshaler::SetReferenceProperty(
        DirectComposition::CGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v5; // rsi
  unsigned int v6; // ebx
  int v10; // r14d

  v5 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
  v6 = 0;
  *a5 = 0;
  v10 = a3 == 0 ? 0x80 : 0;
  if ( a3 )
    v5 = 0LL;
  if ( v5
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(*(_QWORD *)a4 + 120LL))(
          a4,
          a3 == 0 ? 0x1A : 0,
          (unsigned int)-a3)) )
  {
    if ( *v5 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v5);
      *v5 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= v10;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
