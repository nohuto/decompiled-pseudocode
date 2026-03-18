/*
 * XREFs of GreWindowResizeStarted @ 0x1C025470C
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C01F8F94 (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // edi
  struct PDEVOBJ *v10; // rdx
  struct DWMSPRITE *v11; // r8
  __int64 *v12; // r14
  struct DWMSPRITE *v13; // rsi
  __int64 v14; // rcx
  SURFACE *v15; // rax
  bool v16; // bl
  PVOID v17; // rbx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  void *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  PVOID Object; // [rsp+70h] [rbp-29h] BYREF
  void *v27; // [rsp+78h] [rbp-21h] BYREF
  __int64 v28; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v29[32]; // [rsp+88h] [rbp-11h] BYREF
  struct DWMSPRITE *v30; // [rsp+A8h] [rbp+Fh]
  __int64 v31; // [rsp+F8h] [rbp+5Fh] BYREF
  unsigned int *v32; // [rsp+110h] [rbp+77h]

  v32 = a4;
  v31 = a1;
  v7 = 0;
  v8 = gdwDwmResizeOptimizationOptions & 1;
  v9 = gdwDwmResizeOptimizationOptions & 2;
  v28 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v31, v10, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v29, a2);
    v11 = v30;
    if ( v30 )
    {
      v12 = (__int64 *)*((_QWORD *)v30 + 21);
      v13 = v30;
      if ( v12 && (v14 = v12[23]) != 0 )
      {
        v15 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v14);
        v11 = v30;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = v15 && (unsigned int)SURFACE::bRedirectionBitmap(v15);
      if ( v8 && v16 || a3 && v9 )
      {
        v7 = 1;
        if ( *((int *)v13 + 29) >= 1 )
          CheckAndProcessWindowResizeComplete(v13, 1, 0LL);
        *((_DWORD *)v13 + 29) = v16 + 1;
        *((_DWORD *)v13 + 30) = 0;
        *((_QWORD *)v13 + 18) = MEMORY[0xFFFFF78000000014];
        if ( a3 && v9 )
        {
          Object = 0LL;
          if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
          {
            v17 = Object;
            v27 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v27) < 0 )
            {
              ObfDereferenceObject(v17);
            }
            else
            {
              v19 = v27;
              *((_QWORD *)v13 + 12) = v17;
              *((_QWORD *)v13 + 13) = v19;
              *((_DWORD *)v13 + 30) = 1;
              *((_DWORD *)v13 + 31) = 1;
              v20 = *v12;
              v21 = *(_QWORD *)v13;
              v22 = (void *)UserReferenceDwmApiPort(v18);
              DwmAsyncUpdateSprite(v22, v21, v20, 256, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v23 = gdwDwmResizeTimeoutModern;
          v24 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v23 = gdwDwmResizeTimeoutGdi;
          v24 = gdwDwmResizeOptimizationOptions & 4;
        }
        v11 = v30;
        *v32 = v24;
        *a5 = v23;
      }
      if ( v11 )
        _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
    }
    v30 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v29);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v31);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  return v7;
}
