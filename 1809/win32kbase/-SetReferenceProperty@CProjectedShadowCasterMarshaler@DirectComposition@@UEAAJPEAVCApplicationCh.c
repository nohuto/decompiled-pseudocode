/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0172D10
 * Callers:
 *     ?SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0182F00 (-SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCA.c)
 *     ?SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01830D0 (-SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // r8d
  int v10; // r8d
  int v12; // esi
  __int64 v13; // rax
  struct DirectComposition::CResourceMarshaler **v14; // r14

  v5 = 0;
  *a5 = 0;
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( v10 )
    {
      if ( v10 != 3 )
        return 3221225485LL;
      v12 = 0x2000;
      v13 = 96LL;
    }
    else
    {
      v12 = 1024;
      v13 = 80LL;
    }
  }
  else
  {
    v12 = 256;
    v13 = 64LL;
  }
  v14 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v13);
  if ( (DirectComposition::CProjectedShadowCasterMarshaler *)((char *)this + v13)
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 120LL))(a4)) )
  {
    if ( *v14 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v14);
      *v14 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= v12;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
