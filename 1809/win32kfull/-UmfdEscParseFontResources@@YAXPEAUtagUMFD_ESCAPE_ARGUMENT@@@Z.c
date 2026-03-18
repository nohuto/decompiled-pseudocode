/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C009403C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C009162C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     cParseFontResources @ 0x1C00940F8 (cParseFontResources.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015FBF8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015FE0C (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall UmfdEscParseFontResources(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  _DWORD *v2; // rsi
  __int64 v3; // rcx
  int v4; // edi
  volatile void *v5; // rcx
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+10h] BYREF
  char v9; // [rsp+80h] [rbp+18h] BYREF
  char *v10; // [rsp+88h] [rbp+20h]

  v1 = (char *)a1 + 8;
  v6[1] = (char *)a1 + 8;
  v2 = (_DWORD *)((char *)a1 + 8);
  v10 = (char *)a1 + 8;
  Src = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
  if ( UmfdFileviewLookup
    && (LODWORD(v7) = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v3, &v7, v6))
    && *(_QWORD *)(v6[0] + 16LL) )
  {
    v4 = cParseFontResources(v6[0], &v7, v6, (unsigned __int64)&Src & -(__int64)(*((_QWORD *)v1 + 1) != 0LL));
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
    if ( v4 )
    {
      v5 = (volatile void *)*((_QWORD *)v1 + 1);
      if ( v5 )
      {
        if ( (unsigned int)(8 * v4) <= *((_DWORD *)v1 + 4) )
        {
          ProbeForWrite(v5, *((unsigned int *)v1 + 4), 8u);
          memmove(*((void **)v1 + 1), Src, (unsigned int)(8 * v4));
        }
        else
        {
          v4 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v4 )
      {
        ProbeForWrite(*((volatile void **)v1 + 3), 8uLL, 8u);
        ProbeForWrite(*((volatile void **)v1 + 4), 8uLL, 8u);
        **((_QWORD **)v1 + 3) = v7;
        **((_QWORD **)v1 + 4) = v6[0];
      }
    }
    *v2 = v4;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
  }
}
