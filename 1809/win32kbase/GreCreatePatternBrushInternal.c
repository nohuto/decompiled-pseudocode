/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C00434E0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C0095A80 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0043690 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0043910 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C0043A0C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0043A30 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int IsMonochrome; // eax
  HBITMAP v10; // rdx
  ULONG v12; // ecx
  _BYTE v13[32]; // [rsp+40h] [rbp-68h] BYREF
  struct SURFACE *v14; // [rsp+60h] [rbp-48h]
  _QWORD v15[6]; // [rsp+68h] [rbp-40h] BYREF
  int v16; // [rsp+98h] [rbp-10h]
  __int64 v17; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  SURFREF::SURFREF((SURFREF *)v13, (HSURF)a1);
  if ( !v14 )
  {
    v12 = 6;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)v14 + 28) & 0x4000000) == 0 )
  {
    v12 = 87;
LABEL_15:
    EngSetLastError(v12);
    goto LABEL_9;
  }
  if ( a3 )
  {
    v8 = 8;
    v7 = 8;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( hbmCreateClone(v14, v8, v7) )
  {
    v17 = *((_QWORD *)v14 + 16);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v17);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v15, v10, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v15[0] )
    {
      v6 = *(_QWORD *)v15[0];
      v16 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v15);
  }
LABEL_9:
  SURFREF::~SURFREF((SURFREF *)v13);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}
