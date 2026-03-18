/*
 * XREFs of UmfdDispatchEscape @ 0x1C008C040
 * Callers:
 *     NtGdiExtEscape @ 0x1C008BDD0 (NtGdiExtEscape.c)
 * Callees:
 *     FONTOBJ_pifi @ 0x1C00874E0 (FONTOBJ_pifi.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008C300 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008C8F0 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008D5E0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C008D6F0 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C009403C (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00E8CC0 (-UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00F6250 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0136588 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C014955C (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01616D4 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C026D6F0 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0283768 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0283898 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0283960 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02C1A44 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
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
  int v15; // [rsp+78h] [rbp+10h]

  v2 = 0;
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
      break;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 3u:
      v4 = UmfdTls::EnsureTls();
      if ( v4 && (v5 = (FONTOBJ *)*((_QWORD *)v4 + 5)) != 0LL && (v6 = FONTOBJ_pifi(v5)) != 0LL )
        *(_QWORD *)&ulFastCheckSum[2] = *(_QWORD *)&v6[-1].panose.bMidline;
      else
        *(_QWORD *)&ulFastCheckSum[2] = 0LL;
      break;
    case 4u:
      v7 = UmfdTls::EnsureTls();
      if ( !v7 )
        goto LABEL_25;
      v8 = (PATHOBJ *)*((_QWORD *)v7 + 6);
      if ( !v8 )
        goto LABEL_25;
      ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v8);
      break;
    case 5u:
      v9 = UmfdTls::EnsureTls();
      if ( !v9 )
        goto LABEL_25;
      v10 = (PATHOBJ *)*((_QWORD *)v9 + 6);
      if ( !v10 )
        goto LABEL_25;
      ulFastCheckSum[2] = PATHOBJ_bMoveTo(v10, ptfx[0]);
      break;
    case 6u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyBezierTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      break;
    case 7u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyLineTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      break;
    case 8u:
      LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                      *(_QWORD *)&ptfx[1],
                                      (unsigned int)ptfx[0].x,
                                      ulFastCheckSum[3],
                                      ulFastCheckSum[2]) != 0;
LABEL_25:
      ulFastCheckSum[2] = v2;
      break;
    case 9u:
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      break;
    case 0xAu:
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xBu:
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xCu:
      UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xDu:
      UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xEu:
      UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0xFu:
      UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0x10u:
      UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      break;
    case 0x11u:
      LOBYTE(v2) = gbJpn98FixPitch != 0;
      ulFastCheckSum[2] = v2 | v15 & 0xFFFFFFFE;
      break;
    case 0x12u:
      UmfdHostLifeTimeManager::OnHostReady();
      break;
    case 0x13u:
      UmfdEscHostUnhandledException(0LL);
      break;
    default:
      break;
  }
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
}
