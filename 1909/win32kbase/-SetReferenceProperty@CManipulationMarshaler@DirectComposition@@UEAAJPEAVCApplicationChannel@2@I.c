/*
 * XREFs of ?SetReferenceProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01A6A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetReferenceProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  int v11; // ecx

  v5 = 0;
  if ( (a3 == 8 || a3 == 14)
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          87LL)) )
  {
    v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 38);
    if ( v10 != a4 )
    {
      if ( v10 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
        *((_QWORD *)this + 38) = 0LL;
      }
      if ( a4 )
      {
        *((_QWORD *)this + 38) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      v11 = 256;
      if ( a3 != 8 )
        v11 = 512;
      *((_DWORD *)this + 4) |= v11;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
