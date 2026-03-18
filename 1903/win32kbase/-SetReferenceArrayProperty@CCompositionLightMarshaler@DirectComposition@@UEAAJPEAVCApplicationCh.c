/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C007BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0004D84 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // edi
  unsigned int v10; // r14d
  struct DirectComposition::CResourceMarshaler *v11; // rcx
  struct DirectComposition::CResourceMarshaler **v12; // r8
  DirectComposition::CPrimitiveGroupMarshaler *v13; // rcx
  unsigned int *v14; // r14

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a3 > 1 || a5 && !a4 )
    v9 = -1073741811;
  v10 = 0;
  if ( v9 >= 0 )
  {
    do
    {
      if ( v10 >= a5 )
        break;
      v11 = a4[v10];
      if ( !v11
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 120LL))(
              v11,
              189LL) )
      {
        v9 = -1073741811;
      }
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      if ( a3 )
        v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
      else
        v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 5);
      v13 = a3 != 0 ? (DirectComposition::CPrimitiveGroupMarshaler *)0x10 : 0LL;
      v14 = (unsigned int *)((char *)this + (_QWORD)v13 + 48);
      if ( v12 )
      {
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
          v13,
          a2,
          v12,
          (unsigned int *)((char *)this + (_QWORD)v13 + 48));
        *((_DWORD *)this + 4) |= a3 != 0 ? 64 : 32;
      }
      *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 40) = a4;
      *v14 = a5;
      *(_DWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 52) = 0;
      *a6 = 1;
      if ( *v14 )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
        while ( v6 < *v14 );
      }
    }
  }
  return (unsigned int)v9;
}
