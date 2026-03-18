/*
 * XREFs of ?SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01BA680
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01BA8FC (-SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 9 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           153LL) )
    {
      v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
      if ( a4 == v10 )
        return v5;
      if ( v10 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
      *((_QWORD *)this + 13) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x4000u;
      goto LABEL_21;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 12 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
           a4,
           153LL) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
      if ( a4 == v9 )
        return v5;
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 17) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x20000u;
LABEL_21:
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
