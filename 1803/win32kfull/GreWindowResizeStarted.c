/*
 * XREFs of GreWindowResizeStarted @ 0x1C023D234
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C023A9A4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  struct PDEVOBJ *v10; // rdx
  __int64 v11; // r9
  struct DWMSPRITE *v12; // rdi
  __int64 *v13; // rsi
  __int64 v14; // rcx
  SURFACE *v15; // rax
  unsigned __int8 v16; // bl
  _DWORD *v17; // r14
  PVOID v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rsi
  void *v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  struct DWMSPRITE *v29; // [rsp+70h] [rbp-9h] BYREF
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  void *v31; // [rsp+80h] [rbp+7h] BYREF
  __int64 v32[8]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+D8h] [rbp+5Fh] BYREF
  unsigned int *v34; // [rsp+F0h] [rbp+77h]

  v34 = a4;
  v33 = a1;
  v7 = 0;
  v8 = gdwDwmResizeOptimizationOptions & 1;
  v9 = gdwDwmResizeOptimizationOptions & 2;
  v32[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v33, v10, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v29, a2);
    v12 = v29;
    if ( v29 )
    {
      v13 = (__int64 *)*((_QWORD *)v29 + 21);
      if ( v13 && (v14 = v13[23]) != 0 )
        v15 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v14);
      else
        v15 = 0LL;
      if ( !v15 || (v16 = 1, !(unsigned int)SURFACE::bRedirectionBitmap(v15)) )
        v16 = 0;
      if ( v8 && v16 || a3 && v9 )
      {
        if ( *((_DWORD *)v12 + 29) )
          CheckAndProcessWindowResizeComplete(v12, 1LL, 0LL, v11);
        v17 = (_DWORD *)((char *)v12 + 124);
        *((_DWORD *)v12 + 30) = v16;
        *((_DWORD *)v12 + 29) = 1;
        *((_DWORD *)v12 + 31) = 0;
        v12 = v29;
        *((_QWORD *)v29 + 18) = MEMORY[0xFFFFF78000000014];
        if ( a3 && v9 )
        {
          Object = 0LL;
          if ( (int)DCompositionCreateSynchronizationObject(&Object) >= 0 )
          {
            v18 = Object;
            v31 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v31) < 0 )
            {
              ObfDereferenceObject(v18);
            }
            else
            {
              *((_QWORD *)v12 + 13) = v31;
              *((_QWORD *)v12 + 12) = v18;
              *v17 = 1;
              v23 = *(_QWORD *)v12;
              *((_DWORD *)v12 + 32) = 1;
              v24 = *v13;
              v25 = (void *)UserReferenceDwmApiPort(v20, v19, v21, v22);
              DwmAsyncUpdateSprite(v25, v23, v24, 256, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v26 = gdwDwmResizeTimeoutModern;
          v27 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v26 = gdwDwmResizeTimeoutGdi;
          v27 = gdwDwmResizeOptimizationOptions & 4;
        }
        v7 = 1;
        *v34 = v27;
        *a5 = v26;
      }
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v33);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v32);
  return v7;
}
