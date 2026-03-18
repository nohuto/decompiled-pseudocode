/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0102C2C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00137F0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001381C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00933B0 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00F7C84 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _devicemodeW *v6; // r14
  unsigned int (__fastcall *v7)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct SURFACE *v13; // r15
  __int64 v14; // rcx
  WORD dmSize; // cx
  __int64 Objt; // rax
  __int64 v17; // rbx
  int v18; // edx
  __int64 *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  HSURF v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-B0h] BYREF
  struct OBJECT *v26; // [rsp+70h] [rbp-90h]
  _DWORD v27[80]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)this;
  v6 = Src;
  v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v5 + 2680);
  if ( v7 )
  {
    GreHideSprites(v5, 1LL);
    memset(v27, 0, sizeof(v27));
    if ( v7(
           *(_QWORD *)(*(_QWORD *)this + 1800LL),
           *(_QWORD *)(*(_QWORD *)this + 2592LL),
           v6,
           *(_QWORD *)this + 2136LL,
           v27,
           &v23) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2152LL) = v27[4];
      *(_DWORD *)(*(_QWORD *)this + 2156LL) = v27[5];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v27[2];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v27[3];
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v27[10];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v27[11];
      *(_DWORD *)(*(_QWORD *)this + 2392LL) = v27[64];
      *(_DWORD *)(*(_QWORD *)this + 2396LL) = v27[65];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v27[16];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v27[17];
      *(_DWORD *)(*(_QWORD *)this + 2548LL) = (((v6->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2548LL) & 0xFFFFFF7F;
      v13 = *(struct SURFACE **)(*(_QWORD *)this + 2552LL);
      PDEVOBJ::vDisableSurface(this, 0, 0);
      SURFREF::SURFREF((SURFREF *)v25, v13);
      HmgDecrementShareReferenceCountEx(v26, 0LL);
      v14 = *((_QWORD *)v13 + 4);
      v26 = 0LL;
      bDeleteSurface(v14);
      SURFREF::~SURFREF((SURFREF *)v25);
      PDEVOBJ::bMakeSurface(this, v23);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2592LL) + 68LL);
      if ( dmSize >= v6->dmSize )
        dmSize = v6->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2592LL), v6, dmSize);
      LODWORD(v6) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt((unsigned int)v6, 1);
        v17 = Objt;
        if ( !Objt )
          break;
        v18 = *(_DWORD *)(Objt + 36);
        v6 = *(struct _devicemodeW **)Objt;
        if ( (v18 & 0x2000) == 0 )
        {
          if ( *(struct SURFACE **)(Objt + 496) == v13 )
          {
            DC::pSurface((DC *)Objt, *(struct SURFACE **)(*(_QWORD *)this + 2552LL));
            v19 = (__int64 *)PDEVOBJ::sizl(this, &v24);
            v18 = *(_DWORD *)(v17 + 36);
            v20 = *v19;
            *(_DWORD *)(v17 + 316) |= 0xFu;
            *(_QWORD *)(v17 + 512) = v20;
          }
          if ( (v18 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v17 + 496) + 112LL) & 0x200) != 0 )
            v21 = v18 | 0x8000;
          else
            v21 = v18 & 0xFFFF7FFF;
          *(_DWORD *)(v17 + 36) = v21;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v10 + 24) = 0LL;
      WdLogEvent5_WdWarning(v10);
      v12 = WdLogNewEntry5_WdWarning(v11);
      WdLogEvent5_WdWarning(v12);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(v5, Src, a3);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdEvent(v8);
  }
  return v4;
}
