/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0122650
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C01216FC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C0122A24 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0122B48 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122C28 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0123330 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0123378 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0166510 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016673C (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  char *v7; // r14
  int v8; // edi
  void *v9; // rcx
  unsigned __int64 v10; // r8
  int v11; // r14d
  enum _SECTION_INHERIT v12; // [rsp+30h] [rbp-108h]
  unsigned int v13; // [rsp+38h] [rbp-100h]
  unsigned int v14; // [rsp+40h] [rbp-F8h]
  int v15; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-D8h] BYREF
  char *v18; // [rsp+68h] [rbp-D0h]
  union _LARGE_INTEGER v19; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-C0h] BYREF
  union _LARGE_INTEGER v21; // [rsp+80h] [rbp-B8h] BYREF
  void *v22[16]; // [rsp+90h] [rbp-A8h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v18 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
  v16 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_24;
  v15 = *(_DWORD *)v1;
  if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v15, &v16) )
    goto LABEL_24;
  memset(v22, 0, 0x50uLL);
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v6 = v16;
  if ( *(_QWORD *)(v16 + 16) )
  {
    ++*(_DWORD *)(v16 + 100);
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v16 + 80) )
  {
    GreReleaseFastMutex(ghfmMemory);
    goto LABEL_24;
  }
  v9 = *(void **)(v16 + 32);
  if ( v9 )
  {
    v16 = 0LL;
    v19.QuadPart = 0LL;
    if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                v9,
                (void **)(v6 + 16),
                v5,
                0LL,
                &v19,
                &v16,
                v12,
                v13,
                v14,
                (unsigned __int64 *)(v6 + 72)) < 0 )
      v3 = 0;
    else
      *(_DWORD *)(v6 + 100) = 1;
    goto LABEL_5;
  }
LABEL_6:
  GreReleaseFastMutex(ghfmMemory);
  if ( v4 )
  {
    memset(&v22[10], 0, 0x30uLL);
    if ( !(unsigned int)bCreateSection(
                          *(PCWSTR *)(v6 + 80),
                          (struct _FILEVIEW *)v22,
                          0,
                          &v15,
                          (*(_DWORD *)(v6 + 40) & 8) != 0) )
      goto LABEL_24;
    v20 = 0LL;
    v21.QuadPart = 0LL;
    if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                v22[4],
                &v22[2],
                v10,
                0LL,
                &v21,
                &v20,
                v12,
                v13,
                v14,
                (unsigned __int64 *)&v22[9]) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v22);
      goto LABEL_24;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(v6 + 100);
    if ( *(_QWORD *)(v6 + 16) )
    {
      v11 = 0;
    }
    else
    {
      v11 = bMapRoutine(v6, v22, 1LL, (unsigned int)v15);
      v3 = v11;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v11 )
      vUnmapFileFD((struct _FILEVIEW *)v22, 1u);
  }
  if ( v3 )
  {
    v7 = *(char **)(v6 + 16);
    v8 = *(_DWORD *)(v6 + 24);
  }
  else
  {
    v8 = v15;
    v7 = v18;
  }
  if ( v3 )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v7;
    *(_DWORD *)v1[2] = v8;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_24:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v17);
}
