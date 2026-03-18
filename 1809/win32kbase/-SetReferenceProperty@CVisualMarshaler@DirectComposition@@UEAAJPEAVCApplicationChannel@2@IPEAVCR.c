/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C8D0
 * Callers:
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0002990 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0004B00 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000D510 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01761B0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01791F0 (-SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C017E220 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C000CB9C (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     McTemplateK0qqqxx @ 0x1C016BCE0 (McTemplateK0qqqxx.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v9; // edi
  struct DirectComposition::CResourceMarshaler **v10; // r14
  unsigned int v11; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  char v14; // al
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  int v18; // r10d
  char v19; // al
  int v20; // ecx
  char v21; // al
  int v22; // ecx
  char v23; // al
  char v24; // al
  int v25; // ecx

  v9 = 0;
  *a5 = 0;
  v10 = 0LL;
  v11 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                149LL);
        v15 = 0;
        if ( !v14 )
          v15 = -1073741811;
        v9 = v15;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
      v11 = 256;
      goto LABEL_10;
    case 4:
      goto LABEL_8;
    case 5:
      if ( a4 )
      {
        v19 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                49LL);
        v20 = 0;
        if ( !v19 )
          v20 = -1073741811;
        v9 = v20;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
      v11 = 1024;
      goto LABEL_10;
    case 6:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                59LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v9 = v17;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 144);
      v11 = 4096;
      goto LABEL_10;
    case 10:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                109LL)
          && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                37LL) )
        {
          v23 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  75LL);
          if ( !v23
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  166LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  82LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  58LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                  a4,
                  139LL) )
          {
            v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                    a4,
                    103LL);
            v25 = 0;
            if ( !v24 )
              v25 = -1073741811;
            v9 = v25;
          }
        }
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 152);
      if ( v9 < 0 )
        v10 = 0LL;
      v11 = ((v9 >> 31) & 0xFFFFF800) + 2048;
      goto LABEL_10;
    case 23:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
                a4,
                83LL) )
        {
          v9 = -1073741811;
LABEL_42:
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 200);
          v11 = 0x80000;
          goto LABEL_10;
        }
        v18 = *((_DWORD *)a4 + 6);
      }
      else
      {
        v18 = 0;
      }
      if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
        McTemplateK0qqqxx(
          v18,
          0,
          *((_DWORD *)this + 6),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 6),
          v18,
          *((_DWORD *)this + 6),
          v18);
      goto LABEL_42;
    case 39:
LABEL_8:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
              a4,
              157LL)
        && (a3 == 4
         || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
               a4,
               160LL)) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 39, a5);
      goto LABEL_10;
  }
  if ( a3 != 40 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    v21 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            14LL);
    v22 = 0;
    if ( !v21 )
      v22 = -1073741811;
    v9 = v22;
  }
  v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 208);
  v11 = 0x2000000;
LABEL_10:
  if ( v9 >= 0 && a3 != 39 && a3 != 4 )
  {
    v13 = *v10;
    if ( *v10 != a4 )
    {
      if ( v13 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *v10 = 0LL;
      }
      if ( a4 )
      {
        *v10 = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 4) |= v11;
      *a5 = 1;
    }
  }
  return (unsigned int)v9;
}
