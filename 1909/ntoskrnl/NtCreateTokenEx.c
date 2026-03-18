/*
 * XREFs of NtCreateTokenEx @ 0x14061D360
 * Callers:
 *     NtCreateToken @ 0x1408DFB60 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x1405D8424 (SeCaptureSecurityQos.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061DCF4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061DF40 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x14061E400 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x14061E41C (SeCaptureAcl.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140658B6C (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14067A0FC (SeCaptureLuidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1406D0544 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1406DE478 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        ULONG *a8,
        int *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  _QWORD *v18; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v20; // rcx
  void **v21; // r12
  void **v22; // r13
  int *v23; // r14
  __int64 v24; // r15
  __int64 result; // rax
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+28h] [rbp-190h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+30h] [rbp-188h]
  int v35; // [rsp+30h] [rbp-188h]
  char v36; // [rsp+C0h] [rbp-F8h] BYREF
  char v37; // [rsp+C1h] [rbp-F7h]
  KPROCESSOR_MODE v38; // [rsp+C2h] [rbp-F6h]
  int v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  int v41; // [rsp+D0h] [rbp-E8h] BYREF
  int v42; // [rsp+D4h] [rbp-E4h]
  int v43; // [rsp+D8h] [rbp-E0h]
  ULONG Count; // [rsp+DCh] [rbp-DCh]
  __int64 v45; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+110h] [rbp-A8h] BYREF
  PVOID P; // [rsp+118h] [rbp-A0h] BYREF
  PVOID v53; // [rsp+120h] [rbp-98h] BYREF
  __int64 v54; // [rsp+128h] [rbp-90h] BYREF
  __int64 v55; // [rsp+130h] [rbp-88h] BYREF
  __int64 v56; // [rsp+138h] [rbp-80h] BYREF
  __int64 v57; // [rsp+140h] [rbp-78h] BYREF
  int v58[2]; // [rsp+148h] [rbp-70h] BYREF
  __int64 v59; // [rsp+150h] [rbp-68h] BYREF
  int v60; // [rsp+158h] [rbp-60h]
  __int64 v61; // [rsp+160h] [rbp-58h] BYREF
  __int64 v62[10]; // [rsp+168h] [rbp-50h] BYREF

  v18 = a1;
  *(_QWORD *)v58 = 0LL;
  v36 = 0;
  v59 = 0LL;
  v60 = 0;
  v57 = 0LL;
  v56 = 0LL;
  v45 = 0LL;
  v54 = 0LL;
  Count = 0;
  v46 = 0LL;
  v40 = 0x100000000LL;
  v43 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v62[0] = 0LL;
  v62[1] = 0LL;
  v41 = 0;
  v37 = 0;
  P = 0LL;
  v53 = 0LL;
  v42 = 0;
  v51 = 0LL;
  LODWORD(v55) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v18 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v18;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (void **)a14;
    if ( a14 && (a14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (void **)a16;
    if ( a16 && (a16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a13 && (a13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (int *)a12;
    if ( a12 && (a12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a11 && (a11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a10;
    if ( a10 && (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v22 = (void **)a16;
    v21 = (void **)a14;
    v23 = (int *)a12;
    v24 = a10;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(a3, PreviousMode, &v36, (__int64)&v59);
  if ( (int)result >= 0 )
  {
    if ( v36 || a4 != 2 )
    {
      v39 = 0;
      v57 = *(_QWORD *)a5;
      v56 = *(_QWORD *)a6;
      v27 = SeCaptureSidAndAttributesArray(Src, 0, v32, v34, (__int64)&v45, (__int64)&v54);
      v39 = v27;
      if ( v27 >= 0 )
      {
        Count = *a8;
        v30 = Count;
        v27 = SeCaptureSidAndAttributesArray(a8 + 2, 0, v33, v35, (__int64)&v46, (__int64)&v40);
        v39 = v27;
        LODWORD(v40) = (-16 * v30 + v40 + 3) & 0xFFFFFFFC;
        v18 = a1;
      }
      if ( v27 >= 0 )
      {
        v43 = *a9;
        v27 = SeCaptureLuidAndAttributesArray(a9 + 1, PoolType, v33, v35, (__int64)&v47, (__int64)&v54 + 4);
        v39 = v27;
      }
      if ( v21 && v27 >= 0 )
      {
        v27 = SeCaptureSid(*v21, PoolType, 1, (__int64)&v48);
        v39 = v27;
      }
      if ( v27 >= 0 )
      {
        v27 = SeCaptureSid(*(void **)a15, PoolType, 1, (__int64)&v49);
        v39 = v27;
      }
      if ( v22 && v27 >= 0 && *v22 )
      {
        v27 = SeCaptureAcl(*v22, NonPagedPoolNx, v33, (__int64)&v50, (__int64)&v61);
        v39 = v27;
      }
      *(_OWORD *)v62 = *(_OWORD *)a17;
      if ( v23 && v27 >= 0 )
      {
        v42 = *v23;
        v27 = SeCaptureSidAndAttributesArray(v23 + 2, 0, v33, v35, (__int64)&v51, (__int64)&v55);
        v39 = v27;
      }
      if ( v24 && v27 >= 0 )
      {
        LOBYTE(v29) = PreviousMode;
        v27 = SepCaptureTokenSecurityAttributesInformation(v24, (unsigned int)&v40 + 4, 1, v29, 0, (__int64)&P);
        v39 = v27;
      }
      if ( a11 && v27 >= 0 )
      {
        LOBYTE(v29) = PreviousMode;
        v27 = SepCaptureTokenSecurityAttributesInformation(a11, (unsigned int)&v40 + 4, 1, v29, 0, (__int64)&v53);
        v39 = v27;
      }
      if ( a13 && v27 >= 0 )
      {
        v41 = *(_DWORD *)a13;
        v37 = 1;
      }
      if ( v27 >= 0 )
        v27 = SepCreateTokenEx(
                (HANDLE *)v58,
                PreviousMode,
                a2,
                a3,
                a4,
                SHIDWORD(v59),
                (__int64)&v57,
                &v56,
                (struct _SID_AND_ATTRIBUTES *)v45,
                Count,
                (struct _SID_AND_ATTRIBUTES *)v46,
                v40,
                v43,
                (char **)v47,
                (void *)v48,
                (void *)v49,
                (void *)v50,
                v62,
                (__int64)P,
                (__int64)v53,
                v42,
                v51,
                (_DWORD *)((unsigned __int64)&v41 & -(__int64)(v37 != 0)),
                0);
      if ( v45 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v45, v26);
      }
      if ( v46 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v46, v26);
      }
      if ( v47 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v47, v26);
      }
      if ( v48 )
      {
        LOBYTE(v28) = 1;
        LOBYTE(v26) = PreviousMode;
        SeReleaseSid(v48, v26, v28, v29);
      }
      if ( v49 )
      {
        LOBYTE(v28) = 1;
        LOBYTE(v26) = PreviousMode;
        SeReleaseSid(v49, v26, v28, v29);
      }
      if ( v50 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseAcl(v50, v26);
      }
      if ( v51 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v51, v26);
      }
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v53 )
        SepFreeCapturedTokenSecurityAttributesInformation(v53);
      if ( v27 >= 0 )
        *v18 = *(_QWORD *)v58;
      return (unsigned int)v27;
    }
    else
    {
      return 3221225637LL;
    }
  }
  return result;
}
