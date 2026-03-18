/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270844
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BEF3C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0139220 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0139250 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1C02493C0 (EngGetFileChangeTime.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  LARGE_INTEGER pChangeTime; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF
  HANDLE h; // [rsp+50h] [rbp+18h] BYREF
  char *v6; // [rsp+58h] [rbp+20h]

  v1 = (volatile void **)((char *)a1 + 8);
  v6 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v4);
  h = 0LL;
  if ( UmfdFileviewLookup
    && (pChangeTime.LowPart = *(_DWORD *)v1,
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &pChangeTime, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v4);
    ProbeForWrite(v1[1], 8uLL, 4u);
    *(LARGE_INTEGER *)v1[1] = pChangeTime;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v4);
  }
}
