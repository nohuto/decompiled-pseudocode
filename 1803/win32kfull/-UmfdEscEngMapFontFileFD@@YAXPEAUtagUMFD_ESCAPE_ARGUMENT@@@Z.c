/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007EE00 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C007EF14 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C007F068 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BEF3C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF6B0 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0139220 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0139250 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  struct _FILEVIEW *v5; // rdi
  char *v6; // r14
  int v7; // edi
  int v8; // eax
  int v9; // r14d
  int v10; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _FILEVIEW *v12; // [rsp+40h] [rbp-78h] BYREF
  char *v13; // [rsp+48h] [rbp-70h]
  __int64 v14[10]; // [rsp+60h] [rbp-58h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v13 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v11);
  v12 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_21;
  v10 = *(_DWORD *)v1;
  if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v10, &v12) )
    goto LABEL_21;
  memset(v14, 0, sizeof(v14));
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v5 = v12;
  if ( *((_QWORD *)v12 + 2) )
  {
    v4 = 0;
    ++*((_DWORD *)v12 + 25);
  }
  else
  {
    if ( !*((_QWORD *)v12 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      goto LABEL_21;
    }
    if ( *((_QWORD *)v12 + 4) )
    {
      if ( (int)MapViewOfSectionToFontDriverProcess(v12) < 0 )
        v3 = 0;
      else
        *((_DWORD *)v5 + 25) = 1;
      v4 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v4 )
  {
    v8 = bCreateSection(*((PCWSTR *)v5 + 10), (struct _FILEVIEW *)v14, 0, &v10, (*((_DWORD *)v5 + 10) & 8) != 0);
    LODWORD(v14[5]) ^= (*((_DWORD *)v5 + 10) ^ LODWORD(v14[5])) & 0x20;
    if ( !v8 )
      goto LABEL_21;
    if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v14) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v14);
      goto LABEL_21;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)v5 + 25);
    if ( *((_QWORD *)v5 + 2) )
    {
      v9 = 0;
    }
    else
    {
      v9 = bMapRoutine((__int64 *)v5, v14, 1, v10);
      v3 = v9;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v9 )
      vUnmapFileFD((struct _FILEVIEW *)v14, 1);
  }
  if ( v3 )
  {
    v6 = (char *)*((_QWORD *)v5 + 2);
    v7 = *((_DWORD *)v5 + 6);
  }
  else
  {
    v7 = v10;
    v6 = v13;
  }
  if ( v3 )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v11);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v6;
    *(_DWORD *)v1[2] = v7;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_21:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v11);
}
