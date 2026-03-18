/*
 * XREFs of MagGetLensContextInformation @ 0x1C01BC4E0
 * Callers:
 *     MagSlicerControl @ 0x1C01BD9C0 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C02197A0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C001D364 (MagpFindThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01BC124 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C01ECC70 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0259658 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
  __int64 v23; // r13
  void *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rdi
  void *v33; // rcx
  unsigned int *v34; // rax
  unsigned int *v35; // r11
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 *v43; // r8
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // r9d
  __int64 v48; // r10
  __int64 v49; // rdx
  __int64 *v50; // rax
  int v51; // eax
  __int64 *v52; // rax
  __int64 *LensContext; // rax
  __int64 v54; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v55[3]; // [rsp+58h] [rbp-40h] BYREF

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
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
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
      if ( a3 != -1 || (v52 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
      {
        v52 = MagpFindLensContext(v11, a3, v10);
        if ( !v52 )
          return updated;
      }
      if ( (v52[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v52 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v52 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0310678;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v50 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL)) == 0LL )
      {
        v50 = MagpFindLensContext(v11, a3, v10);
        if ( !v50 )
          return updated;
      }
      if ( (v50[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v50 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v50 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v50 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v50 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v50 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v50 + 25);
        v51 = *((_DWORD *)v50 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C03106A0;
        *(_OWORD *)(a6 + 32) = xmmword_1C03106B0;
        *(_OWORD *)(a6 + 48) = xmmword_1C03106C0;
        *(_OWORD *)(a6 + 64) = xmmword_1C03106D0;
        *(_OWORD *)(a6 + 80) = xmmword_1C03106E0;
        v51 = dword_1C03106F0;
      }
      *(_DWORD *)(a6 + 96) = v51;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v42 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v43 = v42;
      if ( !v42 )
        return updated;
      v44 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v45 = *((_DWORD *)v42 + 56);
        *(_DWORD *)a6 = v45;
        v46 = *((_DWORD *)v42 + 57);
        *(_DWORD *)(a6 + 4) = v46;
        v47 = v46 + v45;
        v48 = (unsigned int)(v46 + v45);
        if ( (unsigned int)(v44 - 8) >= (unsigned __int64)(8 * v48) )
        {
          if ( v47 )
          {
            v49 = 0LL;
            do
            {
              *(_QWORD *)(v49 + a6 + 8) = *(_QWORD *)(v49 + v43[29]);
              v49 += 8LL;
              --v48;
            }
            while ( v48 );
          }
          *a7 = 8 * v47 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v34 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v35 = v34;
      if ( !v34 )
        return updated;
      v36 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v37 = v34[60];
        *(_DWORD *)a6 = v37;
        *(_DWORD *)(a6 + 4) = v34[61];
        *(_DWORD *)(a6 + 8) = v34[62];
        *(_DWORD *)(a6 + 12) = v34[63];
        if ( (unsigned int)(v36 - 16) >= (unsigned __int64)(24 * v37) )
        {
          v38 = 0;
          if ( (_DWORD)v37 )
          {
            do
            {
              v39 = v38++;
              v40 = 3 * v39;
              v41 = *((_QWORD *)v35 + 32);
              *(_OWORD *)(a6 + 8 * v40 + 16) = *(_OWORD *)(v41 + 8 * v40);
              *(_QWORD *)(a6 + 8 * v40 + 32) = *(_QWORD *)(v41 + 8 * v40 + 16);
              LODWORD(v37) = *(_DWORD *)a6;
            }
            while ( v38 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v37 + 16;
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
  LODWORD(v54) = 0;
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
    v29 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v18 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v18 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v18 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v18 + 63);
LABEL_44:
    if ( (*((_DWORD *)v18 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v29 + 48) = v17;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v55[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v55;
  v55[1] = a3;
  _InterlockedAdd((volatile signed __int32 *)(a3 + 8), 1u);
  v23 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v24 = (void *)ReferenceDwmApiPort(v22, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  v29 = a6;
  if ( v24 && v23 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v24,
                (__int64)(v18 + 4),
                *(_QWORD *)(a6 + 24),
                v20,
                (*((_DWORD *)v18 + 4) >> 7) & 1,
                a6,
                (__int64)&v54);
  }
  else
  {
    DereferenceDwmApiPort(v24);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v31, v30);
  DereferenceDwmProcess(v23);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v18 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v18 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v18 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v18 + 63) )
  {
    v33 = *(void **)(a6 + 40);
    if ( v33 )
    {
      ObfDereferenceObject(v33);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v32 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v32, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v32),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v17 = v54;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
