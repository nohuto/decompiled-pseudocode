/*
 * XREFs of ?SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0177C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000E130 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 11 )
  {
    if ( a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           53LL) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
      if ( a4 != v9 )
      {
        if ( v9 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        *((_QWORD *)this + 16) = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) &= ~0x400u;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
