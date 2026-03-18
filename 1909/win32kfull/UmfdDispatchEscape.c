/*
 * XREFs of UmfdDispatchEscape @ 0x1C0121D90
 * Callers:
 *     NtGdiExtEscape @ 0x1C0121B20 (NtGdiExtEscape.c)
 * Callees:
 *     FONTOBJ_pifi @ 0x1C009A7A0 (FONTOBJ_pifi.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C011B89C (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011DC44 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011EF88 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01220A0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0122650 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C012292C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C01229E8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0142100 (-UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C014BDCC (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0166A9C (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C02858B0 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02986B0 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02987E0 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02988AC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02D4664 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 */

__int64 __fastcall UmfdDispatchEscape(struct _PATHOBJ *a1)
{
  ULONG v2; // edi
  struct _PATHOBJ *v3; // rdx
  struct UmfdTls *v4; // rax
  FONTOBJ *v5; // rcx
  IFIMETRICS *v6; // rax
  struct UmfdTls *v7; // rax
  PATHOBJ *v8; // rcx
  struct UmfdTls *v9; // rax
  PATHOBJ *v10; // rcx
  __int64 result; // rax
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-18h]

  v2 = 0;
  memset(ulFastCheckSum, 0, sizeof(ulFastCheckSum));
  ptfx[0] = 0LL;
  ptfx[1] = 0LL;
  v14 = 0uLL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = a1 + 6;
  if ( (unsigned __int64)&a1[6] > MmUserProbeAddress || v3 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *(_OWORD *)&a1->fl;
  *(_OWORD *)&ptfx[0].x = *(_OWORD *)&a1[2].fl;
  v14 = *(_OWORD *)&a1[4].fl;
  switch ( ulFastCheckSum[0] )
  {
    case 0u:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 3u:
      v4 = UmfdTls::EnsureTls();
      if ( !v4 )
        goto LABEL_11;
      v5 = (FONTOBJ *)*((_QWORD *)v4 + 5);
      if ( v5 )
      {
        v6 = FONTOBJ_pifi(v5);
        if ( v6 )
          *(_QWORD *)&ulFastCheckSum[2] = *(_QWORD *)&v6[-1].panose.bMidline;
        else
LABEL_11:
          *(_QWORD *)&ulFastCheckSum[2] = 0LL;
      }
      else
      {
        *(_QWORD *)&ulFastCheckSum[2] = 0LL;
      }
LABEL_40:
      result = (int)ulFastCheckSum[0];
      switch ( ulFastCheckSum[0] )
      {
        case 0u:
        case 1u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 0xAu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0x10u:
        case 0x11u:
          ProbeForWrite(&a1[1], 4uLL, 8u);
          result = ulFastCheckSum[2];
          a1[1].fl = ulFastCheckSum[2];
          break;
        case 2u:
        case 3u:
        case 0xFu:
          ProbeForWrite(&a1[1], 8uLL, 8u);
          result = *(_QWORD *)&ulFastCheckSum[2];
          a1[1] = *(struct _PATHOBJ *)&ulFastCheckSum[2];
          break;
        default:
          return result;
      }
      return result;
    case 4u:
      v7 = UmfdTls::EnsureTls();
      if ( v7 )
      {
        v8 = (PATHOBJ *)*((_QWORD *)v7 + 6);
        if ( v8 )
          ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v8);
        else
          ulFastCheckSum[2] = 0;
      }
      else
      {
        ulFastCheckSum[2] = 0;
      }
      goto LABEL_40;
    case 5u:
      v9 = UmfdTls::EnsureTls();
      if ( v9 )
      {
        v10 = (PATHOBJ *)*((_QWORD *)v9 + 6);
        if ( v10 )
          ulFastCheckSum[2] = PATHOBJ_bMoveTo(v10, ptfx[0]);
        else
          ulFastCheckSum[2] = 0;
      }
      else
      {
        ulFastCheckSum[2] = 0;
      }
      goto LABEL_40;
    case 6u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyBezierTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      goto LABEL_40;
    case 7u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyLineTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      goto LABEL_40;
    case 8u:
      LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                      *(_QWORD *)&ptfx[1],
                                      (unsigned int)ptfx[0].x,
                                      ulFastCheckSum[3],
                                      ulFastCheckSum[2]) != 0;
      ulFastCheckSum[2] = v2;
      goto LABEL_40;
    case 9u:
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      goto LABEL_40;
    case 0xAu:
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0xBu:
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0xCu:
      UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0xDu:
      UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0xEu:
      UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0xFu:
      UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0x10u:
      UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_40;
    case 0x11u:
      LOBYTE(v2) = gbJpn98FixPitch != 0;
      ulFastCheckSum[2] = v2 | (*(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 2 : 0);
      goto LABEL_40;
    case 0x12u:
      UmfdHostLifeTimeManager::OnHostReady();
      goto LABEL_40;
    case 0x13u:
      UmfdEscHostUnhandledException(0LL);
      goto LABEL_40;
    default:
      goto LABEL_40;
  }
}
