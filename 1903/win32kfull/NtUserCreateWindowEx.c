/*
 * XREFs of NtUserCreateWindowEx @ 0x1C0094570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C016460C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagWND *v25; // r14
  __int64 v26; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // r13d
  __m128i *v40; // r15
  __m128i **v41; // rcx
  __m128i v42; // xmm0
  unsigned __int64 v43; // xmm0_8
  __int64 v44; // rax
  ULONG64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __m128i *v51; // rsi
  unsigned __int64 v52; // xmm0_8
  unsigned __int64 v53; // r8
  __m128i *v54; // rdi
  unsigned __int64 v55; // xmm0_8
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r8
  ULONG64 v58; // rdx
  unsigned __int64 v59; // r8
  __int64 *Window; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  size_t Size[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v70; // [rsp+A0h] [rbp-E8h]
  int v71; // [rsp+A4h] [rbp-E4h]
  __m128i v72; // [rsp+A8h] [rbp-E0h] BYREF
  __m128i v73; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v74[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-A8h]
  __int128 v76; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v77)(_QWORD); // [rsp+F8h] [rbp-90h]
  __int64 v78; // [rsp+108h] [rbp-80h] BYREF
  __int64 v79; // [rsp+110h] [rbp-78h]
  __int64 v80; // [rsp+118h] [rbp-70h]
  __int64 v81; // [rsp+120h] [rbp-68h] BYREF
  struct tagWND *v82; // [rsp+128h] [rbp-60h]
  __int64 v83; // [rsp+130h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+138h] [rbp-50h]
  _QWORD v85[8]; // [rsp+148h] [rbp-40h] BYREF

  Size[0] = 0LL;
  Size[1] = 0LL;
  v72 = 0uLL;
  v73 = 0uLL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v18 = 0;
  v70 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v71 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v74, v19, v20, v21);
  if ( a10 == -3 )
  {
    v25 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
    if ( ThreadWin32Thread )
    {
      v28 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v28 )
        v25 = *(struct tagWND **)(v28 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v25 = (struct tagWND *)ValidateHwnd(a10);
    if ( !v25 )
    {
LABEL_4:
      v26 = 0LL;
      goto LABEL_82;
    }
  }
  else
  {
    v25 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) != 0 )
  {
LABEL_88:
    v26 = 0LL;
    UserSetLastError(87LL, v22, v23, v24);
    goto LABEL_78;
  }
  if ( (a5 & 0xC0000000) != 0x40000000 && a11 )
  {
    v67 = ValidateHmenu(a11);
    v75 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v74, v67);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v74) )
      goto LABEL_4;
    v68 = v75;
    if ( !v75 )
      v68 = *(_QWORD *)v74[0];
    v78 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v78;
    v79 = v68;
    HMLockObject(v68);
    v70 = 1;
  }
  else
  {
    v29 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v85, a11);
    v75 = *(_QWORD *)(v29 + 16);
    SmartObjStackRefBase<tagMENU>::operator=(v74, **(_QWORD **)v29);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v85, v30, v31, v32);
  }
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
  LOWORD(v37) = 0;
  if ( *(_DWORD *)(v36 + 624) <= 0x400u )
    v37 = *(_DWORD *)(v36 + 640);
  v38 = a1 & 0x800777FF;
  if ( (v37 & 0x800) == 0 )
    v38 = a1;
  v39 = v38 & 0x8A7F77FF;
  if ( (v38 & 0x8A7F77FF) == v38 )
    v39 = v38;
  v40 = (__m128i *)a2;
  v41 = (__m128i **)MmUserProbeAddress;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a2 >= MmUserProbeAddress )
      v40 = (__m128i *)MmUserProbeAddress;
    v42 = *v40;
    Size[0] = v40->m128i_i64[0];
    v43 = _mm_srli_si128(v42, 8).m128i_u64[0];
    Size[1] = v43;
    if ( v43 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v44 = LODWORD(Size[0]);
        v58 = v43 + LODWORD(Size[0]) + 1LL;
        if ( v58 < v43 || v58 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v43 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v44 = LODWORD(Size[0]);
        v45 = v43 + LODWORD(Size[0]) + 2LL;
        if ( v45 < v43 || v45 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v47 = Win32AllocPoolWithQuota(v44 + 2, 2020897621LL);
      Size[1] = v47;
      if ( !v47 )
        ExRaiseStatus(-1073741801);
      v71 = 1;
      CurrentThread = KeGetCurrentThread();
      v50 = W32GetThreadWin32Thread((__int64)CurrentThread, v46, v48, v49);
      *(_QWORD *)&v76 = *(_QWORD *)(v50 + 16);
      *(_QWORD *)(v50 + 16) = &v76;
      *((_QWORD *)&v76 + 1) = v47;
      v77 = Win32FreePool;
      memmove((void *)Size[1], (const void *)v43, LODWORD(Size[0]));
      *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
      HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
      v41 = (__m128i **)MmUserProbeAddress;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    v40 = (__m128i *)Size;
  }
  v51 = a3;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a3 >= *v41 )
      v51 = *v41;
    v72 = *v51;
    v52 = _mm_srli_si128(v72, 8).m128i_u64[0];
    if ( v52 )
    {
      if ( v72.m128i_i32[0] > (v72.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v72.m128i_i32[1] < 0 )
      {
        v59 = v52 + v72.m128i_u32[0] + 1LL;
        if ( v59 < v52 || v59 > (unsigned __int64)*v41 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v72.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v53 = v52 + v72.m128i_u32[0] + 2LL;
        if ( v53 < v52 || v53 > (unsigned __int64)*v41 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v72.m128i_i32[0] = 0;
    }
    v51 = &v72;
  }
  v54 = a4;
  if ( a4 )
  {
    if ( a4 >= *v41 )
      v54 = *v41;
    v73 = *v54;
    v55 = _mm_srli_si128(v73, 8).m128i_u64[0];
    if ( v55 )
    {
      if ( v73.m128i_i32[0] > (v73.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v73.m128i_i32[1] < 0 )
      {
        v57 = v55 + v73.m128i_u32[0] + 1LL;
        if ( v57 < v55 || v57 > (unsigned __int64)*v41 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v73.m128i_i8[8] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v56 = v55 + v73.m128i_u32[0] + 2LL;
        if ( v56 < v55 || v56 > (unsigned __int64)*v41 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v73.m128i_i32[0] = 0;
    }
    v54 = &v73;
  }
  v81 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v81;
  v82 = v25;
  if ( v25 )
    HMLockObject(v25);
  Window = (__int64 *)xxxCreateWindowEx(
                        v39,
                        (int)v40,
                        (int)v51,
                        (int)v54,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v25,
                        (__int64)v74,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
  v26 = 0LL;
  if ( Window )
    v26 = *Window;
  ThreadUnlock1(v62, v61, v63);
  v18 = v70;
LABEL_78:
  if ( v71 )
    PopAndFreeAlwaysW32ThreadLock(&v76);
  if ( v18 )
    ThreadUnlock1(v64, v22, v23);
LABEL_82:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v74, v22, v23, v24);
  UserSessionSwitchLeaveCrit(v65);
  return v26;
}
