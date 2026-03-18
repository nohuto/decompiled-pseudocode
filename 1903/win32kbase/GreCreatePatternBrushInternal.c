/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C0052520
 * Callers:
 *     GreCreatePatternBrush @ 0x1C00A9B10 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0052650 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0053568 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00540DC (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0054100 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  struct SURFACE *v8; // rbx
  int IsMonochrome; // eax
  HBITMAP v10; // rdx
  ULONG v12; // ecx
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  v7 = (struct SURFACE *)HmgShareLockCheck((unsigned int)a1, 5);
  v8 = v7;
  if ( !v7 )
  {
    v12 = 6;
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v12 = 87;
LABEL_14:
    EngSetLastError(v12);
    goto LABEL_7;
  }
  if ( hbmCreateClone(v7, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
  {
    v15 = *((_QWORD *)v8 + 16);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v15);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v13, v10, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v13[0] )
    {
      v6 = *(_QWORD *)v13[0];
      v14 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v13);
  }
LABEL_7:
  if ( v8 )
    HmgDecrementShareReferenceCountEx(v8, 0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}
