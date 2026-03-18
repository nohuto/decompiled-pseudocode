/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00685B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C015E600 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r12d
  wchar_t *v31; // rdx
  __m128i **v32; // rcx
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm0_8
  __int64 v35; // rax
  ULONG64 v36; // rdx
  __int64 v37; // rax
  __m128i *v38; // r8
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 v40; // r9
  __m128i *v41; // r9
  unsigned __int64 v42; // xmm0_8
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r10
  ULONG64 v45; // rdx
  unsigned __int64 v46; // r9
  _DWORD *Window; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v56; // rcx
  size_t Size[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v58; // [rsp+A0h] [rbp-E8h]
  int v59; // [rsp+A4h] [rbp-E4h]
  __m128i v60; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v62[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-A8h]
  _QWORD v64[3]; // [rsp+F8h] [rbp-90h] BYREF
  _QWORD v65[3]; // [rsp+110h] [rbp-78h] BYREF
  _QWORD v66[3]; // [rsp+128h] [rbp-60h] BYREF
  _BYTE v67[72]; // [rsp+140h] [rbp-48h] BYREF

  v18 = 0;
  v58 = 0;
  v59 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v62, v19);
  if ( a10 == -3 )
  {
    v22 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
    if ( ThreadWin32Thread )
    {
      v25 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v25 )
        v22 = *(_QWORD *)(v25 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v22 = ValidateHwnd(a10);
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
    UserSetLastError(87LL);
    goto LABEL_78;
  }
  if ( (a5 & 0xC0000000) != 0x40000000 && a11 )
  {
    ValidateHmenu(a11);
    v63 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v62) )
      goto LABEL_4;
    v56 = v63;
    if ( !v63 )
      v56 = *(_QWORD *)v62[0];
    v64[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v64;
    v64[1] = v56;
    _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
    v18 = 1;
    v58 = 1;
  }
  else
  {
    v63 = *(_QWORD *)(SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v66, a11) + 16);
    SmartObjStackRefBase<tagMENU>::operator=(v62);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v66, v26);
  }
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
  LOWORD(v28) = 0;
  if ( *(_DWORD *)(v27 + 632) <= 0x400u )
    v28 = *(_DWORD *)(v27 + 648);
  v29 = a1 & 0x800777FF;
  if ( (v28 & 0x800) == 0 )
    v29 = a1;
  v30 = v29 & 0x8A7F77FF;
  if ( (v29 & 0x8A7F77FF) == v29 )
    v30 = v29;
  v31 = (wchar_t *)a2;
  v32 = (__m128i **)MmUserProbeAddress;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a2 >= MmUserProbeAddress )
      v31 = (wchar_t *)MmUserProbeAddress;
    v33 = *(__m128i *)v31;
    Size[0] = *(_QWORD *)v31;
    v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
    Size[1] = v34;
    if ( v34 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v35 = LODWORD(Size[0]);
        v45 = v34 + LODWORD(Size[0]) + 1LL;
        if ( v45 < v34 || v45 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v34 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v35 = LODWORD(Size[0]);
        v36 = v34 + LODWORD(Size[0]) + 2LL;
        if ( v36 < v34 || v36 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v37 = Win32AllocPoolWithQuota(v35 + 2, 2020897621LL);
      Size[1] = v37;
      if ( !v37 )
        ExRaiseStatus(-1073741801);
      v59 = 1;
      PushW32ThreadLock(v37, v67, Win32FreePool);
      memmove((void *)Size[1], (const void *)v34, LODWORD(Size[0]));
      *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
      HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
      v32 = (__m128i **)MmUserProbeAddress;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    v31 = (wchar_t *)Size;
    a2 = (ULONG64)Size;
  }
  v38 = a3;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a3 >= *v32 )
      v38 = *v32;
    v60 = *v38;
    v39 = _mm_srli_si128(v60, 8).m128i_u64[0];
    if ( v39 )
    {
      if ( v60.m128i_i32[0] > (v60.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v60.m128i_i32[1] < 0 )
      {
        v46 = v39 + v60.m128i_u32[0] + 1LL;
        if ( v46 < v39 || v46 > (unsigned __int64)*v32 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v60.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v40 = v39 + v60.m128i_u32[0] + 2LL;
        if ( v40 < v39 || v40 > (unsigned __int64)*v32 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v60.m128i_i32[0] = 0;
    }
    v38 = &v60;
    a3 = &v60;
  }
  v41 = a4;
  if ( a4 )
  {
    if ( a4 >= *v32 )
      v41 = *v32;
    v61 = *v41;
    v42 = _mm_srli_si128(v61, 8).m128i_u64[0];
    if ( v42 )
    {
      if ( v61.m128i_i32[0] > (v61.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v61.m128i_i32[1] < 0 )
      {
        v44 = v42 + v61.m128i_u32[0] + 1LL;
        if ( v44 < v42 || v44 > (unsigned __int64)*v32 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v61.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v43 = v42 + v61.m128i_u32[0] + 2LL;
        if ( v43 < v42 || v43 > (unsigned __int64)*v32 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v61.m128i_i32[0] = 0;
    }
    v41 = &v61;
    a4 = &v61;
  }
  v65[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v65;
  v65[1] = v22;
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v41 = a4;
    v38 = a3;
    v31 = (wchar_t *)a2;
  }
  Window = xxxCreateWindowEx(
             v30,
             v31,
             (__int64)v38,
             (__int64)v41,
             a5,
             a6,
             a7,
             a8,
             a9,
             (struct tagWND *)v22,
             (__int64)v62,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17);
  v23 = 0LL;
  if ( Window )
    v23 = *(_QWORD *)Window;
  ThreadUnlock1(v49, v48);
LABEL_78:
  if ( v59 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v67, v21);
  if ( v18 )
    ThreadUnlock1(v50, v21);
LABEL_82:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v62, v21);
  UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
  return v23;
}
