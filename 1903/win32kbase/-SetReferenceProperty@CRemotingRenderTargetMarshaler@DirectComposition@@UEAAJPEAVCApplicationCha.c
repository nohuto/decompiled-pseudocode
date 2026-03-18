/*
 * XREFs of ?SetReferenceProperty@CRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01AA510
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetReferenceProperty(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 2
      && (!a4
       || (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) == 189) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
      if ( a4 != v9 )
      {
        if ( v9 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        *((_QWORD *)this + 7) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= 0x40u;
        *a5 = 1;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4
    || (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) != 48 )
  {
    return (unsigned int)-1073741811;
  }
  if ( *((_QWORD *)this + 6) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    *((_QWORD *)this + 6) = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    if ( *((_QWORD *)this + 5) )
      *((_DWORD *)this + 4) |= 0x20u;
  }
  return v5;
}
