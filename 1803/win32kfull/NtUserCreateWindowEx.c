/*
 * XREFs of NtUserCreateWindowEx @ 0x1C0022B90
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C0138ED4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
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
        int a16)
{
  int v17; // r15d
  __int64 v18; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // r12d
  __m128i *v26; // rdx
  __m128i **v27; // rcx
  unsigned __int64 v28; // xmm0_8
  __int64 v29; // rax
  ULONG64 v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // r8
  unsigned __int64 v33; // xmm0_8
  unsigned __int64 v34; // r9
  __m128i *v35; // r9
  unsigned __int64 v36; // xmm0_8
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r10
  ULONG64 v39; // rdx
  unsigned __int64 v40; // r9
  __int64 *Window; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 Size; // [rsp+90h] [rbp-F8h]
  void *Size_8; // [rsp+98h] [rbp-F0h]
  int v58; // [rsp+A4h] [rbp-E4h]
  __m128i v59; // [rsp+B0h] [rbp-D8h]
  __m128i v60; // [rsp+C0h] [rbp-C8h]
  _QWORD v61[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-A8h]
  _QWORD v63[3]; // [rsp+F8h] [rbp-90h] BYREF
  _QWORD v64[3]; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v65[24]; // [rsp+128h] [rbp-60h] BYREF
  _BYTE v66[72]; // [rsp+140h] [rbp-48h] BYREF

  v17 = 0;
  v58 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v61);
  if ( a10 == -3 )
  {
    v18 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v20 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v20 )
        v18 = *(_QWORD *)(v20 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_85;
  }
  else if ( a10 )
  {
    v18 = ValidateHwnd(a10);
    if ( !v18 )
      goto LABEL_79;
  }
  else
  {
    v18 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v21 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v65, a11);
      v62 = *(_QWORD *)(v21 + 16);
      SmartObjStackRefBase<tagMENU>::operator=(v61, **(_QWORD **)v21);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v65);
LABEL_10:
      v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
      LOWORD(v23) = 0;
      if ( *(_DWORD *)(v22 + 624) <= 0x400u )
        v23 = *(_DWORD *)(v22 + 640);
      v24 = a1 & 0x800777FF;
      if ( (v23 & 0x800) == 0 )
        v24 = a1;
      v25 = v24 & 0x8A7F77FF;
      if ( (v24 & 0x8A7F77FF) == v24 )
        v25 = v24;
      v26 = (__m128i *)a2;
      v27 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= MmUserProbeAddress )
          v26 = (__m128i *)MmUserProbeAddress;
        Size = v26->m128i_i64[0];
        v28 = _mm_srli_si128(*v26, 8).m128i_u64[0];
        if ( v28 )
        {
          if ( (unsigned int)Size > (HIDWORD(Size) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( Size < 0 )
          {
            v29 = (unsigned int)Size;
            v39 = v28 + (unsigned int)Size + 1LL;
            if ( v39 < v28 || v39 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v28 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v29 = (unsigned int)Size;
            v30 = v28 + (unsigned int)Size + 2LL;
            if ( v30 < v28 || v30 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v31 = Win32AllocPoolWithQuota(v29 + 2, 2020897621LL);
          Size_8 = (void *)v31;
          if ( !v31 )
            ExRaiseStatus(-1073741801);
          v58 = 1;
          PushW32ThreadLock(v31, v66, Win32FreePool);
          memmove(Size_8, (const void *)v28, (unsigned int)Size);
          *((_WORD *)Size_8 + ((unsigned __int64)(unsigned int)Size >> 1)) = 0;
          v27 = (__m128i **)MmUserProbeAddress;
        }
      }
      v32 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v27 )
          v32 = *v27;
        v59 = *v32;
        v33 = _mm_srli_si128(*v32, 8).m128i_u64[0];
        if ( v33 )
        {
          if ( v59.m128i_i32[0] > (v59.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v59.m128i_i32[1] < 0 )
          {
            v40 = v33 + v59.m128i_u32[0] + 1LL;
            if ( v40 < v33 || v40 > (unsigned __int64)*v27 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v59.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v34 = v33 + v59.m128i_u32[0] + 2LL;
            if ( v34 < v33 || v34 > (unsigned __int64)*v27 )
              ExRaiseAccessViolation();
          }
        }
      }
      v35 = a4;
      if ( a4 )
      {
        if ( a4 >= *v27 )
          v35 = *v27;
        v60 = *v35;
        v36 = _mm_srli_si128(*v35, 8).m128i_u64[0];
        if ( v36 )
        {
          if ( v60.m128i_i32[0] > (v60.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v60.m128i_i32[1] < 0 )
          {
            v38 = v36 + v60.m128i_u32[0] + 1LL;
            if ( v38 < v36 || v38 > (unsigned __int64)*v27 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v60.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v37 = v36 + v60.m128i_u32[0] + 2LL;
            if ( v37 < v36 || v37 > (unsigned __int64)*v27 )
              ExRaiseAccessViolation();
          }
        }
      }
      v64[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v64;
      v64[1] = v18;
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      Window = (__int64 *)xxxCreateWindowEx(v25);
      v45 = 0LL;
      if ( Window )
        v45 = *Window;
      ThreadUnlock1(v43, v42, v44);
      goto LABEL_72;
    }
    v54 = ValidateHmenu(a11);
    v62 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v61, v54);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v61) )
    {
      v55 = v62;
      if ( !v62 )
        v55 = *(_QWORD *)v61[0];
      v63[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v63;
      v63[1] = v55;
      _InterlockedIncrement((volatile signed __int32 *)(v55 + 8));
      v17 = 1;
      goto LABEL_10;
    }
LABEL_79:
    v45 = 0LL;
    goto LABEL_76;
  }
LABEL_85:
  v45 = 0LL;
  UserSetLastError(87LL);
LABEL_72:
  if ( v58 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v66);
  if ( v17 )
    ThreadUnlock1(v47, v46, v48);
LABEL_76:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v61);
  UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
  return v45;
}
