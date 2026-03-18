/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017530 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BD60 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0024860 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C00248D0 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0042B7C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0043C5C (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259104 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C025A164 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
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
  struct _SLIST_ENTRY *v12; // r13
  HWND v13; // rbx
  unsigned int *v14; // r12
  __int64 v15; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // edi
  SIZE_T v22; // rax
  SIZE_T v23; // rax
  struct DXGCONTEXT **v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // edi
  DXGDEVICE *v27; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v30; // rax
  struct DXGGLOBAL *Global; // rax
  char *v32; // rbx
  PSLIST_ENTRY v33; // rdi
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, __int64, __int64, char *); // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _SLIST_ENTRY v48; // xmm0
  unsigned int v49; // eax
  __int64 v50; // r8
  struct DXGCONTEXT **v51; // rbx
  struct DXGPROCESS *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct DXGGLOBAL *v55; // rax
  union _SLIST_HEADER *v56; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v57; // rdi
  struct _SLIST_ENTRY *v58; // rdi
  __int64 v59; // r13
  __int64 Next_low; // rdx
  unsigned int *v61; // rdi
  __int64 v62; // rdx
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  int v67; // [rsp+50h] [rbp-B0h]
  unsigned int v68; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h]
  DXGADAPTERSTOPRESETLOCKSHARED *v71; // [rsp+68h] [rbp-98h]
  struct _SLIST_ENTRY *v72; // [rsp+70h] [rbp-90h]
  void *v73; // [rsp+78h] [rbp-88h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v74[2]; // [rsp+80h] [rbp-80h] BYREF
  HWND v75; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT **v76; // [rsp+98h] [rbp-68h]
  __int128 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  __int128 v80; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-18h]
  struct _SLIST_ENTRY v85; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v86[2]; // [rsp+100h] [rbp+0h] BYREF

  v8 = a6;
  v71 = a5;
  v76 = a8;
  v67 = a3;
  v11 = 0;
  v85.Next = (struct _SLIST_ENTRY *)a2;
  if ( a2 < 0 )
  {
    v74[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v12 = 0LL;
    v13 = (HWND)HIDWORD(a2);
    v83 = 0LL;
    LODWORD(v13) = HIDWORD(a2) & 0x7FFFFFFF;
    v84 = 0LL;
    v14 = 0LL;
    v86[0] = 0LL;
    v86[1] = 0LL;
    v15 = *((_QWORD *)this + 2);
    v73 = 0LL;
    v69 = 0LL;
    v75 = v13;
    v70 = *(_QWORD *)(v15 + 1728);
    v65 = 0;
    v63 = 0;
    v66 = 0;
    v72 = 0LL;
    v68 = 0;
    v64 = 0;
    Current = DXGPROCESS::GetCurrent(0LL, v70);
    v17 = *((_QWORD *)this + 2);
    v18 = *((_QWORD *)Current + 12);
    if ( v70 )
      v19 = v70;
    else
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
    v79 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 96LL);
    v77 = 0LL;
    v78 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    v82 = v19;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v71);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v77, v13, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v18 + 232))(v77, &v73);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v18 + 72))(v77, &v83) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v18 + 360))(v75, v86) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v18 + 312))(v77, &v69) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v77);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v80);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v71);
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
        v22 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v22 = -1LL;
        v12 = (struct _SLIST_ENTRY *)operator new[](v22, 0x4B677844u, PagedPool);
        v72 = v12;
        if ( !v12 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v12, 0, 4LL * a6);
        v23 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v23 = -1LL;
        v14 = (unsigned int *)operator new[](v23, 0x4B677844u, PagedPool);
        if ( !v14 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v14, 0, 4LL * a6);
      }
      v24 = v76;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v74[0],
              (struct COREDEVICEACCESS *)a4,
              &v65,
              a6,
              v76,
              (unsigned int *)v12,
              &v68);
      if ( v11 >= 0 )
      {
        if ( v73
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v73,
                       (struct COREDEVICEACCESS *)a4,
                       &v66,
                       a6,
                       v24,
                       v14,
                       &v64),
               v11 >= 0)
            ? (v25 = v66)
            : (v25 = 0, v11 = 0),
              (v63 = v25) != 0) )
        {
          if ( !a6 )
          {
            v26 = v64;
            if ( v64 > 1 )
            {
              v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 284LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v27, v67);
                if ( VistaBltStubInfo )
                {
                  if ( v67 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v85.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v26 - 1;
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
            goto LABEL_47;
          }
        }
        else if ( !a6 )
        {
LABEL_47:
          v30 = *((_QWORD *)this + 2);
          v74[0] = 0LL;
          v74[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v30 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v74);
          if ( !v74[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v83) = v69 + v83;
            HIDWORD(v83) += HIDWORD(v69);
            LODWORD(v84) = v69 + v84;
            HIDWORD(v84) += HIDWORD(v69);
            LODWORD(v85.Next) = v83 - LODWORD(v86[0]);
            HIDWORD(v85.Next) = HIDWORD(v83) - HIDWORD(v86[0]);
            *((_DWORD *)&v85.Next + 2) = v84 - LODWORD(v86[0]);
            *((_DWORD *)&v85.Next + 3) = HIDWORD(v84) - HIDWORD(v86[0]);
            Global = DXGGLOBAL::GetGlobal(
                       (unsigned int)(v84 - LODWORD(v86[0])),
                       (unsigned int)(HIDWORD(v83) - HIDWORD(v86[0])));
            v32 = (char *)Global + 768;
            ++*((_DWORD *)Global + 197);
            v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
            if ( v33
              || (v34 = *((unsigned int *)v32 + 11),
                  v35 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v32 + 6),
                  v36 = *((unsigned int *)v32 + 10),
                  v37 = *((unsigned int *)v32 + 9),
                  ++*((_DWORD *)v32 + 6),
                  (v33 = (PSLIST_ENTRY)v35(v37, v34, v36, v32)) != 0LL) )
            {
              v43 = v70;
              v44 = *((_QWORD *)this + 2);
              if ( !v70 )
                v43 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL);
              v45 = *(_QWORD *)(*(_QWORD *)(v44 + 40) + 96LL);
              v81 = 0LL;
              v79 = v45;
              v82 = v43;
              v77 = 0LL;
              v78 = 0LL;
              v80 = 0LL;
              memset(v33, 0, 0x5F8uLL);
              v47 = *(unsigned int *)(*((_QWORD *)this + 2) + 332LL);
              LODWORD(v33->Next) = v47;
              LODWORD(v33->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v33->Next + 1) = v75;
              HIDWORD(v33[1].Next) = v65;
              *((_DWORD *)&v33[1].Next + 2) = v63;
              LODWORD(v33[1].Next) = 0;
              v48 = v85;
              v33[5].Next = 0LL;
              *((_QWORD *)&v33[4].Next + 1) = &v85;
              v49 = *(_DWORD *)(&v33[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v33[4].Next) = 1;
              *((_DWORD *)&v33[22].Next + 2) = 3;
              *((_DWORD *)&v33[5].Next + 2) = v49 | 0x10081;
              v33[3] = v48;
              v33[24].Next = (struct _SLIST_ENTRY *)v73;
              *((_QWORD *)&v33[24].Next + 1) = 0LL;
              *((_DWORD *)&v33[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v47 = (__int64)a7;
                v46 = (char *)v33 - (char *)a7;
                v50 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v46 + v47 + 96) = *(_DWORD *)v47;
                  v47 += 4LL;
                  --v50;
                }
                while ( v50 );
              }
              v51 = v76;
              *((_QWORD *)&v33[93].Next + 1) = v76;
              v33[91].Next = v12;
              *((_QWORD *)&v33[91].Next + 1) = v14;
              *((_BYTE *)&v33[94].Next + 8) = 1;
              v52 = DXGPROCESS::GetCurrent(v47, v46);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v33, v52);
              v11 = DXGCONTEXT::Present(
                      this,
                      (struct _D3DKMT_PRESENT *)v33,
                      (struct COREDEVICEACCESS *)a4,
                      v71,
                      (struct CWin32kLocks *)&v77,
                      v51,
                      v74[0]);
              v55 = DXGGLOBAL::GetGlobal(v54, v53);
              v56 = (union _SLIST_HEADER *)((char *)v55 + 768);
              ++*((_DWORD *)v55 + 199);
              if ( ExQueryDepthSList((PSLIST_HEADER)v55 + 48) < *((_WORD *)v55 + 392) )
              {
                ExpInterlockedPushEntrySList(v56, v33);
              }
              else
              {
                ++LODWORD(v56[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v56[3].Region)(v33, v56);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v57 = v71;
              if ( *((_BYTE *)v71 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v71);
              CWin32kLocks::Unlock((CWin32kLocks *)&v77);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v80);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v57);
              if ( (int)COREDEVICEACCESS::AcquireShared((__int64)a4, 0xFFFFFFFF, 0LL) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((__int64)a4);
              }
            }
            else
            {
              v42 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
              *(_QWORD *)(v42 + 24) = 5896LL;
              WdLogEvent5_WdLowResource(v42);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v74);
          v12 = v72;
          goto LABEL_69;
        }
        if ( v68 <= 1 && v64 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v12);
          operator delete[](v14);
          v12 = 0LL;
          v72 = 0LL;
          v14 = 0LL;
        }
        goto LABEL_47;
      }
    }
LABEL_69:
    if ( v65 )
      DXGCONTEXT::DestroyAllocation(this, v65, (struct COREDEVICEACCESS *)a4);
    if ( v63 )
      DXGCONTEXT::DestroyAllocation(this, v63, (struct COREDEVICEACCESS *)a4);
LABEL_73:
    if ( v12 )
    {
      if ( (_DWORD)v8 )
      {
        v58 = v12;
        v59 = (unsigned int)v8;
        do
        {
          Next_low = LODWORD(v58->Next);
          if ( (_DWORD)Next_low )
            DXGCONTEXT::DestroyAllocation(this, Next_low, (struct COREDEVICEACCESS *)a4);
          v58 = (struct _SLIST_ENTRY *)((char *)v58 + 4);
          --v59;
        }
        while ( v59 );
        v12 = v72;
      }
      operator delete[](v12);
    }
    if ( v14 )
    {
      if ( (_DWORD)v8 )
      {
        v61 = v14;
        do
        {
          v62 = *v61;
          if ( (_DWORD)v62 )
            DXGCONTEXT::DestroyAllocation(this, v62, (struct COREDEVICEACCESS *)a4);
          ++v61;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v14);
    }
  }
  return (unsigned int)v11;
}
