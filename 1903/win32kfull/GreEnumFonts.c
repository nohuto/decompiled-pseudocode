/*
 * XREFs of GreEnumFonts @ 0x1C0077AE8
 * Callers:
 *     NtGdiEnumFonts @ 0x1C0077920 (NtGdiEnumFonts.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0077F80 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00782A0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013AB4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B1198 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

_BOOL8 __fastcall GreEnumFonts(
        HDC a1,
        unsigned int a2,
        __int16 a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // rdi
  int v11; // edx
  struct PFF *v12; // rax
  unsigned int v13; // edx
  bool v14; // al
  BOOL v15; // ebx
  struct _FONTHASH **v17; // [rsp+68h] [rbp-31h] BYREF
  struct _FONTHASH **v18; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v20[2]; // [rsp+80h] [rbp-19h] BYREF
  struct PFF *v21; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v22[10]; // [rsp+A0h] [rbp+7h] BYREF

  v7 = a7;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    a7 = *(_DWORD **)(v20[0] + 48LL);
    if ( (a7[10] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v19 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v22[8] = 0;
    v22[3] = 0;
    v22[9] = a5;
    v11 = a7[535];
    v22[6] = v11 == 0;
    v22[5] = v11 == 4;
    v22[0] = (*(_DWORD *)(*(_QWORD *)(v20[0] + 976LL) + 236LL) & 1) != 0 || (a7[10] & 1) == 0;
    v22[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
    v22[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
    v22[7] = a3 & 0x200;
    v17 = (struct _FONTHASH **)gpPFTDevice;
    v22[4] = gulFontInformation & 1;
    v12 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v17, *(HDEV *)(v20[0] + 48LL), 0LL);
    if ( !v12
      || (v21 = v12,
          v18 = gpPFTPublic,
          v17 = gpPFTPrivate,
          !(v14 = EnumDeviceAndEngine(
                    a4,
                    v13,
                    a2,
                    (struct _EFFILTER_INFO *)v22,
                    (struct PUBLIC_PFTOBJ *)&v18,
                    (struct PUBLIC_PFTOBJ *)&v17,
                    (struct PFFOBJ *)&v21,
                    (struct PDEVOBJ *)&a7,
                    (struct DCOBJ *)v20,
                    a6,
                    v7))) )
    {
      v17 = gpPFTPublic;
      v18 = gpPFTPrivate;
      v14 = EnumEngineOnly(
              a4,
              v13,
              a2,
              (struct _EFFILTER_INFO *)v22,
              (struct PUBLIC_PFTOBJ *)&v17,
              (struct PUBLIC_PFTOBJ *)&v18,
              (struct DCOBJ *)v20,
              a6,
              v7);
    }
    v15 = v14;
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
  }
  else
  {
    EngSetLastError(6u);
    v15 = 0;
  }
  if ( v20[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  return v15;
}
