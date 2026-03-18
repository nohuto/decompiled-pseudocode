/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C025A164
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000C3A4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0DB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F1224 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // r13d
  SIZE_T v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // r14d
  int v25; // edi
  struct DXGDEVICE *v26; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v34; // rcx
  struct DXGPROCESS *v35; // r15
  __int64 v36; // rax
  _DWORD *v37; // r12
  char *v38; // r14
  unsigned int v39; // ebx
  __int64 v40; // rcx
  const GUID *v41; // r8
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct _EX_RUNDOWN_REF *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _EX_RUNDOWN_REF *v51; // rbx
  __int64 v52; // rax
  unsigned int Count; // r14d
  int v54; // r15d
  unsigned int v55; // r14d
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // rdx
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v67; // [rsp+20h] [rbp-E0h]
  int v68; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v69; // [rsp+50h] [rbp-B0h] BYREF
  int v70; // [rsp+58h] [rbp-A8h]
  int v71; // [rsp+5Ch] [rbp-A4h]
  void *v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  void *v74; // [rsp+70h] [rbp-90h]
  void *v75; // [rsp+78h] [rbp-88h]
  void *v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  unsigned int *v81; // [rsp+A8h] [rbp-58h]
  unsigned int *v82; // [rsp+B0h] [rbp-50h]
  char *v83; // [rsp+B8h] [rbp-48h]
  struct DXGPROCESS *v84; // [rsp+C0h] [rbp-40h]
  unsigned int *v85; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v86[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v87[16]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v88[14]; // [rsp+100h] [rbp+0h] BYREF

  v82 = a7;
  v8 = (unsigned int)a2;
  v73 = (__int64)a3;
  v81 = a4;
  v85 = a8;
  v74 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  memset(v86, 0, sizeof(v86));
  v10 = *((_QWORD *)this + 2);
  HIDWORD(v88[1]) = 0;
  HIDWORD(v88[4]) = 0;
  HIDWORD(v88[6]) = 0;
  LODWORD(v86[0]) = *(_DWORD *)(v10 + 332);
  HIDWORD(v88[8]) = 0;
  HIDWORD(v86[0]) = v8;
  LODWORD(v13) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, v86, v8);
  if ( (int)v13 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdWarning(v15);
    goto LABEL_56;
  }
  v16 = HIDWORD(v86[3]);
  v17 = 80LL * HIDWORD(v86[3]);
  if ( !is_mul_ok(HIDWORD(v86[3]), 0x50uLL) )
    v17 = -1LL;
  v72 = operator new[](v17, 0x4B677844u, PagedPool);
  if ( !v72 )
  {
LABEL_7:
    LODWORD(v13) = -1073741670;
    goto LABEL_56;
  }
  v20 = HIDWORD(v86[2]);
  if ( HIDWORD(v86[2]) && (v74 = operator new[](HIDWORD(v86[2]), 0x4B677844u, PagedPool)) == 0LL
    || (v24 = v86[3]) != 0 && (v75 = operator new[](LODWORD(v86[3]), 0x4B677844u, PagedPool)) == 0LL
    || (v25 = v86[2]) != 0 && (v76 = operator new[](LODWORD(v86[2]), 0x4B677844u, PagedPool)) == 0LL )
  {
    v23 = WdLogNewEntry5_WdLowResource(v19, v18, v21, v22);
    *(_QWORD *)(v23 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v23);
    goto LABEL_7;
  }
  v26 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  HIDWORD(v88[0]) = v8;
  LODWORD(v88[1]) = v16;
  LODWORD(v88[8]) = v20;
  LODWORD(v88[0]) = *((_DWORD *)v26 + 83);
  v88[2] = v72;
  v88[7] = v74;
  v88[5] = v75;
  v88[3] = v76;
  LODWORD(v88[6]) = v24;
  LODWORD(v88[4]) = v25;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v19, v18);
  v29 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v26,
          (__int64)v88,
          v8,
          v28,
          0,
          (struct COREDEVICEACCESS *)v73,
          v68,
          CurrentProcess,
          0LL,
          0LL);
  v13 = v29;
  if ( v29 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v15 + 24) = v13;
    goto LABEL_3;
  }
  Current = DXGPROCESS::GetCurrent(v31, v30);
  v34 = *((_QWORD *)this + 2);
  v35 = Current;
  v84 = Current;
  LODWORD(v13) = -1073741275;
  v36 = 0LL;
  v71 = 0;
  v77 = *(_QWORD *)(v34 + 16);
  if ( !v16 )
    goto LABEL_56;
  v37 = v72;
  v38 = (char *)v35 + 184;
  v83 = (char *)v35 + 184;
  while ( 1 )
  {
    v80 = 80 * v36;
    v39 = v37[20 * v36];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v38, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v42 = *((_DWORD *)v38 + 4);
        if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v40, &EventBlockThread, v41, v42);
      }
      ExAcquirePushLockSharedEx(v38, 0LL);
    }
    v43 = (v39 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 >= *((_DWORD *)v35 + 56) )
      goto LABEL_31;
    v44 = *((_QWORD *)v35 + 26);
    v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
    if ( ((v39 >> 25) & 0x60) != (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60) || (v45 & 0x2000) != 0 || (v45 & 0x1F) == 0 )
      goto LABEL_31;
    v46 = v45 & 0x1F;
    if ( (_BYTE)v46 != 5 )
    {
      v47 = WdLogNewEntry5_WdError(v46, 2LL * (unsigned int)v43, v44);
      *(_QWORD *)(v47 + 24) = 267LL;
      WdLogEvent5_WdError(v47);
LABEL_31:
      v48 = 0LL;
      goto LABEL_32;
    }
    v48 = *(struct _EX_RUNDOWN_REF **)(v44 + 16LL * (unsigned int)v43);
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v48);
    ExReleasePushLockSharedEx(v38, 0LL);
    KeLeaveCriticalRegion();
    v51 = v69;
    if ( !v69 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v52 + 24) = 6156LL;
      WdLogEvent5_WdAssertion(v52);
      v51 = v69;
    }
    Count = v51[9].Count;
    v54 = 0;
    v70 = 0;
    v55 = (Count >> 12) & 0x3F;
    if ( v55 == *((_DWORD *)this + 102) )
    {
      v70 = 1;
    }
    else
    {
      if ( !a5 )
        goto LABEL_51;
      while ( 1 )
      {
        v49 = (unsigned int)(v54 + 1);
        if ( v55 == *((_DWORD *)a6[v49] + 102) )
          break;
        ++v54;
        if ( (unsigned int)v49 >= a5 )
          goto LABEL_51;
      }
    }
    LODWORD(v13) = 0;
    if ( *((_BYTE *)this + 448) )
    {
      memset(v88, 0, 0x68uLL);
      v88[7] = 1LL;
      LOBYTE(v67) = 0;
      v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v77 + 544) + 8LL)
                                                                                              + 792LL))(
              *(_QWORD *)(v77 + 552),
              0LL,
              v51[3].Count,
              v88,
              v67,
              v55);
      v13 = v56;
      if ( v56 < 0 )
      {
LABEL_53:
        v64 = WdLogNewEntry5_WdWarning(v57, v49, v58);
        *(_QWORD *)(v64 + 24) = v13;
        WdLogEvent5_WdWarning(v64);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v69, v65);
        goto LABEL_56;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v78 = 0LL;
      v73 = 0LL;
      v60 = v77;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v77 + 544) + 8LL) + 976LL))(
        *(_QWORD *)(v59 + 648),
        v55,
        &v78,
        &v73);
      v61 = *(_QWORD *)(v60 + 544);
      v79 = 0LL;
      v62 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, char *))(*(_QWORD *)(v61 + 8) + 768LL))(
              *(_QWORD *)(v60 + 552),
              v78,
              v69 + 3,
              1LL,
              3,
              &v79,
              v87);
      v13 = v62;
      if ( v62 < 0 )
        goto LABEL_53;
      if ( v62 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v60 + 544) + 8LL) + 984LL))(
          *(_QWORD *)(v60 + 552),
          &v73,
          &v79,
          1LL);
        LODWORD(v13) = 0;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v63 = v37[(unsigned __int64)v80 / 4];
      if ( v70 )
      {
        *v81 = v63;
      }
      else
      {
        v49 = (__int64)v82;
        v82[v54] = v63;
      }
    }
LABEL_51:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v69, v49);
    v36 = (unsigned int)(v71 + 1);
    v71 = v36;
    if ( (unsigned int)v36 >= v16 )
      break;
    v38 = v83;
    v35 = v84;
  }
  if ( (int)v13 >= 0 )
    *v85 = v16;
LABEL_56:
  operator delete[](v72);
  operator delete[](v74);
  operator delete[](v75);
  operator delete[](v76);
  return (unsigned int)v13;
}
