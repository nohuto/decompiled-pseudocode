/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00352A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C0165BDC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagWND *v22; // r14
  __int64 v23; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r13d
  __m128i *v30; // r15
  __m128i **v31; // rcx
  __m128i v32; // xmm0
  unsigned __int64 v33; // xmm0_8
  __int64 v34; // rax
  ULONG64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  __m128i *v38; // rsi
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 v40; // r8
  __m128i *v41; // rdi
  unsigned __int64 v42; // xmm0_8
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r8
  ULONG64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 *Window; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v56; // rcx
  size_t Size[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v58; // [rsp+A0h] [rbp-E8h]
  int v59; // [rsp+A4h] [rbp-E4h]
  __m128i v60; // [rsp+A8h] [rbp-E0h] BYREF
  __m128i v61; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v62[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-A8h]
  __int128 v64; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v65)(_QWORD); // [rsp+F8h] [rbp-90h]
  __int64 v66; // [rsp+108h] [rbp-80h] BYREF
  __int64 v67; // [rsp+110h] [rbp-78h]
  __int64 v68; // [rsp+118h] [rbp-70h]
  __int64 v69; // [rsp+120h] [rbp-68h] BYREF
  struct tagWND *v70; // [rsp+128h] [rbp-60h]
  __int64 v71; // [rsp+130h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+138h] [rbp-50h]
  _BYTE v73[64]; // [rsp+148h] [rbp-40h] BYREF

  Size[0] = 0LL;
  Size[1] = 0LL;
  v60 = 0uLL;
  v61 = 0uLL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v18 = 0;
  v58 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v59 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v62);
  if ( a10 == -3 )
  {
    v22 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v25 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v25 )
        v22 = *(struct tagWND **)(v25 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v22 = (struct tagWND *)ValidateHwnd(a10);
    if ( !v22 )
    {
LABEL_4:
      v23 = 0LL;
      goto LABEL_82;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) != 0 )
  {
LABEL_88:
    v23 = 0LL;
    UserSetLastError(87LL, v19, v20, v21);
    goto LABEL_78;
  }
  if ( (a5 & 0xC0000000) != 0x40000000 && a11 )
  {
    ValidateHmenu();
    v63 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v62) )
      goto LABEL_4;
    v56 = v63;
    if ( !v63 )
      v56 = *(_QWORD *)v62[0];
    v66 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v66;
    v67 = v56;
    HMLockObject(v56);
    v58 = 1;
  }
  else
  {
    v63 = *(_QWORD *)(SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v73, a11) + 16);
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v73);
  }
  v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
  LOWORD(v27) = 0;
  if ( *(_DWORD *)(v26 + 624) <= 0x400u )
    v27 = *(_DWORD *)(v26 + 640);
  v28 = a1 & 0x800777FF;
  if ( (v27 & 0x800) == 0 )
    v28 = a1;
  v29 = v28 & 0x8A7F77FF;
  if ( (v28 & 0x8A7F77FF) == v28 )
    v29 = v28;
  v30 = (__m128i *)a2;
  v31 = (__m128i **)MmUserProbeAddress;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a2 >= MmUserProbeAddress )
      v30 = (__m128i *)MmUserProbeAddress;
    v32 = *v30;
    Size[0] = v30->m128i_i64[0];
    v33 = _mm_srli_si128(v32, 8).m128i_u64[0];
    Size[1] = v33;
    if ( v33 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v34 = LODWORD(Size[0]);
        v45 = v33 + LODWORD(Size[0]) + 1LL;
        if ( v45 < v33 || v45 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v33 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v34 = LODWORD(Size[0]);
        v35 = v33 + LODWORD(Size[0]) + 2LL;
        if ( v35 < v33 || v35 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v36 = Win32AllocPoolWithQuota(v34 + 2, 2020897621LL);
      Size[1] = v36;
      if ( !v36 )
        ExRaiseStatus(-1073741801);
      v59 = 1;
      CurrentThread = KeGetCurrentThread();
      v37 = W32GetThreadWin32Thread(CurrentThread);
      *(_QWORD *)&v64 = *(_QWORD *)(v37 + 16);
      *(_QWORD *)(v37 + 16) = &v64;
      *((_QWORD *)&v64 + 1) = v36;
      v65 = Win32FreePool;
      memmove((void *)Size[1], (const void *)v33, LODWORD(Size[0]));
      *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
      HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
      v31 = (__m128i **)MmUserProbeAddress;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    v30 = (__m128i *)Size;
  }
  v38 = a3;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a3 >= *v31 )
      v38 = *v31;
    v60 = *v38;
    v39 = _mm_srli_si128(v60, 8).m128i_u64[0];
    if ( v39 )
    {
      if ( v60.m128i_i32[0] > (v60.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v60.m128i_i32[1] < 0 )
      {
        v46 = v39 + v60.m128i_u32[0] + 1LL;
        if ( v46 < v39 || v46 > (unsigned __int64)*v31 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v60.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v40 = v39 + v60.m128i_u32[0] + 2LL;
        if ( v40 < v39 || v40 > (unsigned __int64)*v31 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v60.m128i_i32[0] = 0;
    }
    v38 = &v60;
  }
  v41 = a4;
  if ( a4 )
  {
    if ( a4 >= *v31 )
      v41 = *v31;
    v61 = *v41;
    v42 = _mm_srli_si128(v61, 8).m128i_u64[0];
    if ( v42 )
    {
      if ( v61.m128i_i32[0] > (v61.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v61.m128i_i32[1] < 0 )
      {
        v44 = v42 + v61.m128i_u32[0] + 1LL;
        if ( v44 < v42 || v44 > (unsigned __int64)*v31 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v61.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v43 = v42 + v61.m128i_u32[0] + 2LL;
        if ( v43 < v42 || v43 > (unsigned __int64)*v31 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v61.m128i_i32[0] = 0;
    }
    v41 = &v61;
  }
  v69 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v69;
  v70 = v22;
  if ( v22 )
    HMLockObject(v22);
  Window = (__int64 *)xxxCreateWindowEx(
                        v29,
                        (int)v30,
                        (int)v38,
                        (int)v41,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v22,
                        (__int64)v62,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
  v23 = 0LL;
  if ( Window )
    v23 = *Window;
  ThreadUnlock1(v49, v48, v50);
  v18 = v58;
LABEL_78:
  if ( v59 )
    PopAndFreeAlwaysW32ThreadLock(&v64);
  if ( v18 )
    ThreadUnlock1(v52, v51, v53);
LABEL_82:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v62);
  UserSessionSwitchLeaveCrit(v54);
  return v23;
}
