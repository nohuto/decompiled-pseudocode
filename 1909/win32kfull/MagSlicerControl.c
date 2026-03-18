/*
 * XREFs of MagSlicerControl @ 0x1C01D1490
 * Callers:
 *     NtUserSlicerControl @ 0x1C0235C80 (NtUserSlicerControl.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C000B7B0 (IsMessageOnlyWindow.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     MagpFindThreadContext @ 0x1C003807C (MagpFindThreadContext.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFBD4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01CFE8C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CFF90 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01D06EC (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C02718CC (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C0271D50 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, unsigned int a6)
{
  unsigned int LensContextInformation; // ebx
  __int64 v10; // r12
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  _DWORD *v14; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  __int64 v17; // r11
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  void *v23; // rax
  unsigned int *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r11
  void *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r8d
  int i; // edx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _QWORD v44[8]; // [rsp+40h] [rbp-68h] BYREF
  int v45; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v10 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v40) = IsDesktopWindow(a3);
    if ( v40 )
      return LensContextInformation;
    LOBYTE(v42) = IsMessageOnlyWindow(v41);
    if ( v42 )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v11 = a4 - 1;
  if ( !v11 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 && a6 >= 0x20 )
      {
        memset(v44, 0, 0x38uLL);
        v45 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, 1LL, 8, (__int64)v44, &v45);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v14 = a5;
          *a5 = v44[0];
          v14[1] = v44[1];
          v14[2] = HIDWORD(v44[4]);
          *((_QWORD *)v14 + 2) = v44[5];
          v14[6] = v44[6];
        }
      }
      return LensContextInformation;
    }
    if ( a6 < 0x18 )
      return LensContextInformation;
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v18 = a5[2];
    if ( v18 <= *a5 )
      return LensContextInformation;
    v19 = a5[3];
    v20 = a5[1];
    if ( v19 <= v20 )
      return LensContextInformation;
    v21 = (unsigned int)(v18 - *a5);
    HIDWORD(v22) = 0;
    if ( a5[4] > *((_DWORD *)LensContext + 62)
               / (unsigned int)v21
               * (*((_DWORD *)LensContext + 63)
                / (unsigned int)(v19 - v20)) )
      return LensContextInformation;
    LODWORD(v22) = *((_DWORD *)LensContext + 62) % (unsigned int)v21;
    v23 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 448LL) + 8LL), v22, v21);
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v23);
  }
  if ( a6 < 0x10 )
    return LensContextInformation;
  v25 = a5;
  if ( *a5 > 6u || a6 < 32 * *a5 + 16 )
    return LensContextInformation;
  v26 = MagpFindThreadContext(a1, a2);
  if ( !v26 )
    return (unsigned int)-1073741661;
  v28 = MagpFindLensContext((__int64)v26, a3, 1);
  if ( v28 )
  {
    v31 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 448LL) + 8LL), v27, v29);
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v31);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v32 = v28[32];
      if ( v32 )
      {
        Win32FreePool(v32);
        v28[32] = 0LL;
      }
      v33 = *v25;
      if ( !(_DWORD)v33 || (v10 = Win32AllocPool(24 * v33, 1735226197LL)) != 0 )
      {
        v34 = 0;
        *((_DWORD *)v28 + 60) = *v25;
        *((_DWORD *)v28 + 61) = v25[1];
        *((_DWORD *)v28 + 62) = v25[2];
        *((_DWORD *)v28 + 63) = v25[3];
        v28[32] = v10;
        for ( i = *v25; v34 < *v25; i = *v25 )
        {
          v36 = v34;
          v37 = v34++;
          v37 *= 32LL;
          v38 = 3 * v36;
          *(_QWORD *)(v10 + 8 * v38) = *(_QWORD *)((char *)v25 + v37 + 16);
          *(_QWORD *)(v10 + 8 * v38 + 8) = *(_QWORD *)((char *)v25 + v37 + 24);
          *(_QWORD *)(v10 + 8 * v38 + 16) = *(_QWORD *)((char *)v25 + v37 + 32);
        }
        v39 = *((_DWORD *)v28 + 4) | 0x10;
        if ( !i )
          v39 = v28[2] & 0xFFFFFFEF;
        *((_DWORD *)v28 + 4) = v39;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
