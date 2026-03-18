/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0225910
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F2090 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
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
  __int64 v21; // rax
  int v22; // r14d
  int v23; // edi
  DXGDEVICE *v24; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v32; // rcx
  struct DXGPROCESS *v33; // r14
  __int64 v34; // rax
  _DWORD *v35; // r12
  DXGPUSHLOCK *v36; // r15
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rdx
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rbx
  __int64 v46; // rax
  unsigned int Count; // r14d
  int v48; // r15d
  unsigned int v49; // r14d
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r10
  __int64 v55; // rbx
  __int64 v56; // rdx
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  unsigned int v63; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+50h] [rbp-B0h] BYREF
  int v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+5Ch] [rbp-A4h]
  void *v67; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v68; // [rsp+68h] [rbp-98h] BYREF
  void *v69; // [rsp+70h] [rbp-90h]
  void *v70; // [rsp+78h] [rbp-88h]
  void *v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h]
  __int64 v73; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-60h]
  unsigned int *v76; // [rsp+A8h] [rbp-58h]
  unsigned int *v77; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *v78; // [rsp+B8h] [rbp-48h]
  DXGPUSHLOCK *i; // [rsp+C0h] [rbp-40h]
  unsigned int *v80; // [rsp+C8h] [rbp-38h]
  SIZE_T v81[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v82[16]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v83[14]; // [rsp+100h] [rbp+0h] BYREF

  v8 = (unsigned int)a2;
  v69 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v77 = a7;
  v68 = a3;
  v76 = a4;
  v80 = a8;
  memset(v81, 0, sizeof(v81));
  memset(v83, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  HIDWORD(v81[0]) = v8;
  LODWORD(v81[0]) = *(_DWORD *)(v10 + 332);
  LODWORD(v13) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, v81, v8);
  if ( (int)v13 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdWarning(v15);
    goto LABEL_50;
  }
  v16 = HIDWORD(v81[3]);
  v17 = 80LL * HIDWORD(v81[3]);
  if ( !is_mul_ok(HIDWORD(v81[3]), 0x50uLL) )
    v17 = -1LL;
  v67 = operator new(v17, 0x4B677844u, PagedPool);
  if ( !v67 )
  {
LABEL_7:
    LODWORD(v13) = -1073741670;
    goto LABEL_50;
  }
  v20 = HIDWORD(v81[2]);
  if ( HIDWORD(v81[2]) && (v69 = operator new(HIDWORD(v81[2]), 0x4B677844u, PagedPool)) == 0LL
    || (v22 = v81[3]) != 0 && (v70 = operator new(LODWORD(v81[3]), 0x4B677844u, PagedPool)) == 0LL
    || (v23 = v81[2]) != 0 && (v71 = operator new(LODWORD(v81[2]), 0x4B677844u, PagedPool)) == 0LL )
  {
    v21 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v21);
    goto LABEL_7;
  }
  v24 = (DXGDEVICE *)*((_QWORD *)this + 2);
  HIDWORD(v83[0]) = v8;
  LODWORD(v83[1]) = v16;
  LODWORD(v83[8]) = v20;
  LODWORD(v83[0]) = *((_DWORD *)v24 + 83);
  v83[2] = v67;
  v83[7] = v69;
  v83[5] = v70;
  v83[3] = v71;
  LODWORD(v83[6]) = v22;
  LODWORD(v83[4]) = v23;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v19, v18);
  v27 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v24,
          (__int64)v83,
          v8,
          v26,
          0,
          (PERESOURCE **)v68,
          v63,
          CurrentProcess,
          0LL,
          0LL);
  v13 = v27;
  if ( v27 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v15 + 24) = v13;
    goto LABEL_3;
  }
  Current = DXGPROCESS::GetCurrent();
  v32 = *((_QWORD *)this + 2);
  v33 = Current;
  v78 = Current;
  LODWORD(v13) = -1073741275;
  v34 = 0LL;
  v66 = 0;
  v72 = *(_QWORD *)(v32 + 16);
  if ( !v16 )
    goto LABEL_50;
  v35 = v67;
  v36 = (struct DXGPROCESS *)((char *)v33 + 208);
  for ( i = (struct DXGPROCESS *)((char *)v33 + 208); ; v36 = i )
  {
    v75 = 80 * v34;
    v37 = v35[20 * v34];
    DXGPUSHLOCK::AcquireShared(v36);
    v38 = (v37 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 >= *((_DWORD *)v33 + 62) )
      goto LABEL_25;
    v39 = *((_QWORD *)v33 + 29);
    v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
    if ( ((v37 >> 25) & 0x60) != (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) || (v40 & 0x2000) != 0 || (v40 & 0x1F) == 0 )
      goto LABEL_25;
    v41 = v40 & 0x1F;
    if ( (_BYTE)v41 != 5 )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = 316LL;
      WdLogEvent5_WdError(v42);
LABEL_25:
      v43 = 0LL;
      goto LABEL_26;
    }
    v43 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * (unsigned int)v38);
