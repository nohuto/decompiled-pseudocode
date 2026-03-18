/*
 * XREFs of MagGetLensContextInformation @ 0x1C01D0120
 * Callers:
 *     MagSlicerControl @ 0x1C01D1620 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C0231610 (NtUserMagGetContextInformation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     MagpFindThreadContext @ 0x1C009734C (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFD64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C0203520 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0272F38 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r11d
  __int64 *v20; // rbp
  unsigned int v21; // eax
  int v22; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r13
  void *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  void *v33; // rdi
  void *v34; // rcx
  unsigned int *v35; // rax
  unsigned int *v36; // r11
  int v37; // ecx
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 *v44; // r8
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  int v48; // r9d
  __int64 v49; // r10
  __int64 v50; // rdx
  __int64 *v51; // rax
  int v52; // eax
  __int64 *v53; // rax
  __int64 *LensContext; // rax
  __int64 v55; // [rsp+50h] [rbp-48h] BYREF
  __int64 v56; // [rsp+58h] [rbp-40h] BYREF
  __int64 v57; // [rsp+60h] [rbp-38h]
  __int64 v58; // [rsp+68h] [rbp-30h]

  v56 = 0LL;
  updated = -1073741811;
  v57 = 0LL;
  v58 = 0LL;
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
      if ( a3 != -1 || (v53 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 224LL)) == 0LL )
      {
        v53 = MagpFindLensContext(v11, a3, v10);
        if ( !v53 )
          return updated;
      }
      if ( (v53[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v53 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v53 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C03256A8;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v51 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 448LL) + 232LL)) == 0LL )
      {
        v51 = MagpFindLensContext(v11, a3, v10);
        if ( !v51 )
          return updated;
      }
      if ( (v51[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v51 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v51 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v51 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v51 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v51 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v51 + 25);
        v52 = *((_DWORD *)v51 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C03256D0;
        *(_OWORD *)(a6 + 32) = xmmword_1C03256E0;
        *(_OWORD *)(a6 + 48) = xmmword_1C03256F0;
        *(_OWORD *)(a6 + 64) = xmmword_1C0325700;
        *(_OWORD *)(a6 + 80) = xmmword_1C0325710;
        v52 = dword_1C0325720;
      }
      *(_DWORD *)(a6 + 96) = v52;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v43 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v44 = v43;
      if ( !v43 )
        return updated;
      v45 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v46 = *((_DWORD *)v43 + 56);
        *(_DWORD *)a6 = v46;
        v47 = *((_DWORD *)v43 + 57);
        *(_DWORD *)(a6 + 4) = v47;
        v48 = v47 + v46;
        v49 = (unsigned int)(v47 + v46);
        if ( (unsigned int)(v45 - 8) >= (unsigned __int64)(8 * v49) )
        {
          if ( v48 )
          {
            v50 = 0LL;
            do
            {
              *(_QWORD *)(v50 + a6 + 8) = *(_QWORD *)(v50 + v44[29]);
              v50 += 8LL;
              --v49;
            }
            while ( v49 );
          }
          *a7 = 8 * v48 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v35 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v36 = v35;
      if ( !v35 )
        return updated;
      v37 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v38 = v35[60];
        *(_DWORD *)a6 = v38;
        *(_DWORD *)(a6 + 4) = v35[61];
        *(_DWORD *)(a6 + 8) = v35[62];
        *(_DWORD *)(a6 + 12) = v35[63];
        if ( (unsigned int)(v37 - 16) >= (unsigned __int64)(24 * v38) )
        {
          v39 = 0;
          if ( (_DWORD)v38 )
          {
            do
            {
              v40 = v39++;
              v41 = 3 * v40;
              v42 = *((_QWORD *)v36 + 32);
              *(_OWORD *)(a6 + 8 * v41 + 16) = *(_OWORD *)(v42 + 8 * v41);
              *(_QWORD *)(a6 + 8 * v41 + 32) = *(_QWORD *)(v42 + 8 * v41 + 16);
              LODWORD(v38) = *(_DWORD *)a6;
            }
            while ( v39 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v38 + 16;
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
  LODWORD(v55) = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v20 = v15;
  if ( !v15 )
    return updated;
  v21 = *((_DWORD *)v15 + 4);
  v22 = (v21 >> 6) & 1;
  if ( (v21 & 0x20) != 0 || !*((_DWORD *)v20 + 60) )
  {
    v29 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v20 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v20 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v20 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v20 + 63);
LABEL_44:
    if ( (*((_DWORD *)v20 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v29 + 48) = v19;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v56 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v56;
  v57 = a3;
  HMLockObject(a3);
  v26 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v24 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v27 = (void *)ReferenceDwmApiPort(v24, gdwInAtomicOperation, v25);
  UserSessionSwitchLeaveCrit(v28);
  v29 = a6;
  if ( v27 && v26 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v27,
                (__int64)(v20 + 4),
                *(_QWORD *)(a6 + 24),
                v22,
                (*((_DWORD *)v20 + 4) >> 7) & 1,
                a6,
                (__int64)&v55);
  }
  else
  {
    DereferenceDwmApiPort(v27);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v31, v30, v32);
  DereferenceDwmProcess(v26);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v20 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v20 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v20 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v20 + 63) )
  {
    v34 = *(void **)(a6 + 40);
    if ( v34 )
    {
      ObfDereferenceObject(v34);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v33 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v33, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v33),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v19 = v55;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
