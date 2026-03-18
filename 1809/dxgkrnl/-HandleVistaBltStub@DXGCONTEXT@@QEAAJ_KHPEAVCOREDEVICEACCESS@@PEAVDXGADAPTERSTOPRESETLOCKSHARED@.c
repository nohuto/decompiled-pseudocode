/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24
 * Callers:
 *     DxgkRender @ 0x1C00EAB30 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001B390 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0021BC4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0021C34 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C003C450 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C003D3FC (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022489C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C0225910 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
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
  PVOID v13; // r12
  HWND v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edi
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
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _SLIST_ENTRY v43; // xmm0
  unsigned int v44; // eax
  unsigned int *v45; // rcx
  __int64 v46; // r8
  struct DXGCONTEXT **v47; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v49; // rcx
  struct DXGGLOBAL *v50; // rax
  union _SLIST_HEADER *v51; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v52; // rdi
  unsigned int *v53; // rdi
  __int64 v54; // r13
  unsigned int *v55; // rdi
  unsigned int v56; // [rsp+40h] [rbp-C0h]
  unsigned int v57; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v63; // [rsp+60h] [rbp-A0h]
  struct _SLIST_ENTRY *v64; // [rsp+68h] [rbp-98h]
  HWND v65; // [rsp+70h] [rbp-90h]
  void *v66; // [rsp+78h] [rbp-88h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v67[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT **v69; // [rsp+98h] [rbp-68h]
  __int128 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int128 v73; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-10h]
  struct _SLIST_ENTRY v79; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v80[2]; // [rsp+108h] [rbp+8h] BYREF

  v8 = a6;
  v79.Next = (struct _SLIST_ENTRY *)a2;
  v63 = a5;
  v11 = 0;
  v69 = a8;
  v60 = a3;
  if ( a2 < 0 )
  {
    v66 = 0LL;
    v12 = 0LL;
    v67[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v13 = 0LL;
    v14 = (HWND)HIDWORD(a2);
    v77 = 0LL;
    LODWORD(v14) = HIDWORD(a2) & 0x7FFFFFFF;
    v78 = 0LL;
    v80[0] = 0LL;
    v80[1] = 0LL;
    v62 = 0LL;
    v15 = *((_QWORD *)this + 2);
    v65 = v14;
    v58 = 0;
    v56 = 0;
    v16 = *(_QWORD *)(v15 + 1728);
    v76 = v16;
    v59 = 0;
    v64 = 0LL;
    v61 = 0;
    v57 = 0;
    v17 = *((_QWORD *)DXGPROCESS::GetCurrent() + 13);
    v68 = v17;
    if ( !v17 )
      return 3221225485LL;
    v19 = *((_QWORD *)this + 2);
    if ( v16 )
      v20 = v16;
    else
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    v72 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
    v70 = 0LL;
    v71 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    v75 = v20;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v63);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v70, v65, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v17 + 232))(v70, &v66);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v17 + 72))(v70, &v77) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v68 + 368))(v65, v80) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v68 + 320))(v70, &v62) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v70);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v73);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v63);
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4);
    if ( v21 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
      return (unsigned int)v21;
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
        v12 = (struct _SLIST_ENTRY *)operator new(v22, 0x4B677844u, PagedPool);
        v64 = v12;
        if ( !v12 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_75;
        memset(v12, 0, 4LL * a6);
        v23 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v23 = -1LL;
        v13 = operator new(v23, 0x4B677844u, PagedPool);
        if ( !v13 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_75;
        memset(v13, 0, 4LL * a6);
      }
      v24 = v69;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v67[0],
              (struct COREDEVICEACCESS *)a4,
              &v58,
              a6,
              v69,
              (unsigned int *)v12,
              &v61);
      if ( v11 >= 0 )
      {
        if ( v66
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v66,
                       (struct COREDEVICEACCESS *)a4,
                       &v59,
                       a6,
                       v24,
                       (unsigned int *)v13,
                       &v57),
               v11 >= 0)
            ? (v25 = v59)
            : (v25 = 0, v11 = 0),
              (v56 = v25) != 0) )
        {
          if ( !a6 )
          {
            v26 = v57;
            if ( v57 > 1 )
            {
              v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 284LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v27, v60);
                if ( VistaBltStubInfo )
                {
                  if ( v60 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v79.Next;
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
            goto LABEL_49;
          }
        }
        else if ( !a6 )
        {
LABEL_49:
          v30 = *((_QWORD *)this + 2);
          v67[0] = 0LL;
          v67[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v30 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v67);
          if ( !v67[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v77) = v62 + v77;
            HIDWORD(v77) += HIDWORD(v62);
            LODWORD(v78) = v62 + v78;
            HIDWORD(v78) += HIDWORD(v62);
            LODWORD(v79.Next) = v77 - LODWORD(v80[0]);
            HIDWORD(v79.Next) = HIDWORD(v77) - HIDWORD(v80[0]);
            *((_DWORD *)&v79.Next + 2) = v78 - LODWORD(v80[0]);
            *((_DWORD *)&v79.Next + 3) = HIDWORD(v78) - HIDWORD(v80[0]);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(v78 - LODWORD(v80[0])));
            v32 = (char *)Global + 800;
            ++*((_DWORD *)Global + 205);
            v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 50);
            if ( v33
              || (v34 = *((unsigned int *)v32 + 11),
                  v35 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v32 + 6),
                  v36 = *((unsigned int *)v32 + 10),
                  v37 = *((unsigned int *)v32 + 9),
                  ++*((_DWORD *)v32 + 6),
                  (v33 = (PSLIST_ENTRY)v35(v37, v34, v36, v32)) != 0LL) )
            {
              v40 = v76;
              v41 = *((_QWORD *)this + 2);
              if ( !v76 )
                v40 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
              v42 = *(_QWORD *)(*(_QWORD *)(v41 + 40) + 104LL);
              v74 = 0LL;
              v72 = v42;
              v75 = v40;
              v70 = 0LL;
              v71 = 0LL;
              v73 = 0LL;
              memset(v33, 0, 0x5F8uLL);
              LODWORD(v33->Next) = *(_DWORD *)(*((_QWORD *)this + 2) + 332LL);
              LODWORD(v33->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v33->Next + 1) = v65;
              HIDWORD(v33[1].Next) = v58;
              *((_DWORD *)&v33[1].Next + 2) = v56;
              LODWORD(v33[1].Next) = 0;
              v43 = v79;
              v33[5].Next = 0LL;
              *((_QWORD *)&v33[4].Next + 1) = &v79;
              v44 = *(_DWORD *)(&v33[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v33[4].Next) = 1;
              *((_DWORD *)&v33[22].Next + 2) = 3;
              *((_DWORD *)&v33[5].Next + 2) = v44 | 0x10081;
              v33[3] = v43;
              v33[24].Next = (struct _SLIST_ENTRY *)v66;
              *((_QWORD *)&v33[24].Next + 1) = 0LL;
              *((_DWORD *)&v33[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v45 = a7;
                v46 = (unsigned int)v8;
                do
                {
                  *(unsigned int *)((char *)v45 + (char *)v33 - (char *)a7 + 96) = *v45;
                  ++v45;
                  --v46;
                }
                while ( v46 );
              }
              v47 = v69;
              *((_QWORD *)&v33[93].Next + 1) = v69;
              v33[91].Next = v12;
              *((_QWORD *)&v33[91].Next + 1) = v13;
              *((_BYTE *)&v33[94].Next + 8) = 1;
              Current = DXGPROCESS::GetCurrent();
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v33, Current);
              v11 = DXGCONTEXT::Present(
                      this,
                      (const struct DXGK_PRESENT_PARAMS *)v33,
                      (struct COREDEVICEACCESS *)a4,
                      v63,
                      (struct CWin32kLocks *)&v70,
                      v47,
                      v67[0]);
              v50 = DXGGLOBAL::GetGlobal(v49);
              v51 = (union _SLIST_HEADER *)((char *)v50 + 800);
              ++*((_DWORD *)v50 + 207);
              if ( ExQueryDepthSList((PSLIST_HEADER)v50 + 50) < *((_WORD *)v50 + 408) )
              {
                ExpInterlockedPushEntrySList(v51, v33);
              }
              else
              {
                ++LODWORD(v51[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v51[3].Region)(v33, v51);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v52 = v63;
              if ( *((_BYTE *)v63 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v63);
              CWin32kLocks::Unlock((CWin32kLocks *)&v70);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v73);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v52);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
              }
            }
            else
            {
              v39 = WdLogNewEntry5_WdLowResource(v38);
              *(_QWORD *)(v39 + 24) = 5737LL;
              WdLogEvent5_WdLowResource(v39);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v67);
          v12 = v64;
          goto LABEL_71;
        }
        if ( v61 <= 1 && v57 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v12);
          operator delete[](v13);
          v12 = 0LL;
          v64 = 0LL;
          v13 = 0LL;
        }
        goto LABEL_49;
      }
    }
LABEL_71:
    if ( v58 )
      DXGCONTEXT::DestroyAllocation(this, v58, (struct COREDEVICEACCESS *)a4);
    if ( v56 )
      DXGCONTEXT::DestroyAllocation(this, v56, (struct COREDEVICEACCESS *)a4);
LABEL_75:
    if ( v12 )
    {
      if ( (_DWORD)v8 )
      {
        v53 = (unsigned int *)v12;
        v54 = (unsigned int)v8;
        do
        {
          if ( *v53 )
            DXGCONTEXT::DestroyAllocation(this, *v53, (struct COREDEVICEACCESS *)a4);
          ++v53;
          --v54;
        }
        while ( v54 );
        v12 = v64;
      }
      operator delete[](v12);
    }
    if ( v13 )
    {
      if ( (_DWORD)v8 )
      {
        v55 = (unsigned int *)v13;
        do
        {
          if ( *v55 )
            DXGCONTEXT::DestroyAllocation(this, *v55, (struct COREDEVICEACCESS *)a4);
          ++v55;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v13);
    }
  }
  return (unsigned int)v11;
}
