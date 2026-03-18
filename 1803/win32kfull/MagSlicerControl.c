/*
 * XREFs of MagSlicerControl @ 0x1C019C834
 * Callers:
 *     NtUserSlicerControl @ 0x1C01F6510 (NtUserSlicerControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0035C5C (MagpFindThreadContext.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C019B0B4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C019B344 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C019B440 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C0240D18 (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C0241154 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, unsigned int a6)
{
  unsigned int LensContextInformation; // ebx
  __int64 v10; // r12
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
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
  int i; // ecx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _DWORD v45[10]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+68h] [rbp-40h]
  int v47; // [rsp+70h] [rbp-38h]
  int v48; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v10 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v41) = IsDesktopWindow(a3);
    if ( v41 )
      return LensContextInformation;
    LOBYTE(v43) = IsMessageOnlyWindow(v42);
    if ( v43 )
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
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 && a6 >= 0x20 )
      {
        v48 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v13, 8, (__int64)v45, &v48);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v14 = a5;
          *a5 = v45[0];
          v14[1] = v45[2];
          v14[2] = v45[9];
          *((_QWORD *)v14 + 2) = v46;
          v14[6] = v47;
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
        v39 = *((_DWORD *)v28 + 4);
        if ( i )
          v40 = v39 | 0x10;
        else
          v40 = v39 & 0xFFFFFFEF;
        *((_DWORD *)v28 + 4) = v40;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
