/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C0058BB0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0058AC0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AE70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B1414 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0128A6C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

struct _BASEOBJECT *__fastcall pProcessDfbSurfacesInternal(struct SURFACE *this, int a2)
{
  int v2; // eax
  struct _BASEOBJECT *v3; // rbx
  struct _BASEOBJECT *v4; // r14
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r8d
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  char v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  _DWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v23; // [rsp+80h] [rbp-29h]
  __int64 v24; // [rsp+88h] [rbp-21h]
  _BYTE v25[32]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v27; // [rsp+C0h] [rbp+17h]
  __int64 v28; // [rsp+110h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 28);
  v3 = 0LL;
  v4 = (struct _BASEOBJECT *)*((_QWORD *)this + 70);
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)this + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v19 = 0LL;
      v8 = 0LL;
      v20 = 0;
      v21 = 0;
      if ( !v4 )
      {
        v22[0] = *((_DWORD *)this + 24);
        v22[1] = *((_DWORD *)this + 14);
        v22[2] = *((_DWORD *)this + 15);
        v22[3] = 0;
        v24 = 1LL;
        v23 = 0LL;
        if ( v7 )
        {
          v9 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v9 = 2049;
          LODWORD(v24) = v9;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v19,
                              (struct _DEVBITMAPINFO *)v22,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_29;
        v28 = *((_QWORD *)this + 6);
        v26[0] = 0LL;
        v26[1] = 0LL;
        v27 = 256;
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&v28);
        GreAcquireHmgrSemaphore(v11, v10, v12);
        v8 = v19;
        v4 = (struct _BASEOBJECT *)v19;
        if ( (*((_DWORD *)this + 29) & 1) != 0 )
          *(_DWORD *)(v19 + 112) |= 0x800u;
        *(_QWORD *)(v8 + 48) = *((_QWORD *)this + 6);
        GreReleaseHmgrSemaphore(v14, v13, v15);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
        v16 = v26[0];
        if ( v26[0] )
        {
          if ( (_BYTE)v27 )
          {
            *(_DWORD *)(v26[0] + 40LL) &= ~2u;
            v16 = v26[0];
            LOBYTE(v27) = 0;
          }
          if ( v16 )
            XDCOBJ::vUnlockFast((XDCOBJ *)v26);
          v26[0] = 0LL;
        }
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, v4) )
      {
        if ( (_DWORD)v28 && a2 )
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), this, v17);
        if ( v8 )
          v20 |= 1u;
        v3 = v4;
LABEL_17:
        SURFMEM::~SURFMEM((SURFMEM *)&v19);
        return v3;
      }
LABEL_29:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_17;
    }
  }
  return 0LL;
}
