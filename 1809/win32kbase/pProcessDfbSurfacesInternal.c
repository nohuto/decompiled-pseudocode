/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C00A03D0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C00A02F0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C00FF04C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(struct OBJECT *a1, int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v7; // r12d
  char v8; // r14
  __int64 v9; // r15
  int v10; // r8d
  __int64 v11; // rax
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+68h] [rbp-69h] BYREF
  char v21; // [rsp+70h] [rbp-61h]
  int v22; // [rsp+74h] [rbp-5Dh]
  _QWORD v23[4]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v25[80]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v26; // [rsp+138h] [rbp+67h] BYREF

  v2 = *((_DWORD *)a1 + 28);
  v3 = 0LL;
  v4 = *((_QWORD *)a1 + 70);
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)a1 + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || *((_WORD *)a1 + 50) != 3 )
    {
      v20 = 0LL;
      v8 = 0;
      v21 = 0;
      v9 = 0LL;
      v22 = 0;
      if ( !v4 )
      {
        memset(v23, 0, sizeof(v23));
        LODWORD(v23[0]) = *((_DWORD *)a1 + 24);
        HIDWORD(v23[0]) = *((_DWORD *)a1 + 14);
        LODWORD(v23[1]) = *((_DWORD *)a1 + 15);
        v23[2] = 0LL;
        LODWORD(v23[3]) = 1;
        if ( v7 )
        {
          v13 = 1;
          if ( (*((_WORD *)a1 + 51) & 0x800) != 0 )
            v13 = 2049;
          LODWORD(v23[3]) = v13;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v20,
                              (struct _DEVBITMAPINFO *)v23,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_23;
        v26 = *((_QWORD *)a1 + 6);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v26);
        GreAcquireHmgrSemaphore(v15, v14, v16);
        v4 = v20;
        v9 = v20;
        if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
          *(_DWORD *)(v20 + 112) |= 0x800u;
        *(_QWORD *)(v4 + 48) = *((_QWORD *)a1 + 6);
        GreReleaseHmgrSemaphore(v18, v17, v19);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
        DCOBJ::~DCOBJ((DCOBJ *)v25);
        v8 = v21;
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(
                           a1,
                           (struct _BASEOBJECT *)v4,
                           (*(_DWORD *)(v4 + 116) >> 13) & 1,
                           &v26) )
      {
        v11 = v9;
        if ( (_DWORD)v26 && a2 )
        {
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)a1 + 6), a1, v10);
          v11 = v9;
        }
        if ( v11 )
          v21 = v8 | 1;
        v3 = v4;
LABEL_9:
        SURFMEM::~SURFMEM((SURFMEM *)&v20);
        return v3;
      }
LABEL_23:
      if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
        vCleanupRedirectionSurface(a1, 0);
      goto LABEL_9;
    }
  }
  return 0LL;
}
