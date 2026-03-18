/*
 * XREFs of GreEnumFonts @ 0x1C007E5A8
 * Callers:
 *     NtGdiEnumFonts @ 0x1C007E3E0 (NtGdiEnumFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C007E7E4 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C007EB04 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0085270 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C029C314 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
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
  void *v7; // rsi
  BOOL v8; // ebx
  int v12; // edx
  int v13; // ecx
  struct PFF *v14; // rax
  unsigned int v15; // edx
  bool v16; // al
  _DWORD v18[10]; // [rsp+68h] [rbp-71h] BYREF
  struct PFT *v19; // [rsp+90h] [rbp-49h] BYREF
  struct PFT **v20; // [rsp+98h] [rbp-41h] BYREF
  struct _FONTHASH **v21; // [rsp+A0h] [rbp-39h] BYREF
  struct PFT **v22; // [rsp+A8h] [rbp-31h] BYREF
  struct _FONTHASH **v23; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v25[2]; // [rsp+C0h] [rbp-19h] BYREF
  char v26[32]; // [rsp+D0h] [rbp-9h] BYREF
  struct PFF *v27; // [rsp+F0h] [rbp+17h] BYREF

  v7 = a7;
  v8 = 0;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( v25[0] )
  {
    a7 = *(_DWORD **)(v25[0] + 48LL);
    if ( (a7[10] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v24 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v18[9] = a5;
    v18[3] = 0;
    v12 = a7[535];
    v18[6] = v12 == 0;
    v18[5] = v12 == 4;
    if ( (*(_DWORD *)(*(_QWORD *)(v25[0] + 976LL) + 236LL) & 1) != 0 || (v13 = a7[10], v18[0] = 0, (v13 & 1) == 0) )
      v18[0] = 1;
    v18[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
    v18[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
    v18[7] = a3 & 0x200;
    v19 = gpPFTDevice;
    v18[4] = gulFontInformation & 1;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v19, *(HDEV *)(v25[0] + 48LL), 0LL);
    if ( !v14
      || (v27 = v14,
          v21 = gpPFTPublic,
          v20 = gpPFTPrivate,
          !(v16 = EnumDeviceAndEngine(
                    a4,
                    v15,
                    a2,
                    (struct _EFFILTER_INFO *)v18,
                    (struct PUBLIC_PFTOBJ *)&v21,
                    (struct PUBLIC_PFTOBJ *)&v20,
                    (struct PFFOBJ *)&v27,
                    (struct PDEVOBJ *)&a7,
                    (struct DCOBJ *)v25,
                    a6,
                    v7))) )
    {
      v23 = gpPFTPublic;
      v22 = gpPFTPrivate;
      v16 = EnumEngineOnly(
              a4,
              v15,
              a2,
              (struct _EFFILTER_INFO *)v18,
              (struct PUBLIC_PFTOBJ *)&v23,
              (struct PUBLIC_PFTOBJ *)&v22,
              (struct DCOBJ *)v25,
              a6,
              v7);
    }
    v8 = v16;
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v26);
  return v8;
}
