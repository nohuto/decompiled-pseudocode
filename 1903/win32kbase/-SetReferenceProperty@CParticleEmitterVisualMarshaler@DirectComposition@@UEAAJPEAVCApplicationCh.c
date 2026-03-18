/*
 * XREFs of ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C007B820 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // edi
  struct DirectComposition::CResourceMarshaler **v9; // r14
  unsigned int v10; // ebx

  v8 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case '4':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              10LL) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 352);
      v10 = 0x400000;
      break;
    case '8':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              14LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 344);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFFFFF8) + 8;
      break;
    case '9':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              62LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 360);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFFFFF0) + 16;
      break;
    case '<':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              187LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 368);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFFFF80) + 128;
      break;
    case 'P':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              117LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 384);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFC0000) + 0x40000;
      break;
    case 'Q':
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              113LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 376);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFE0000) + 0x20000;
      break;
    default:
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  if ( v10 && v8 >= 0 && *v9 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v9);
    *v9 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 125) |= v10;
    *a5 = 1;
  }
  return (unsigned int)v8;
}
