/*
 * XREFs of ?SetReferenceProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C017BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetReferenceProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 4
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            26LL)
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            149LL)) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 8) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x100u;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          157LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 5);
  if ( v10 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) |= 0x20u;
  *a5 = 1;
  return v5;
}
