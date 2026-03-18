/*
 * XREFs of UmfdDispatchEscape @ 0x1C0082100
 * Callers:
 *     NtGdiExtEscape @ 0x1C0081E90 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007F1C0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007F2BC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082350 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BC5E8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00DE6D0 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0112E38 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     FONTOBJ_pifi @ 0x1C0120590 (FONTOBJ_pifi.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C01225BC (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013C018 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C025A100 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270720 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270844 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270904 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02AF9E4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 */

__int64 __fastcall UmfdDispatchEscape(_OWORD *a1)
{
  ULONG v2; // edi
  ULONG64 v3; // rcx
  __int64 result; // rax
  struct UmfdTls *v5; // rax
  PATHOBJ *v6; // rcx
  struct UmfdTls *v7; // rax
  PATHOBJ *v8; // rcx
  struct UmfdTls *v9; // rax
  FONTOBJ *v10; // rcx
  IFIMETRICS *v11; // rax
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = (ULONG64)(a1 + 3);
  if ( v3 > MmUserProbeAddress || v3 < (unsigned __int64)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *a1;
  *(_OWORD *)&ptfx[0].x = a1[1];
  v14 = a1[2];
  if ( ulFastCheckSum[0] )
  {
    if ( ulFastCheckSum[0] == 10 )
    {
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    }
    else if ( ulFastCheckSum[0] == 11 )
    {
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    }
    else
    {
      switch ( ulFastCheckSum[0] )
      {
        case 1u:
          UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
          break;
        case 3u:
          v9 = UmfdTls::EnsureTls(v3, 0LL);
          if ( !v9 )
            goto LABEL_41;
          v10 = (FONTOBJ *)*((_QWORD *)v9 + 4);
          if ( v10 )
          {
            v11 = FONTOBJ_pifi(v10);
            if ( v11 )
              *(_QWORD *)&ulFastCheckSum[2] = *(_QWORD *)&v11[-1].panose.bMidline;
            else
LABEL_41:
              *(_QWORD *)&ulFastCheckSum[2] = 0LL;
          }
          else
          {
            *(_QWORD *)&ulFastCheckSum[2] = 0LL;
          }
          break;
        case 4u:
          v5 = UmfdTls::EnsureTls(v3, 0LL);
          if ( v5 )
          {
            v6 = (PATHOBJ *)*((_QWORD *)v5 + 5);
            if ( v6 )
              ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v6);
            else
              ulFastCheckSum[2] = 0;
          }
          else
          {
            ulFastCheckSum[2] = 0;
          }
          break;
        case 5u:
          v7 = UmfdTls::EnsureTls(v3, 0LL);
          if ( v7 )
          {
            v8 = (PATHOBJ *)*((_QWORD *)v7 + 5);
            if ( v8 )
              ulFastCheckSum[2] = PATHOBJ_bMoveTo(v8, ptfx[0]);
            else
              ulFastCheckSum[2] = 0;
          }
          else
          {
            ulFastCheckSum[2] = 0;
          }
          break;
        case 6u:
          ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(
                                PATHOBJ_bPolyBezierTo,
                                0LL,
                                *(struct _POINTFIX **)ptfx,
                                ptfx[1].x);
          break;
        case 7u:
          ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyLineTo, 0LL, *(struct _POINTFIX **)ptfx, ptfx[1].x);
          break;
        case 8u:
          LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                          *(_QWORD *)&ptfx[1],
                                          (unsigned int)ptfx[0].x,
                                          ulFastCheckSum[3],
                                          ulFastCheckSum[2]) != 0;
          ulFastCheckSum[2] = v2;
          break;
        case 9u:
          EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
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
          if ( gbJpn98FixPitch )
            v2 = 1;
          ulFastCheckSum[2] = v2 | v15 & 0xFFFFFFFE;
          break;
        case 0x12u:
          UmfdHostLifeTimeManager::OnHostReady();
          break;
        default:
          break;
      }
    }
  }
  else
  {
    UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
  }
  result = ulFastCheckSum[0];
  if ( !ulFastCheckSum[0] || ulFastCheckSum[0] == 10 )
  {
LABEL_16:
    ProbeForWrite((char *)a1 + 8, 4uLL, 8u);
    result = ulFastCheckSum[2];
    *((_DWORD *)a1 + 2) = ulFastCheckSum[2];
  }
  else if ( ulFastCheckSum[0] != 11 )
  {
    result = ulFastCheckSum[0] - 1;
    switch ( ulFastCheckSum[0] )
    {
      case 1u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0x10u:
      case 0x11u:
        goto LABEL_16;
      case 2u:
      case 3u:
      case 0xFu:
        ProbeForWrite((char *)a1 + 8, 8uLL, 8u);
        result = *(_QWORD *)&ulFastCheckSum[2];
        *((_QWORD *)a1 + 1) = *(_QWORD *)&ulFastCheckSum[2];
        break;
      default:
        return result;
    }
  }
  return result;
}
