/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C012226C
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0128D80 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0028358 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003A6DC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     HmgSafeNextObjt @ 0x1C0069750 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0069900 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006A900 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C009C6A0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _devicemodeW *v6; // r14
  unsigned int (__fastcall *v7)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  WORD dmSize; // cx
  __int64 Objt; // rax
  __int64 v21; // rbx
  int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  HSURF v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v29[80]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)this;
  v6 = Src;
  v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(v5 + 2680);
  if ( v7 )
  {
    GreHideSprites(v5, 1LL);
    memset(v29, 0, sizeof(v29));
    if ( v7(
           *(_QWORD *)(*(_QWORD *)this + 1800LL),
           *(_QWORD *)(*(_QWORD *)this + 2592LL),
           v6,
           *(_QWORD *)this + 2136LL,
           v29,
           &v27) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2152LL) = v29[4];
      *(_DWORD *)(*(_QWORD *)this + 2156LL) = v29[5];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v29[2];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v29[3];
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v29[10];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v29[11];
      *(_DWORD *)(*(_QWORD *)this + 2392LL) = v29[64];
      *(_DWORD *)(*(_QWORD *)this + 2396LL) = v29[65];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v29[16];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v29[17];
      *(_DWORD *)(*(_QWORD *)this + 2548LL) = (((v6->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2548LL) & 0xFFFFFF7F;
      v17 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
      PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
      HmgDecrementShareReferenceCountEx((struct OBJECT *)v17, 0LL);
      bDeleteSurface(*(_QWORD *)(v17 + 32), v18);
      PDEVOBJ::bMakeSurface(this, v27);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2592LL) + 68LL);
      if ( dmSize >= v6->dmSize )
        dmSize = v6->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2592LL), v6, dmSize);
      LODWORD(v6) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt((unsigned int)v6, 1);
        v21 = Objt;
        if ( !Objt )
          break;
        v22 = *(_DWORD *)(Objt + 36);
        v6 = *(struct _devicemodeW **)Objt;
        if ( (v22 & 0x2000) == 0 )
        {
          if ( *(_QWORD *)(Objt + 496) == v17 )
          {
            DC::pSurface((DC *)Objt, *(struct SURFACE **)(*(_QWORD *)this + 2552LL));
            v23 = (__int64 *)PDEVOBJ::sizl(this, &v28);
            v22 = *(_DWORD *)(v21 + 36);
            v24 = *v23;
            *(_DWORD *)(v21 + 316) |= 0xFu;
            *(_QWORD *)(v21 + 512) = v24;
          }
          if ( (v22 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v21 + 496) + 112LL) & 0x200) != 0 )
            v25 = v22 | 0x8000;
          else
            v25 = v22 & 0xFFFF7FFF;
          *(_DWORD *)(v21 + 36) = v25;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 0LL;
      WdLogEvent5_WdWarning(v12);
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      WdLogEvent5_WdWarning(v16);
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
