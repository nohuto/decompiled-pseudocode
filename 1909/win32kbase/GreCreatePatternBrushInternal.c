/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C008CCA0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C008CC80 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000EC68 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C008CDD0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C008CEAC (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  struct SURFACE *v8; // rbx
  __int64 v9; // r8
  int IsMonochrome; // eax
  HBITMAP v11; // rdx
  __int64 v12; // rcx
  ULONG v14; // ecx
  struct HOBJ__ **v15[2]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  v7 = (struct SURFACE *)HmgShareLockCheck((unsigned int)a1, 5);
  v8 = v7;
  if ( !v7 )
  {
    v14 = 6;
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v14 = 87;
LABEL_14:
    EngSetLastError(v14);
    goto LABEL_7;
  }
  if ( hbmCreateClone(v7, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
  {
    v17 = *((_QWORD *)v8 + 16);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v17);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v15, v11, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v15[0] )
    {
      v6 = (__int64)*v15[0];
      v16 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v15);
  }
LABEL_7:
  if ( v8 )
    HmgDecrementShareReferenceCountEx(v8, 0LL);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v12);
  }
  return v6;
}
