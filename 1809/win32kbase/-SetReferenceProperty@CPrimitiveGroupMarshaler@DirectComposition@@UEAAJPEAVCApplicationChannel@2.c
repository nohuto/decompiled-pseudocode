/*
 * XREFs of ?SetReferenceProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0075AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 2
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          136LL)) )
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
    if ( a4 != v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 7) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) &= ~0x20u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
