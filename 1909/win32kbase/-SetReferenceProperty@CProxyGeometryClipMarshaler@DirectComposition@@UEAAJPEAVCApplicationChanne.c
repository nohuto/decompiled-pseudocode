/*
 * XREFs of ?SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01BEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0093030 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetReferenceProperty(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ebp
  struct DirectComposition::CResourceMarshaler **v13; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
    v10 = 187LL;
    v11 = 88LL;
    v12 = 4096;
  }
  else
  {
    v10 = 62LL;
    v12 = 2048;
    v11 = 80LL;
  }
  v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  if ( !(DirectComposition::CProxyGeometryClipMarshaler *)((char *)this + v11)
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          v10) )
  {
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  if ( *v13 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v13);
    *v13 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v12;
    *a5 = 1;
  }
  return v5;
}
