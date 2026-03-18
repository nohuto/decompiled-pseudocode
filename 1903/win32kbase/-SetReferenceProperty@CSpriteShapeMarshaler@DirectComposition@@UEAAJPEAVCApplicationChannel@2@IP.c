/*
 * XREFs of ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B36E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B0D50 (-SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCRe.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  struct DirectComposition::CResourceMarshaler **v13; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 == 1 )
  {
    v10 = 64;
    v11 = 56LL;
    goto LABEL_7;
  }
  if ( a3 == 2 )
  {
    v10 = 256;
    v11 = 64LL;
LABEL_7:
    v12 = 14LL;
    goto LABEL_8;
  }
  if ( a3 != 3 )
    return (unsigned int)DirectComposition::CShapeMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  v10 = 128;
  v11 = 48LL;
  v12 = 62LL;
LABEL_8:
  v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  if ( !(DirectComposition::CSpriteShapeMarshaler *)((char *)this + v11)
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          v12) )
  {
    return (unsigned int)DirectComposition::CShapeMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  if ( *v13 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v13);
    *v13 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v10;
    *a5 = 1;
  }
  return v5;
}
