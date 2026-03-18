/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0004920
 * Callers:
 *     ?SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01C50E0 (-SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCA.c)
 *     ?SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01C52C0 (-SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  __int64 v11; // rax
  int v12; // esi
  struct DirectComposition::CResourceMarshaler **v13; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          return 3221225485LL;
        v11 = 56LL;
        v12 = 128;
      }
      else
      {
        v12 = 512;
        v11 = 64LL;
      }
    }
    else
    {
      v12 = 1024;
      v11 = 80LL;
    }
  }
  else
  {
    v12 = 256;
    v11 = 72LL;
  }
  v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  if ( (DirectComposition::CProjectedShadowCasterMarshaler *)((char *)this + v11)
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 120LL))(a4)) )
  {
    if ( *v13 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v13);
      *v13 = a4;
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
