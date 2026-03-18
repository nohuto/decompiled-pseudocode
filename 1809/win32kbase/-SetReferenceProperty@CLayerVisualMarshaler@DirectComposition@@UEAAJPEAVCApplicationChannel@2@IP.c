/*
 * XREFs of ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0002990
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C8D0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetReferenceProperty(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // esi
  __int64 v9; // rbp
  int v10; // r14d
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 50 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 120LL))(a4) )
    {
      v5 = -1073741811;
    }
    v9 = 352LL;
    v10 = 1;
  }
  else
  {
    if ( a3 != 51 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            34LL) )
    {
      v5 = -1073741811;
    }
    v9 = 360LL;
    v10 = 2;
  }
  if ( v5 >= 0 )
  {
    v11 = *(struct DirectComposition::CResourceMarshaler **)((char *)this + v9);
    if ( v11 != a4 )
    {
      if ( v11 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
        *(_QWORD *)((char *)this + v9) = 0LL;
      }
      if ( a4 )
      {
        *(_QWORD *)((char *)this + v9) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 93) |= v10;
      *a5 = 1;
    }
  }
  return (unsigned int)v5;
}
