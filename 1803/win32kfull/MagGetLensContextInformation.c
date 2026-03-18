/*
 * XREFs of MagGetLensContextInformation @ 0x1C019B440
 * Callers:
 *     MagSlicerControl @ 0x1C019C834 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C01F21E0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     MagpFindThreadContext @ 0x1C0035C5C (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C019B0B4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C01C8920 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0241AE8 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  unsigned int updated; // ebx
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  int v17; // r11d
  __int64 *v18; // rbp
  unsigned int v19; // eax
  int v20; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r13
  void *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  void *v34; // rdi
  void *v35; // rcx
  unsigned int *v36; // rax
  unsigned int *v37; // r11
  int v38; // ecx
  __int64 v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rax
  __int64 *v45; // r8
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  int v49; // r9d
  __int64 v50; // r10
  __int64 v51; // rdx
  __int64 *v52; // rax
  int v53; // eax
  __int64 *v54; // rax
  __int64 *LensContext; // rax
  __int64 v56; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v57[3]; // [rsp+58h] [rbp-40h] BYREF

  updated = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 224LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return updated;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v54 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 224LL)) == 0LL )
      {
        v54 = MagpFindLensContext(v11, a3, v10);
        if ( !v54 )
          return updated;
      }
      if ( (v54[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v54 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v54 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C031FDD8;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v52 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 232LL)) == 0LL )
      {
        v52 = MagpFindLensContext(v11, a3, v10);
        if ( !v52 )
          return updated;
      }
      if ( (v52[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v52 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v52 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v52 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v52 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v52 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v52 + 25);
        v53 = *((_DWORD *)v52 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C031FE00;
        *(_OWORD *)(a6 + 32) = xmmword_1C031FE10;
        *(_OWORD *)(a6 + 48) = xmmword_1C031FE20;
        *(_OWORD *)(a6 + 64) = xmmword_1C031FE30;
        *(_OWORD *)(a6 + 80) = xmmword_1C031FE40;
        v53 = dword_1C031FE50;
      }
      *(_DWORD *)(a6 + 96) = v53;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v44 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v45 = v44;
      if ( !v44 )
        return updated;
      v46 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v47 = *((_DWORD *)v44 + 56);
        *(_DWORD *)a6 = v47;
        v48 = *((_DWORD *)v44 + 57);
        *(_DWORD *)(a6 + 4) = v48;
        v49 = v48 + v47;
        v50 = (unsigned int)(v48 + v47);
        if ( (unsigned int)(v46 - 8) >= (unsigned __int64)(8 * v50) )
        {
          if ( v49 )
          {
            v51 = 0LL;
            do
            {
              *(_QWORD *)(v51 + a6 + 8) = *(_QWORD *)(v51 + v45[29]);
              v51 += 8LL;
              --v50;
            }
            while ( v50 );
          }
          *a7 = 8 * v49 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v36 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v37 = v36;
      if ( !v36 )
        return updated;
      v38 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v39 = v36[60];
        *(_DWORD *)a6 = v39;
        *(_DWORD *)(a6 + 4) = v36[61];
        *(_DWORD *)(a6 + 8) = v36[62];
        *(_DWORD *)(a6 + 12) = v36[63];
        if ( (unsigned int)(v38 - 16) >= (unsigned __int64)(24 * v39) )
        {
          v40 = 0;
          if ( (_DWORD)v39 )
          {
            do
            {
              v41 = v40++;
              v42 = 3 * v41;
              v43 = *((_QWORD *)v37 + 32);
              *(_OWORD *)(a6 + 8 * v42 + 16) = *(_OWORD *)(v43 + 8 * v42);
              *(_QWORD *)(a6 + 8 * v42 + 32) = *(_QWORD *)(v43 + 8 * v42 + 16);
              LODWORD(v39) = *(_DWORD *)a6;
            }
            while ( v40 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v39 + 16;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
  }
  if ( a5 != 8 )
  {
    if ( a5 == 9 )
    {
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v14 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v14 )
        return updated;
      *(_DWORD *)a6 = 0;
      *(_DWORD *)a6 = (v14[2] & 0x40) != 0;
    }
    else
    {
      if ( a5 != 10 )
        return updated;
      if ( !a3 )
        return updated;
      v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v13 )
        return updated;
      *(_DWORD *)a6 = *((_DWORD *)v13 + 66);
    }
    return 0;
  }
  LODWORD(v56) = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v18 = v15;
  if ( !v15 )
    return updated;
  v19 = *((_DWORD *)v15 + 4);
  v20 = (v19 >> 6) & 1;
  if ( (v19 & 0x20) != 0 || !*((_DWORD *)v18 + 60) )
  {
    v30 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v18 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v18 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v18 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v18 + 63);
LABEL_44:
    if ( (*((_DWORD *)v18 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v30 + 48) = v17;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v57[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v57;
  v57[1] = a3;
  _InterlockedAdd((volatile signed __int32 *)(a3 + 8), 1u);
  v24 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v25 = (void *)ReferenceDwmApiPort(v22, gdwInAtomicOperation, v23);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  v30 = a6;
  if ( v25 && v24 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v25,
                (__int64)(v18 + 4),
                *(_QWORD *)(a6 + 24),
                v20,
                (*((_DWORD *)v18 + 4) >> 7) & 1,
                a6,
                (__int64)&v56);
  }
  else
  {
    DereferenceDwmApiPort(v25);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v32, v31, v33);
  DereferenceDwmProcess(v24);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v18 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v18 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v18 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v18 + 63) )
  {
    v35 = *(void **)(a6 + 40);
    if ( v35 )
    {
      ObfDereferenceObject(v35);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v34 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v34, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v34),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v17 = v56;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
