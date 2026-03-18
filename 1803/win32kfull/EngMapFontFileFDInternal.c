/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00BF524
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     bttfdMapFontFileFD @ 0x1C0217020 (bttfdMapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C0223254 (ttfdOpenFontContextInternal.c)
 *     bBmfdMapFontFileFD @ 0x1C0224BD0 (bBmfdMapFontFileFD.c)
 *     bReconnectBmfdFont @ 0x1C0225320 (bReconnectBmfdFont.c)
 *     BmfdOpenFontContext @ 0x1C0227158 (BmfdOpenFontContext.c)
 *     bvtfdMapFontFileFD @ 0x1C0228950 (bvtfdMapFontFileFD.c)
 *     bReconnectVtfdFont @ 0x1C0229E74 (bReconnectVtfdFont.c)
 *     vtfdQueryFontFile @ 0x1C022A420 (vtfdQueryFontFile.c)
 *     vtfdOpenFontContext @ 0x1C022A940 (vtfdOpenFontContext.c)
 *     EngMapFontFileFD @ 0x1C025AFC0 (EngMapFontFileFD.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0289C20 (NtGdiGetFontFileData.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290084 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007EE00 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C007EF14 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C007F068 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF6B0 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  int Section; // esi
  unsigned int v12; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v14[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15[10]; // [rsp+40h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  memset(v15, 0, sizeof(v15));
  v8 = 1;
  v9 = 1;
  GreAcquireFastMutex(ghfmMemory);
  if ( *((_QWORD *)a1 + 2) )
  {
    v9 = 0;
    ++*((_DWORD *)a1 + 25);
  }
  else
  {
    if ( !*((_QWORD *)a1 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      if ( (int)MapViewOfSectionToFontDriverProcess(a1) < 0 )
        v8 = 0;
      else
        *((_DWORD *)a1 + 25) = 1;
      v9 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( !v9 )
  {
LABEL_17:
    if ( v8 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 2);
      if ( a3 )
        *a3 = *((_DWORD *)a1 + 6);
    }
    return v8;
  }
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(*((PCWSTR *)a1 + 10), (struct _FILEVIEW *)v15, 0, v14, (*((_DWORD *)a1 + 10) & 8) != 0);
  LODWORD(v15[5]) ^= (*((_DWORD *)a1 + 10) ^ LODWORD(v15[5])) & 0x20;
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v15) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine((__int64 *)a1, v15, 1, v14[0]);
      v8 = v12;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v12 )
      vUnmapFileFD((struct _FILEVIEW *)v15, 1);
    goto LABEL_17;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v15);
  return 0LL;
}
