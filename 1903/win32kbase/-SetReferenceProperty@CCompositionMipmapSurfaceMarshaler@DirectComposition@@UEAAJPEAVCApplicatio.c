/*
 * XREFs of ?SetReferenceProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B07C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler **v11; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 != 3 )
    return 3221225485LL;
  v10 = *((unsigned int *)this + 12);
  if ( (unsigned int)v10 < *((_DWORD *)this + 15)
    && (v11 = (struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 5) + 24 * v10)) != 0LL
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          39LL)) )
  {
    if ( *v11 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v11);
      *v11 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x40u;
      *a5 = 1;
      *((_DWORD *)this + 18) |= 1 << *((_BYTE *)this + 48);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