LABEL_26:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64, v43);
    ExReleasePushLockSharedEx(v36, 0LL);
    KeLeaveCriticalRegion();
    v45 = v64;
    if ( !v64 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v46 + 24) = 5997LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = v64;
    }
    Count = v45[9].Count;
    v48 = 0;
    v65 = 0;
    v49 = (Count >> 12) & 0x3F;
    if ( v49 == *((_DWORD *)this + 98) )
    {
      v65 = 1;
    }
    else
    {
      if ( !a5 )
        goto LABEL_45;
      while ( 1 )
      {
        v59 = (unsigned int)(v48 + 1);
        if ( v49 == *((_DWORD *)a6[v59] + 98) )
          break;
        ++v48;
        if ( (unsigned int)v59 >= a5 )
          goto LABEL_45;
      }
    }
    LODWORD(v13) = 0;
    if ( *((_BYTE *)this + 432) )
    {
      memset(v83, 0, 0x68uLL);
      v83[7] = 1LL;
      LOBYTE(v62) = 0;
      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v72 + 544) + 8LL) + 792LL))(
              *(_QWORD *)(v72 + 552),
              0LL,
              v45[3].Count,
              v83,
              v62,
              v49);
      v13 = v50;
      if ( v50 < 0 )
      {
LABEL_47:
        v60 = WdLogNewEntry5_WdWarning(v52, v51, v53);
        *(_QWORD *)(v60 + 24) = v13;
        WdLogEvent5_WdWarning(v60);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64);
        goto LABEL_50;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v73 = 0LL;
      v68 = 0LL;
      v55 = v72;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v72 + 544)
                                                                                                + 8LL)
                                                                                    + 976LL))(
        *(_QWORD *)(v54 + 648),
        v49,
        &v73,
        &v68);
      v56 = *(_QWORD *)(v55 + 544);
      v74 = 0LL;
      v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(v56 + 8) + 768LL))(
              *(_QWORD *)(v55 + 552),
              v73,
              v64 + 3,
              1LL,
              3,
              &v74,
              v82);
      v13 = v57;
      if ( v57 < 0 )
        goto LABEL_47;
      if ( v57 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v55 + 544) + 8LL)
                                                                                       + 984LL))(
          *(_QWORD *)(v55 + 552),
          &v68,
          &v74,
          1LL);
        LODWORD(v13) = 0;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v58 = v35[(unsigned __int64)v75 / 4];
      if ( v65 )
        *v76 = v58;
      else
        v77[v48] = v58;
    }
LABEL_45:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v64);
    v34 = (unsigned int)(v66 + 1);
    v66 = v34;
    if ( (unsigned int)v34 >= v16 )
      break;
    v33 = v78;
  }
  if ( (int)v13 >= 0 )
    *v80 = v16;
LABEL_50:
  operator delete[](v67);
  operator delete[](v69);
  operator delete[](v70);
  operator delete[](v71);
  return (unsigned int)v13;
}
