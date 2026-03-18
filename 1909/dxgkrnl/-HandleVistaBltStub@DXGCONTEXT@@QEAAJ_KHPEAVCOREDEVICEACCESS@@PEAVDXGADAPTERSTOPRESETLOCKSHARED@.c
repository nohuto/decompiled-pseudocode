/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025990C
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C0120C10 (DxgkRender.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BDB0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00248B0 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0024920 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0042CDC (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0043DBC (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259784 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C025A800 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r15
  int v11; // ebx
  struct _SLIST_ENTRY *v12; // r12
  HWND v13; // rbx
  unsigned int *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edi
  SIZE_T v21; // rax
  SIZE_T v22; // rax
  struct DXGCONTEXT **v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // edi
  DXGDEVICE *v26; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v29; // rax
  struct DXGGLOBAL *Global; // rax
  char *v31; // rbx
  PSLIST_ENTRY v32; // rdi
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, __int64, __int64, char *); // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _SLIST_ENTRY v47; // xmm0
  unsigned int v48; // eax
  __int64 v49; // r8
  struct DXGCONTEXT **v50; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DXGGLOBAL *v54; // rax
  union _SLIST_HEADER *v55; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v56; // rdi
  struct _SLIST_ENTRY *v57; // rdi
  __int64 v58; // r12
  __int64 Next_low; // rdx
  unsigned int *v60; // rdi
  __int64 v61; // rdx
  unsigned int v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v64; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h]
  unsigned int v67; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h]
  DXGADAPTERSTOPRESETLOCKSHARED *v70; // [rsp+68h] [rbp-98h]
  unsigned int *v71; // [rsp+70h] [rbp-90h]
  void *v72; // [rsp+78h] [rbp-88h] BYREF
  struct _SLIST_ENTRY *v73; // [rsp+80h] [rbp-80h]
  struct VIDSCH_SUBMIT_DATA_BASE *v74[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h]
  HWND v76; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v77; // [rsp+A8h] [rbp-58h]
  __int128 v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-40h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  __int128 v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-8h]
  struct _SLIST_ENTRY v86; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v87[2]; // [rsp+110h] [rbp+10h] BYREF

  v8 = a6;
  v70 = a5;
  v77 = a8;
  v66 = a3;
  v11 = 0;
  v86.Next = (struct _SLIST_ENTRY *)a2;
  if ( a2 < 0 )
  {
    v74[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v12 = 0LL;
    v13 = (HWND)HIDWORD(a2);
    v84 = 0LL;
    LODWORD(v13) = HIDWORD(a2) & 0x7FFFFFFF;
    v85 = 0LL;
    v14 = 0LL;
    v87[0] = 0LL;
    v87[1] = 0LL;
    v15 = *((_QWORD *)this + 2);
    v72 = 0LL;
    v68 = 0LL;
    v76 = v13;
    v69 = *(_QWORD *)(v15 + 1728);
    v64 = 0;
    v62 = 0;
    v65 = 0;
    v73 = 0LL;
    v71 = 0LL;
    v67 = 0;
    v63 = 0;
    v16 = *((_QWORD *)DXGPROCESS::GetCurrent(0LL, v69) + 12);
    v75 = v16;
    if ( !v16 )
      return 3221225485LL;
    v18 = *((_QWORD *)this + 2);
    if ( v69 )
      v19 = v69;
    else
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
    v80 = *(_QWORD *)(*(_QWORD *)(v18 + 40) + 96LL);
    v78 = 0LL;
    v79 = 0LL;
    v81 = 0LL;
    v82 = 0LL;
    v83 = v19;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v70);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v78, v13, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v16 + 232))(v78, &v72);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v16 + 72))(v78, &v84) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v75 + 360))(v76, v87) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v75 + 312))(v78, &v68) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v78);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v81);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v70);
    v20 = COREDEVICEACCESS::AcquireShared((__int64)a4, 0xFFFFFFFF, 0LL);
    if ( v20 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)a4);
      return (unsigned int)v20;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v21 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v21 = -1LL;
        v12 = (struct _SLIST_ENTRY *)operator new[](v21, 0x4B677844u, PagedPool);
        v73 = v12;
        if ( !v12 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v12, 0, 4LL * a6);
        v22 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v22 = -1LL;
        v71 = (unsigned int *)operator new[](v22, 0x4B677844u, PagedPool);
        v14 = v71;
        if ( !v71 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v71, 0, 4LL * a6);
      }
      v23 = v77;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v74[0],
              (struct COREDEVICEACCESS *)a4,
              &v64,
              a6,
              v77,
              (unsigned int *)v12,
              &v67);
      if ( v11 >= 0 )
      {
        if ( v72
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v72,
                       (struct COREDEVICEACCESS *)a4,
                       &v65,
                       a6,
                       v23,
                       v14,
                       &v63),
               v11 >= 0)
            ? (v24 = v65)
            : (v24 = 0, v11 = 0),
              (v62 = v24) != 0) )
        {
          if ( !a6 )
          {
            v25 = v63;
            if ( v63 > 1 )
            {
              v26 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 284LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v26, v66);
                if ( VistaBltStubInfo )
                {
                  if ( v66 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v86.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v25 - 1;
                    *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
                  }
                  else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
                  {
                    *(_QWORD *)VistaBltStubInfo = 0LL;
                    *((_DWORD *)VistaBltStubInfo + 3) = 0;
                  }
                }
              }
            }
            goto LABEL_49;
          }
        }
        else if ( !a6 )
        {
LABEL_49:
          v29 = *((_QWORD *)this + 2);
          v74[0] = 0LL;
          v74[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v29 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v74);
          if ( !v74[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v84) = v68 + v84;
            HIDWORD(v84) += HIDWORD(v68);
            LODWORD(v85) = v68 + v85;
            HIDWORD(v85) += HIDWORD(v68);
            LODWORD(v86.Next) = v84 - LODWORD(v87[0]);
            HIDWORD(v86.Next) = HIDWORD(v84) - HIDWORD(v87[0]);
            *((_DWORD *)&v86.Next + 2) = v85 - LODWORD(v87[0]);
            *((_DWORD *)&v86.Next + 3) = HIDWORD(v85) - HIDWORD(v87[0]);
            Global = DXGGLOBAL::GetGlobal(
                       (unsigned int)(v85 - LODWORD(v87[0])),
                       (unsigned int)(HIDWORD(v84) - HIDWORD(v87[0])));
            v31 = (char *)Global + 768;
            ++*((_DWORD *)Global + 197);
            v32 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
            if ( v32
              || (v33 = *((unsigned int *)v31 + 11),
                  v34 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v31 + 6),
                  v35 = *((unsigned int *)v31 + 10),
                  v36 = *((unsigned int *)v31 + 9),
                  ++*((_DWORD *)v31 + 6),
                  (v32 = (PSLIST_ENTRY)v34(v36, v33, v35, v31)) != 0LL) )
            {
              v42 = v69;
              v43 = *((_QWORD *)this + 2);
              if ( !v69 )
                v42 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
              v44 = *(_QWORD *)(*(_QWORD *)(v43 + 40) + 96LL);
              v82 = 0LL;
              v80 = v44;
              v83 = v42;
              v78 = 0LL;
              v79 = 0LL;
              v81 = 0LL;
              memset(v32, 0, 0x5F8uLL);
              v46 = *(unsigned int *)(*((_QWORD *)this + 2) + 332LL);
              LODWORD(v32->Next) = v46;
              LODWORD(v32->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v32->Next + 1) = v76;
              HIDWORD(v32[1].Next) = v64;
              *((_DWORD *)&v32[1].Next + 2) = v62;
              LODWORD(v32[1].Next) = 0;
              v47 = v86;
              v32[5].Next = 0LL;
              *((_QWORD *)&v32[4].Next + 1) = &v86;
              v48 = *(_DWORD *)(&v32[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v32[4].Next) = 1;
              *((_DWORD *)&v32[22].Next + 2) = 3;
              *((_DWORD *)&v32[5].Next + 2) = v48 | 0x10081;
              v32[3] = v47;
              v32[24].Next = (struct _SLIST_ENTRY *)v72;
              *((_QWORD *)&v32[24].Next + 1) = 0LL;
              *((_DWORD *)&v32[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v46 = (__int64)a7;
                v45 = (char *)v32 - (char *)a7;
                v49 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v45 + v46 + 96) = *(_DWORD *)v46;
                  v46 += 4LL;
                  --v49;
                }
                while ( v49 );
              }
              v50 = v77;
              *((_QWORD *)&v32[93].Next + 1) = v77;
              v32[91].Next = v12;
              *((_QWORD *)&v32[91].Next + 1) = v14;
              *((_BYTE *)&v32[94].Next + 8) = 1;
              Current = DXGPROCESS::GetCurrent(v46, v45);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v32, Current);
              v11 = DXGCONTEXT::Present(
                      this,
                      (struct _D3DKMT_PRESENT *)v32,
                      (struct COREDEVICEACCESS *)a4,
                      v70,
                      (struct CWin32kLocks *)&v78,
                      v50,
                      v74[0]);
              v54 = DXGGLOBAL::GetGlobal(v53, v52);
              v55 = (union _SLIST_HEADER *)((char *)v54 + 768);
              ++*((_DWORD *)v54 + 199);
              if ( ExQueryDepthSList((PSLIST_HEADER)v54 + 48) < *((_WORD *)v54 + 392) )
              {
                ExpInterlockedPushEntrySList(v55, v32);
              }
              else
              {
                ++LODWORD(v55[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v55[3].Region)(v32, v55);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v56 = v70;
              if ( *((_BYTE *)v70 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v70);
              CWin32kLocks::Unlock((CWin32kLocks *)&v78);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v81);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v56);
              if ( (int)COREDEVICEACCESS::AcquireShared((__int64)a4, 0xFFFFFFFF, 0LL) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)a4);
              }
              v14 = v71;
            }
            else
            {
              v41 = WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
              *(_QWORD *)(v41 + 24) = 5901LL;
              WdLogEvent5_WdLowResource(v41);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v74);
          goto LABEL_72;
        }
        if ( v67 <= 1 && v63 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v12);
          operator delete[](v14);
          v12 = 0LL;
          v14 = 0LL;
          v73 = 0LL;
          v71 = 0LL;
        }
        goto LABEL_49;
      }
    }
LABEL_72:
    if ( v64 )
      DXGCONTEXT::DestroyAllocation(this, v64, (struct COREDEVICEACCESS *)a4);
    if ( v62 )
      DXGCONTEXT::DestroyAllocation(this, v62, (struct COREDEVICEACCESS *)a4);
LABEL_76:
    if ( v12 )
    {
      if ( (_DWORD)v8 )
      {
        v57 = v12;
        v58 = (unsigned int)v8;
        do
        {
          Next_low = LODWORD(v57->Next);
          if ( (_DWORD)Next_low )
            DXGCONTEXT::DestroyAllocation(this, Next_low, (struct COREDEVICEACCESS *)a4);
          v57 = (struct _SLIST_ENTRY *)((char *)v57 + 4);
          --v58;
        }
        while ( v58 );
        v12 = v73;
      }
      operator delete[](v12);
    }
    if ( v14 )
    {
      if ( (_DWORD)v8 )
      {
        v60 = v14;
        do
        {
          v61 = *v60;
          if ( (_DWORD)v61 )
            DXGCONTEXT::DestroyAllocation(this, v61, (struct COREDEVICEACCESS *)a4);
          ++v60;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v14);
    }
  }
  return (unsigned int)v11;
}
