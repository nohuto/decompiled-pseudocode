/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0115480
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0256F30 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ComputeFileviewCheckSum @ 0x1C00C278C (ComputeFileviewCheckSum.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C026D0AC (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C029D0C0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C029D168 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct _FNTCHECKSUM *a14,
        struct _FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16,
        int a17)
{
  unsigned __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // r14
  unsigned int v21; // ebx
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  unsigned int v25; // eax
  bool v26; // cf
  int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  char *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // rax
  unsigned int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rbx

  v18 = 8LL * a2;
  v19 = -1;
  v20 = a4;
  v21 = -1;
  *(_QWORD *)this = 0LL;
  if ( v18 <= 0xFFFFFFFF )
    v21 = 8 * a2;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  v23 = 0;
  *((_DWORD *)this + 2) = 0;
  v24 = 0;
  if ( v18 > 0xFFFFFFFF || (v25 = v21 + 224, v26 = v21 >= 0xFFFFFF20, v21 = -1, v27 = 1, v26) )
    v27 = 0;
  else
    v21 = v25;
  if ( a3 && v27 )
  {
    v24 = v21;
    v28 = -1;
    v29 = v21 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v27 = 0;
    if ( v29 >= v21 )
      v28 = v21 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v21 = v28;
    LOBYTE(v27) = v29 >= v24;
  }
  v30 = v21;
  if ( (_DWORD)Size )
  {
    if ( !v27 )
      return this;
    v38 = v21 + Size;
    v27 = 0;
    v23 = v21;
    if ( v21 + (unsigned int)Size >= v21 )
      v19 = v21 + Size;
    v21 = v19;
    LOBYTE(v27) = v38 >= v30;
  }
  if ( v27 )
  {
    v31 = (char *)PALLOCMEM2(v21, 1717989447LL, 1);
    *(_QWORD *)this = v31;
    if ( v31 )
    {
      PushThreadGuardedObject(v31 + 160, v31, CleanUpPFF);
      **(_QWORD **)this = v21;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = a8;
      *(_QWORD *)(*(_QWORD *)this + 88LL) = a9;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = a11;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 212LL) = -1;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = v20;
      v32 = *(_QWORD *)this;
      if ( (_DWORD)v20 )
      {
        *(_QWORD *)(v32 + 24) = v32 + v24;
        memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v20);
      }
      else
      {
        *(_QWORD *)(v32 + 24) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
      v33 = *(_QWORD *)this;
      if ( (_DWORD)Size )
      {
        *(_QWORD *)(v33 + 40) = v33 + v23;
        memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
      }
      else
      {
        *(_QWORD *)(v33 + 40) = 0LL;
      }
      if ( gbNetworkFontsLoaded && gbAttemptedEnableEUDC && gbFntCacheClosed )
        v34 = a12;
      else
        v34 = a12 | 0x200;
      v35 = v34 | 0x1000;
      *(_QWORD *)(*(_QWORD *)this + 200LL) = a15;
      if ( !a17 )
        v35 = v34;
      *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v35;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
      v36 = *(_QWORD *)this;
      if ( (a13 & 0x1C) != 0 )
      {
        *(_DWORD *)(v36 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a13);
      }
      else if ( (a13 & 0x20) != 0 )
      {
        *(_DWORD *)(v36 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v36 + 56) = 1;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      }
      *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
      if ( a16 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *(_DWORD *)a16;
      }
      else if ( a15 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *((_DWORD *)a14 + 1);
        if ( !*(_DWORD *)(*(_QWORD *)this + 136LL) )
        {
          v39 = *(_QWORD *)this;
          *(_DWORD *)(v39 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
          if ( (a13 & 0x10) == 0 )
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
        {
          v40 = *(_QWORD *)this;
          *(_DWORD *)(v40 + 136) += ComputeFileviewCheckSum(Src, Size);
        }
      }
    }
  }
  return this;
}
