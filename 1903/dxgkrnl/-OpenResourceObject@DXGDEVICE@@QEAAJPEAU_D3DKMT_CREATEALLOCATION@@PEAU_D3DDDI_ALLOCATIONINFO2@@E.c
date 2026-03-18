/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006E5C (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007628 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00087AC (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000C2D0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C860 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C0019F60 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C37C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0023E88 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003BA28 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C003BB24 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C00C2130 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E53F8 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00FCB7C (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0139F28 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C013CCF8 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCEREFERENCE *a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  D3DKMT_HANDLE hResource; // ebx
  ADAPTER_RENDER *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGRESOURCE *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  struct DXGAUTOPUSHLOCK *v36; // rdi
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // edi
  SIZE_T v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID v47; // r13
  __int64 v48; // rdx
  void *v49; // rcx
  UINT v50; // esi
  DXGADAPTERALLOCATION_VGPU *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  DXGADAPTERALLOCATION_VGPU *v55; // rax
  __int64 *v56; // rcx
  __int64 v57; // rax
  __int64 **v58; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  int v61; // ebx
  DXGRESOURCE *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  DXGRESOURCE *v66; // rsi
  DXGRESOURCE *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  ADAPTER_RENDER *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  struct _DXGSHAREDALLOCOBJECT *v77; // r13
  _QWORD *v78; // rax
  __int64 v79; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v90; // r8
  _QWORD *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  __int64 v97; // r13
  __int64 NumAllocations; // rdx
  _QWORD *v99; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v100; // rdx
  signed __int32 v101; // eax
  signed __int32 v102; // ett
  __int64 v103; // rcx
  __int64 v104; // rcx
  char v105; // r15
  __int64 v106; // r8
  struct _EPROCESS *v107; // rdx
  __int64 **v108; // rcx
  __int64 *i; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rdx
  DXGADAPTER *v114; // rcx
  __int64 v115; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  UINT v117; // edx
  DXGADAPTERALLOCATION_VGPU *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  DXGADAPTERALLOCATION_VGPU *v122; // rax
  __int64 *v123; // rcx
  __int64 v124; // rax
  __int64 **v125; // rdx
  int v126; // r8d
  SIZE_T v127; // rax
  PVOID v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // rcx
  _QWORD *v132; // rax
  __int64 v133; // rdx
  _QWORD *v134; // rax
  __int64 v135; // rdx
  char *v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  _QWORD *v139; // r15
  _QWORD *v140; // rax
  __int64 v141; // rax
  void *v142; // r13
  ADAPTER_RENDER *v143; // rax
  char *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  _QWORD *v149; // r15
  _QWORD *v150; // rax
  __int64 v151; // rcx
  __int64 v152; // [rsp+20h] [rbp-40h] BYREF
  __int128 v153; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v154[16]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v155[24]; // [rsp+48h] [rbp-18h] BYREF
  UINT v156; // [rsp+A0h] [rbp+40h] BYREF
  int v157; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v158; // [rsp+B0h] [rbp+50h]

  v158 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 2028LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v152 = 0LL;
  v153 = 0LL;
  LOBYTE(v156) = *((_BYTE *)DXGPROCESS::GetCurrent() + 299);
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_60;
    v61 = 0;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v62 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
      v66 = v62;
      if ( v62 )
      {
        DXGRESOURCE::DXGRESOURCE(v62, (struct DXGDEVICE *)this);
        *((_QWORD *)v66 + 15) = 0LL;
        *((_DWORD *)v66 + 1) |= 4u;
LABEL_73:
        if ( !v66 )
        {
          v68 = WdLogNewEntry5_WdWarning(v64, v63, v65);
          *(_QWORD *)(v68 + 24) = this;
          *(_QWORD *)(v68 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v68);
          v61 = -1073741801;
LABEL_193:
          LODWORD(v31) = v61;
          goto LABEL_61;
        }
        DXGPROCESS::CreateResourceHandleSafe(this[5], v66);
        if ( !*((_DWORD *)v66 + 4) )
        {
LABEL_76:
          v72 = WdLogNewEntry5_WdWarning(v70, v69, v71);
          *(_QWORD *)(v72 + 24) = this;
          *(_QWORD *)(v72 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v72);
          v61 = -1073741801;
          goto LABEL_191;
        }
        *((_QWORD *)v66 + 6) = a2->hPrivateRuntimeResourceHandle;
        if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
          goto LABEL_192;
        *((_DWORD *)v66 + 1) |= 1u;
        if ( a4 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v154);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v154);
          if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
          {
            v77 = a6;
            if ( !a6 )
            {
              v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v76);
              v78[3] = this;
              v78[4] = -1073741811LL;
LABEL_88:
              WdLogEvent5_WdWarning(v78);
              v61 = -1073741811;
LABEL_89:
              v83 = *((_QWORD *)v66 + 7);
              if ( !v83 )
                goto LABEL_121;
              *(_DWORD *)(v83 + 12) |= 0x100u;
              v84 = *((_QWORD *)v66 + 7);
              if ( *(_DWORD *)(v84 + 124) == a2->NumAllocations )
              {
                if ( *(_DWORD *)(v84 + 120) == a2->PrivateDriverDataSize || (v156 & 8) != 0 )
                {
                  v87 = *((_QWORD *)v66 + 7);
                  if ( *(_DWORD *)(v87 + 64) != (unsigned int)PsGetCurrentProcessSessionId(v84, v74)
                    && (*(_DWORD *)(v87 + 12) & 8) == 0 )
                  {
                    v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
                    v91[3] = this;
                    v91[4] = *((_QWORD *)v66 + 7);
                    v92 = *((_QWORD *)v66 + 7);
                    v93 = *(unsigned int *)(v92 + 64);
                    v91[5] = v93;
                    v91[6] = (unsigned int)PsGetCurrentProcessSessionId(v92, v93);
                    v94 = v91;
                    v91[7] = -1073741811LL;
LABEL_120:
                    WdLogEvent5_WdWarning(v94);
                    v61 = -1073741811;
                    goto LABEL_121;
                  }
                  if ( *(ADAPTER_RENDER **)(v87 + 72) == this[2] )
                  {
                    if ( *(ADAPTER_RENDER **)(v87 + 88) == this[216] )
                    {
                      if ( (*(_DWORD *)(v87 + 12) & 1) == 0
                        || (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7))
                        && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
                      {
                        v97 = 0LL;
                        NumAllocations = a2->NumAllocations;
                        v96 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 128LL);
                        if ( (_DWORD)NumAllocations )
                        {
                          v90 = v158;
                          while ( *(_DWORD *)(v96 - 8) == v158[v97].PrivateDriverDataSize )
                          {
                            v96 = *(_QWORD *)v96;
                            v97 = (unsigned int)(v97 + 1);
                            if ( (unsigned int)v97 >= (unsigned int)NumAllocations )
                              goto LABEL_113;
                          }
                          v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, NumAllocations, v158);
                          v100 = v158;
                          v99[3] = this;
                          v99[4] = *((_QWORD *)v66 + 7);
                          v99[5] = (unsigned int)v97;
                          v99[6] = v100[v97].PrivateDriverDataSize;
                          v99[7] = -1073741811LL;
                          WdLogEvent5_WdWarning(v99);
                          v61 = -1073741811;
                        }
LABEL_113:
                        if ( v61 < 0 )
                          goto LABEL_121;
                        v95 = *((_QWORD *)v66 + 7);
                        _m_prefetchw((const void *)(v95 + 60));
                        v101 = *(_DWORD *)(v95 + 60);
                        while ( v101 )
                        {
                          v96 = (unsigned int)(v101 + 1);
                          v102 = v101;
                          v101 = _InterlockedCompareExchange((volatile signed __int32 *)(v95 + 60), v96, v101);
                          if ( v102 == v101 )
                          {
                            v104 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL);
                            if ( v104 )
                            {
                              if ( *(ADAPTER_RENDER ***)(v104 + 72) == this )
                                ++*(_DWORD *)(v104 + 64);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v154);
                              v105 = *((_BYTE *)this[5] + 298);
                              DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
                                (DXGPROCESSACCESSLISTMUTEX *)v155,
                                *(struct DXGSHAREDRESOURCEACCESS **)(*((_QWORD *)v66 + 7) + 144LL));
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v155);
                              v107 = a5;
                              if ( !a5 )
                                v107 = (struct _EPROCESS *)*((_QWORD *)this[5] + 7);
                              v108 = (__int64 **)(*(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) + 48LL);
                              for ( i = *v108; i != (__int64 *)v108; i = (__int64 *)*i )
                              {
                                if ( v105 || !*((_BYTE *)i + 16) && v107 == (struct _EPROCESS *)i[3] )
                                  goto LABEL_134;
                              }
                              v110 = (_QWORD *)WdLogNewEntry5_WdWarning(v108, v107, v106);
                              v110[3] = this;
                              v110[4] = *((_QWORD *)v66 + 7);
                              v110[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v110);
                              v61 = -1073741811;
LABEL_134:
                              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v155);
                            }
                            if ( v61 >= 0 )
                            {
                              v111 = *((_QWORD *)v66 + 7);
                              v112 = *(_QWORD *)(v111 + 128);
                              v113 = *(unsigned int *)(v112 - 44);
                              if ( (v113 & 2) != 0 )
                              {
                                if ( *(_DWORD *)(v111 + 124) != 1 )
                                {
                                  v114 = (DXGADAPTER *)*((_QWORD *)this[2] + 2);
                                  if ( *((_DWORD *)v114 + 64) <= 1u || !DXGADAPTER::IsDxgmms2(v114) )
                                  {
                                    v115 = WdLogNewEntry5_WdAssertion(v114, v113);
                                    *(_QWORD *)(v115 + 24) = 2574LL;
                                    WdLogEvent5_WdAssertion(v115);
                                    LODWORD(v113) = *(_DWORD *)(v112 - 44);
                                  }
                                }
                                this[(((unsigned int)v113 >> 6) & 0xF) + 65] = v66;
                              }
                            }
LABEL_121:
                            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v154);
LABEL_190:
                            if ( v61 < 0 )
                            {
LABEL_191:
                              ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v73, v66, 0LL);
                              DXGRESOURCE::`scalar deleting destructor'(v66);
                              goto LABEL_193;
                            }
LABEL_192:
                            *a8 = 1;
                            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v157, v66);
                            DXGRESOURCEREFERENCE::MoveAssign(a7, &v157);
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v157);
                            goto LABEL_193;
                          }
                        }
                        *((_QWORD *)v66 + 7) = 0LL;
                      }
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v96, v95, v90);
                      v85[3] = this;
                      v103 = *((_QWORD *)v66 + 7);
                      v85[5] = -1073741811LL;
                      v85[4] = v103;
                      goto LABEL_119;
                    }
                    v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
                    v85[3] = this;
                    v85[4] = *((_QWORD *)v66 + 7);
                    v85[5] = *(_QWORD *)(*((_QWORD *)v66 + 7) + 88LL);
LABEL_93:
                    v85[6] = -1073741811LL;
LABEL_119:
                    v94 = v85;
                    goto LABEL_120;
                  }
                  v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
                  v85[3] = this;
                  v85[4] = *((_QWORD *)v66 + 7);
                  PrivateDriverDataSize = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 7) + 72LL) + 16LL);
                }
                else
                {
                  v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v74, v76);
                  v85[3] = this;
                  v85[4] = *((_QWORD *)v66 + 7);
                  PrivateDriverDataSize = a2->PrivateDriverDataSize;
                }
              }
              else
              {
                v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v74, v76);
                v85[3] = this;
                v85[4] = *((_QWORD *)v66 + 7);
                PrivateDriverDataSize = a2->NumAllocations;
              }
              v85[5] = PrivateDriverDataSize;
              goto LABEL_93;
            }
            v79 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v66 + 7) = v79;
            if ( v79 )
              goto LABEL_89;
            v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v76);
            v78[3] = this;
            v78[4] = v77;
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal(v75, v74);
            ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
            *((_QWORD *)v66 + 7) = ObjectA;
            if ( ObjectA )
              goto LABEL_89;
            v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v74, v76);
            v78[3] = this;
            v78[4] = a2->hGlobalShare;
          }
          v78[5] = -1073741811LL;
          goto LABEL_88;
        }
        SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                           this[2],
                           this[216],
                           (*(_DWORD *)&a2->Flags & 0x800) != 0);
        *((_QWORD *)v66 + 7) = SharedResource;
        if ( !SharedResource )
          goto LABEL_76;
        v117 = a2->NumAllocations;
        v157 = 0;
        v156 = v117;
        if ( !v117 )
        {
LABEL_153:
          *(_DWORD *)(*((_QWORD *)v66 + 7) + 124LL) = v117;
          *((_DWORD *)v66 + 1) |= 2u;
          goto LABEL_154;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 185LL) )
          {
            v118 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
            if ( v118 )
            {
              v122 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v118);
              goto LABEL_150;
            }
          }
          else
          {
            v122 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
            if ( v122 )
            {
              *((_DWORD *)v122 + 1) = 0;
              *((_QWORD *)v122 + 1) = 0LL;
              *((_QWORD *)v122 + 2) = 0LL;
              *((_QWORD *)v122 + 4) = 0LL;
              *((_DWORD *)v122 + 10) = 0;
              *((_QWORD *)v122 + 7) = 0LL;
              *((_QWORD *)v122 + 6) = 0LL;
              goto LABEL_150;
            }
          }
          v122 = 0LL;
LABEL_150:
          if ( !v122 )
          {
            v140 = (_QWORD *)WdLogNewEntry5_WdWarning(v120, v119, v121);
            v140[3] = this;
            v140[4] = a2->NumAllocations;
            v140[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v140);
            v117 = v156;
            v61 = -1073741801;
LABEL_154:
            if ( a9 )
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 176LL) = *((_QWORD *)a9 + 52);
            *(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
            if ( v61 >= 0 && v117 > 1 )
            {
              v127 = 8LL * v117;
              if ( !is_mul_ok(v117, 8uLL) )
                v127 = -1LL;
              v128 = operator new[](v127, 0x4B677844u, PagedPool);
              v131 = *((_QWORD *)v66 + 7);
              *(_QWORD *)(v131 + 160) = v128;
              if ( !*(_QWORD *)(*((_QWORD *)v66 + 7) + 160LL) )
              {
                v132 = (_QWORD *)WdLogNewEntry5_WdWarning(v131, v129, v130);
                v133 = v156;
                v132[3] = this;
                v132[4] = v133;
                v132[5] = -1073741801LL;
                WdLogEvent5_WdWarning(v132);
                v61 = -1073741801;
              }
            }
            if ( (*(_DWORD *)&a2->Flags & 4) == 0
              && (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7))
              && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
            {
              *(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) |= 1u;
            }
            if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
            {
              if ( v61 < 0 )
                goto LABEL_189;
              v134 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
              v139 = v134;
              if ( v134 )
              {
                v134[1] = 0LL;
                v136 = (char *)(v134 + 6);
                v134[2] = 0LL;
                v134[3] = 0LL;
                *((_DWORD *)v134 + 8) = 0;
                *((_DWORD *)v134 + 9) = 36;
                *((_DWORD *)v134 + 10) = 32;
                *((_DWORD *)v134 + 16) = 1;
                v134[9] = this;
                v134[7] = v134 + 6;
                v134[6] = v134 + 6;
              }
              else
              {
                v139 = 0LL;
              }
              if ( !v139 )
              {
                v141 = WdLogNewEntry5_WdLowResource(v136, v135, v137, v138);
                *(_QWORD *)(v141 + 24) = this;
                *(_QWORD *)(v141 + 32) = -1073741801LL;
                goto LABEL_174;
              }
              v142 = 0LL;
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) = v139;
              v143 = this[5];
              if ( *((_BYTE *)v143 + 298) )
              {
                v144 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( v144 )
                {
                  v144[24] = 1;
                  *((_QWORD *)v144 + 4) = 0LL;
                  goto LABEL_181;
                }
LABEL_180:
                v144 = 0LL;
              }
              else
              {
                v142 = (void *)*((_QWORD *)v143 + 7);
                ObfReferenceObject(v142);
                v144 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
                if ( !v144 )
                  goto LABEL_180;
                v144[24] = 0;
                *((_QWORD *)v144 + 4) = v142;
              }
LABEL_181:
              if ( !v144 )
              {
                if ( v142 )
                  ObfDereferenceObject(v142);
                v141 = WdLogNewEntry5_WdLowResource(v146, v145, v147, v148);
                *(_QWORD *)(v141 + 24) = -1073741801LL;
LABEL_174:
                WdLogEvent5_WdLowResource(v141);
                v61 = -1073741801;
LABEL_189:
                DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v66 + 7), 0LL, 0);
                *((_QWORD *)v66 + 7) = 0LL;
                goto LABEL_190;
              }
              v149 = v139 + 6;
              v150 = v144 + 8;
              v151 = *v149;
              if ( *(_QWORD **)(*v149 + 8LL) != v149 )
LABEL_186:
                __fastfail(3u);
              *v150 = v151;
              v150[1] = v149;
              *(_QWORD *)(v151 + 8) = v150;
              *v149 = v150;
            }
            if ( v61 >= 0 )
              goto LABEL_192;
            goto LABEL_189;
          }
          v123 = (__int64 *)((char *)v122 + 48);
          v124 = *((_QWORD *)v66 + 7) + 128LL;
          v125 = *(__int64 ***)(*((_QWORD *)v66 + 7) + 136LL);
          if ( *v125 != (__int64 *)v124 )
            goto LABEL_186;
          v126 = v157;
          v123[1] = (__int64)v125;
          *v123 = v124;
          *v125 = v123;
          v117 = v156;
          *(_QWORD *)(v124 + 8) = v123;
          v157 = v126 + 1;
          if ( v126 + 1 >= v117 )
            goto LABEL_153;
        }
      }
    }
    else
    {
      v67 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x78uLL);
      if ( v67 )
      {
        v66 = DXGRESOURCE::DXGRESOURCE(v67, (struct DXGDEVICE *)this);
        goto LABEL_73;
      }
    }
    v66 = 0LL;
    goto LABEL_73;
  }
  v19 = this[5];
  DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v19 + 184));
  v20 = (hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)v19 + 56) )
    goto LABEL_10;
  v21 = *((_QWORD *)v19 + 26);
  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
  if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_10;
  v23 = v22 & 0x1F;
  if ( (_BYTE)v23 != 4 )
  {
    v24 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v20, v21);
    *(_QWORD *)(v24 + 24) = 267LL;
    WdLogEvent5_WdError(v24);
LABEL_10:
    v25 = 0LL;
    goto LABEL_11;
  }
  v25 = *(struct DXGRESOURCE **)(v21 + 16LL * (unsigned int)v20);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v156, v25);
  ExReleasePushLockSharedEx((char *)v19 + 184, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v152, &v156);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v156);
  v29 = (_QWORD *)v152;
  if ( !v152 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v31 = -1073741816LL;
    v30[3] = this;
    v30[4] = a2->hResource;
    goto LABEL_13;
  }
  v32 = a2->Flags;
  if ( (*(_DWORD *)&v32 & 0x20020) != 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v30[3] = this;
    goto LABEL_64;
  }
  if ( *(ADAPTER_RENDER ***)(v152 + 8) != this )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v30[3] = this;
    v30[4] = a2->hResource;
    v33 = v29[1];
LABEL_18:
    v30[5] = v33;
LABEL_19:
    LODWORD(v31) = -1073741811;
    v30[6] = -1073741811LL;
    goto LABEL_65;
  }
  if ( (*(_WORD *)&v32 & 0x800) != 0 )
  {
    v34 = *(_QWORD *)(v152 + 56);
    if ( !v34 || (*(_DWORD *)(v34 + 12) & 0x20) == 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30[3] = a2->hResource;
LABEL_64:
      LODWORD(v31) = -1073741811;
      v30[4] = -1073741811LL;
      goto LABEL_65;
    }
  }
  if ( (*(_DWORD *)(v152 + 4) & 1) == 0 )
    goto LABEL_59;
  v35 = *(_QWORD *)(v152 + 56);
  if ( !v35 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v26, v28);
    v30[3] = this;
    v30[4] = v29;
LABEL_27:
    v31 = -1073741811LL;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v35 + 120) != a2->PrivateDriverDataSize )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v26, v28);
    v30[3] = this;
    v30[4] = v29[7];
    v33 = a2->PrivateDriverDataSize;
    goto LABEL_18;
  }
  v36 = a11;
  v37 = (DXGPUSHLOCK *)(v35 + 32);
  *((_QWORD *)a11 + 1) = v37;
  DXGPUSHLOCK::AcquireExclusive(v37);
  *((_DWORD *)v36 + 4) = 2;
  v39 = v29[7];
  v40 = a2->NumAllocations;
  *(_QWORD *)&v153 = v36;
  v31 = 0LL;
  if ( (_DWORD)v40 )
  {
    v38 = *(unsigned int *)(*(_QWORD *)(v39 + 128) - 8LL);
    do
    {
      if ( (_DWORD)v38 != a3[v31].PrivateDriverDataSize )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
        v30[3] = this;
        v30[4] = v29[7];
        v30[5] = (unsigned int)v31;
        v41 = v31;
        LODWORD(v31) = -1073741811;
        v30[6] = a3[v41].PrivateDriverDataSize;
        v30[7] = -1073741811LL;
        goto LABEL_65;
      }
      v31 = (unsigned int)(v31 + 1);
    }
    while ( (unsigned int)v31 < (unsigned int)v40 );
  }
  if ( (*(_DWORD *)(v39 + 12) & 0x100) != 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
    v30[3] = this;
    v30[4] = v29[7];
    goto LABEL_27;
  }
  v42 = v40 + *(_DWORD *)(v39 + 124);
  if ( v42 > 0x100 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v38);
    v30[3] = this;
    v30[4] = v29[7];
    v30[5] = 256LL;
    goto LABEL_19;
  }
  *(_DWORD *)&a2->Flags |= 2u;
  if ( v42 > 1 )
  {
    v43 = 8LL * v42;
    if ( !is_mul_ok(v42, 8uLL) )
      v43 = -1LL;
    v47 = operator new[](v43, 0x4B677844u, PagedPool);
    if ( !v47 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
      v30[3] = this;
      v30[4] = v42;
      goto LABEL_44;
    }
    v48 = v29[7];
    v49 = *(void **)(v48 + 160);
    if ( v49 != (void *)(v48 + 152) )
    {
      operator delete[](v49);
      v48 = v29[7];
    }
    *(_QWORD *)(v48 + 160) = v47;
    LODWORD(v40) = a2->NumAllocations;
  }
  v50 = 0;
  if ( !(_DWORD)v40 )
  {
LABEL_58:
    *(_DWORD *)(v29[7] + 124LL) = v42;
LABEL_59:
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v29 + 10), 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_60:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v152);
    v153 = 0uLL;
    LODWORD(v31) = 0;
    goto LABEL_61;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 185LL) )
    {
      v51 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
      if ( v51 )
      {
        v55 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v51);
        goto LABEL_55;
      }
    }
    else
    {
      v55 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
      if ( v55 )
      {
        *((_DWORD *)v55 + 1) = 0;
        *((_QWORD *)v55 + 1) = 0LL;
        *((_QWORD *)v55 + 2) = 0LL;
        *((_QWORD *)v55 + 4) = 0LL;
        *((_DWORD *)v55 + 10) = 0;
        *((_QWORD *)v55 + 7) = 0LL;
        *((_QWORD *)v55 + 6) = 0LL;
        goto LABEL_55;
      }
    }
    v55 = 0LL;
LABEL_55:
    if ( !v55 )
      break;
    v56 = (__int64 *)((char *)v55 + 48);
    v57 = v29[7] + 128LL;
    v58 = *(__int64 ***)(v29[7] + 136LL);
    if ( *v58 != (__int64 *)v57 )
      goto LABEL_186;
    *v56 = v57;
    ++v50;
    v56[1] = (__int64)v58;
    *v58 = v56;
    *(_QWORD *)(v57 + 8) = v56;
    if ( v50 >= a2->NumAllocations )
      goto LABEL_58;
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
  v30[3] = this;
  v30[4] = a2->NumAllocations;
LABEL_44:
  v31 = -1073741801LL;
LABEL_13:
  v30[5] = v31;
LABEL_65:
  WdLogEvent5_WdWarning(v30);
LABEL_61:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v153);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v152);
  return (unsigned int)v31;
}
