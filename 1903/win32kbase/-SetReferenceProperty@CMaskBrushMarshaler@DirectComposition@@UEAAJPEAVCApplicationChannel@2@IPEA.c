/*
 * XREFs of ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0080B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z @ 0x1C0080C10 (-CheckForCycle@CBrushMarshaler@DirectComposition@@QEAA_NPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CMaskBrushMarshaler::SetReferenceProperty(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // ebp
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler **v11; // rsi

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    v9 = 64;
    v10 = 64LL;
  }
  else
  {
    v9 = 32;
    v10 = 56LL;
  }
  v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v10);
  if ( !(DirectComposition::CMaskBrushMarshaler *)((char *)this + v10)
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          14LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v11 == a4 )
    return v5;
  if ( DirectComposition::CBrushMarshaler::CheckForCycle(this, a4) )
    return (unsigned int)-1073741811;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, *v11);
  *v11 = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) |= v9;
  *a5 = 1;
  return v5;
}
