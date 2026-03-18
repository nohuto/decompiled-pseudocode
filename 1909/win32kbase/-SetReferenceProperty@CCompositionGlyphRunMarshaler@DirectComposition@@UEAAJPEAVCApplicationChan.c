/*
 * XREFs of ?SetReferenceProperty@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // ebx
  char v9; // al
  int v10; // ecx
  struct DirectComposition::CResourceMarshaler **v11; // r14
  unsigned int v12; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rdx

  v8 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    if ( a4 )
    {
      v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
             a4,
             36LL);
      v10 = 0;
      if ( !v9 )
        v10 = -1073741811;
      v8 = v10;
    }
    v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 48);
    if ( v8 < 0 )
      v11 = 0LL;
    v12 = ((v8 >> 31) & 0xFFFFFFC0) + 64;
  }
  else
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            102LL) )
    {
      return (unsigned int)-1073741811;
    }
    v11 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
    v12 = 32;
  }
  if ( v12 )
  {
    if ( v8 >= 0 )
    {
      v13 = *v11;
      if ( *v11 != a4 )
      {
        if ( v13 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
          *v11 = 0LL;
        }
        if ( a4 )
        {
          *v11 = a4;
          DirectComposition::CResourceMarshaler::AddRef(a4);
        }
        *((_DWORD *)this + 4) |= v12;
        *a5 = 1;
      }
    }
  }
  return (unsigned int)v8;
}
