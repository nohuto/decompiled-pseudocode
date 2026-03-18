/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00AC0D0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000E804 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0010AF8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0011898 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0013F44 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C00189C4 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C002142C (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003513C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1C00AC008 (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA824 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C012C2E0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C012D4CC (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCE **a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGPROCESS *Current; // rax
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
  DXGDEVICE **v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v32; // eax
  DXGDEVICE *v33; // rcx
  DXGDEVICE *v34; // rax
  DXGDEVICE *v35; // rcx
  struct DXGAUTOPUSHLOCK *v36; // rdi
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // r8
  DXGDEVICE *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // edi
  SIZE_T v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID v47; // r13
  DXGDEVICE *v48; // rdx
  char *v49; // rcx
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
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // r13
  __int64 NumAllocations; // rdx
  _QWORD *v98; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v99; // rdx
  signed __int32 v100; // eax
  signed __int32 v101; // ett
  __int64 v102; // rcx
  __int64 v103; // rcx
  char v104; // r15
  __int64 v105; // r8
  struct _EPROCESS *v106; // rdx
  __int64 **v107; // rcx
  __int64 *i; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdi
  unsigned int v112; // edx
  DXGADAPTER *v113; // rcx
  __int64 v114; // rax
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  UINT v116; // edx
  DXGADAPTERALLOCATION_VGPU *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  DXGADAPTERALLOCATION_VGPU *v121; // rax
  __int64 *v122; // rcx
  __int64 v123; // rax
  __int64 **v124; // rdx
  int v125; // r8d
  SIZE_T v126; // rax
  PVOID v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // rdx
  _QWORD *v133; // rax
  char *v134; // rcx
  _QWORD *v135; // r15
  _QWORD *v136; // rax
  __int64 v137; // rax
  void *v138; // r13
  ADAPTER_RENDER *v139; // rax
  char *v140; // rax
  __int64 v141; // rcx
  _QWORD *v142; // r15
  _QWORD *v143; // rax
  __int64 v144; // rcx
  DXGDEVICE **v145; // [rsp+20h] [rbp-40h] BYREF
  __int128 v146; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v147[16]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v148[24]; // [rsp+48h] [rbp-18h] BYREF
  struct DXGRESOURCE *v149; // [rsp+A0h] [rbp+40h] BYREF
  struct DXGRESOURCE *v150; // [rsp+A8h] [rbp+48h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v151; // [rsp+B0h] [rbp+50h]

  v151 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2027LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v145, 0LL);
  Current = DXGPROCESS::GetCurrent();
  v146 = 0LL;
  LOBYTE(v149) = *((_BYTE *)Current + 323);
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
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v147);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v147);
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
                if ( *(_DWORD *)(v84 + 120) == a2->PrivateDriverDataSize || ((unsigned __int8)v149 & 8) != 0 )
                {
                  v87 = *((_QWORD *)v66 + 7);
                  if ( *(_DWORD *)(v87 + 64) != (unsigned int)PsGetCurrentProcessSessionId(v84)
                    && (*(_DWORD *)(v87 + 12) & 8) == 0 )
                  {
                    v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
                    v91[3] = this;
                    v91[4] = *((_QWORD *)v66 + 7);
                    v92 = *((_QWORD *)v66 + 7);
                    v91[5] = *(unsigned int *)(v92 + 64);
                    v91[6] = (unsigned int)PsGetCurrentProcessSessionId(v92);
                    v93 = v91;
                    v91[7] = -1073741811LL;
LABEL_120:
                    WdLogEvent5_WdWarning(v93);
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
                        v96 = 0LL;
                        NumAllocations = a2->NumAllocations;
                        v95 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 128LL);
                        if ( (_DWORD)NumAllocations )
                        {
                          v90 = v151;
                          while ( *(_DWORD *)(v95 - 8) == v151[v96].PrivateDriverDataSize )
                          {
                            v95 = *(_QWORD *)v95;
                            v96 = (unsigned int)(v96 + 1);
                            if ( (unsigned int)v96 >= (unsigned int)NumAllocations )
                              goto LABEL_113;
                          }
                          v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v95, NumAllocations, v151);
                          v99 = v151;
                          v98[3] = this;
                          v98[4] = *((_QWORD *)v66 + 7);
                          v98[5] = (unsigned int)v96;
                          v98[6] = v99[v96].PrivateDriverDataSize;
                          v98[7] = -1073741811LL;
                          WdLogEvent5_WdWarning(v98);
                          v61 = -1073741811;
                        }
LABEL_113:
                        if ( v61 < 0 )
                          goto LABEL_121;
                        v94 = *((_QWORD *)v66 + 7);
                        _m_prefetchw((const void *)(v94 + 60));
                        v100 = *(_DWORD *)(v94 + 60);
                        while ( v100 )
                        {
                          v95 = (unsigned int)(v100 + 1);
                          v101 = v100;
                          v100 = _InterlockedCompareExchange((volatile signed __int32 *)(v94 + 60), v95, v100);
                          if ( v101 == v100 )
                          {
                            v103 = *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL);
                            if ( v103 )
                            {
                              if ( *(ADAPTER_RENDER ***)(v103 + 72) == this )
                                ++*(_DWORD *)(v103 + 64);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v147);
                              v104 = *((_BYTE *)this[5] + 322);
                              DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
                                (DXGPROCESSACCESSLISTMUTEX *)v148,
                                *(struct DXGSHAREDRESOURCEACCESS **)(*((_QWORD *)v66 + 7) + 144LL));
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v148);
                              v106 = a5;
                              if ( !a5 )
                                v106 = (struct _EPROCESS *)*((_QWORD *)this[5] + 7);
                              v107 = (__int64 **)(*(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) + 48LL);
                              for ( i = *v107; i != (__int64 *)v107; i = (__int64 *)*i )
                              {
                                if ( v104 || !*((_BYTE *)i + 16) && v106 == (struct _EPROCESS *)i[3] )
                                  goto LABEL_134;
                              }
                              v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v105);
                              v109[3] = this;
                              v109[4] = *((_QWORD *)v66 + 7);
                              v109[5] = -1073741811LL;
                              WdLogEvent5_WdWarning(v109);
                              v61 = -1073741811;
LABEL_134:
                              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v148);
                            }
                            if ( v61 >= 0 )
                            {
                              v110 = *((_QWORD *)v66 + 7);
                              v111 = *(_QWORD *)(v110 + 128);
                              v112 = *(_DWORD *)(v111 - 44);
                              if ( (v112 & 2) != 0 )
                              {
                                if ( *(_DWORD *)(v110 + 124) != 1 )
                                {
                                  v113 = (DXGADAPTER *)*((_QWORD *)this[2] + 2);
                                  if ( *((_DWORD *)v113 + 64) <= 1u || !DXGADAPTER::IsDxgmms2(v113) )
                                  {
                                    v114 = WdLogNewEntry5_WdAssertion(v113);
                                    *(_QWORD *)(v114 + 24) = 2573LL;
                                    WdLogEvent5_WdAssertion(v114);
                                    v112 = *(_DWORD *)(v111 - 44);
                                  }
                                }
                                this[((v112 >> 6) & 0xF) + 65] = v66;
                              }
                            }
LABEL_121:
                            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v147);
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
                            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v150, v66);
                            DXGRESOURCEREFERENCE::MoveAssign(a7, &v150);
                            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v150);
                            goto LABEL_193;
                          }
                        }
                        *((_QWORD *)v66 + 7) = 0LL;
                      }
                      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v95, v94, v90);
                      v85[3] = this;
                      v102 = *((_QWORD *)v66 + 7);
                      v85[5] = -1073741811LL;
                      v85[4] = v102;
                      goto LABEL_119;
                    }
                    v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
                    v85[3] = this;
                    v85[4] = *((_QWORD *)v66 + 7);
                    v85[5] = *(_QWORD *)(*((_QWORD *)v66 + 7) + 88LL);
LABEL_93:
                    v85[6] = -1073741811LL;
LABEL_119:
                    v93 = v85;
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
            Global = DXGGLOBAL::GetGlobal(v75);
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
        v116 = a2->NumAllocations;
        LODWORD(v150) = 0;
        LODWORD(v149) = v116;
        if ( !v116 )
        {
LABEL_153:
          *(_DWORD *)(*((_QWORD *)v66 + 7) + 124LL) = v116;
          *((_DWORD *)v66 + 1) |= 2u;
          goto LABEL_154;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 185LL) )
          {
            v117 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
            if ( v117 )
            {
              v121 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v117);
              goto LABEL_150;
            }
          }
          else
          {
            v121 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
            if ( v121 )
            {
              *((_DWORD *)v121 + 1) = 0;
              *((_QWORD *)v121 + 1) = 0LL;
              *((_QWORD *)v121 + 2) = 0LL;
              *((_QWORD *)v121 + 4) = 0LL;
              *((_DWORD *)v121 + 10) = 0;
              *((_QWORD *)v121 + 7) = 0LL;
              *((_QWORD *)v121 + 6) = 0LL;
              goto LABEL_150;
            }
          }
          v121 = 0LL;
LABEL_150:
          if ( !v121 )
          {
            v136 = (_QWORD *)WdLogNewEntry5_WdWarning(v119, v118, v120);
            v136[3] = this;
            v136[4] = a2->NumAllocations;
            v136[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v136);
            v116 = (unsigned int)v149;
            v61 = -1073741801;
LABEL_154:
            if ( a9 )
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 176LL) = *((_QWORD *)a9 + 52);
            *(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v66 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
            if ( v61 >= 0 && v116 > 1 )
            {
              v126 = 8LL * v116;
              if ( !is_mul_ok(v116, 8uLL) )
                v126 = -1LL;
              v127 = operator new(v126, 0x4B677844u, PagedPool);
              v130 = *((_QWORD *)v66 + 7);
              *(_QWORD *)(v130 + 160) = v127;
              if ( !*(_QWORD *)(*((_QWORD *)v66 + 7) + 160LL) )
              {
                v131 = (_QWORD *)WdLogNewEntry5_WdWarning(v130, v128, v129);
                v132 = (unsigned int)v149;
                v131[3] = this;
                v131[4] = v132;
                v131[5] = -1073741801LL;
                WdLogEvent5_WdWarning(v131);
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
              v133 = operator new(0x50uLL, 0x4B677844u, (POOL_TYPE)512);
              v135 = v133;
              if ( v133 )
              {
                v133[1] = 0LL;
                v134 = (char *)(v133 + 6);
                v133[2] = 0LL;
                *((_DWORD *)v133 + 8) = 0;
                v133[3] = 0LL;
                *((_DWORD *)v133 + 9) = 36;
                *((_DWORD *)v133 + 10) = 32;
                *((_DWORD *)v133 + 16) = 1;
                v133[9] = this;
                v133[7] = v133 + 6;
                v133[6] = v133 + 6;
              }
              else
              {
                v135 = 0LL;
              }
              if ( !v135 )
              {
                v137 = WdLogNewEntry5_WdLowResource(v134);
                *(_QWORD *)(v137 + 24) = this;
                *(_QWORD *)(v137 + 32) = -1073741801LL;
                goto LABEL_174;
              }
              v138 = 0LL;
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 144LL) = v135;
              v139 = this[5];
              if ( *((_BYTE *)v139 + 322) )
              {
                v140 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
                if ( v140 )
                {
                  v140[24] = 1;
                  *((_QWORD *)v140 + 4) = 0LL;
                  goto LABEL_181;
                }
LABEL_180:
                v140 = 0LL;
              }
              else
              {
                v138 = (void *)*((_QWORD *)v139 + 7);
                ObfReferenceObject(v138);
                v140 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
                if ( !v140 )
                  goto LABEL_180;
                v140[24] = 0;
                *((_QWORD *)v140 + 4) = v138;
              }
LABEL_181:
              if ( !v140 )
              {
                if ( v138 )
                  ObfDereferenceObject(v138);
                v137 = WdLogNewEntry5_WdLowResource(v141);
                *(_QWORD *)(v137 + 24) = -1073741801LL;
LABEL_174:
                WdLogEvent5_WdLowResource(v137);
                v61 = -1073741801;
LABEL_189:
                DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v66 + 7), 0LL, 0);
                *((_QWORD *)v66 + 7) = 0LL;
                goto LABEL_190;
              }
              v142 = v135 + 6;
              v143 = v140 + 8;
              v144 = *v142;
              if ( *(_QWORD **)(*v142 + 8LL) != v142 )
LABEL_186:
                __fastfail(3u);
              *v143 = v144;
              v143[1] = v142;
              *(_QWORD *)(v144 + 8) = v143;
              *v142 = v143;
            }
            if ( v61 >= 0 )
              goto LABEL_192;
            goto LABEL_189;
          }
          v122 = (__int64 *)((char *)v121 + 48);
          v123 = *((_QWORD *)v66 + 7) + 128LL;
          v124 = *(__int64 ***)(*((_QWORD *)v66 + 7) + 136LL);
          if ( *v124 != (__int64 *)v123 )
            goto LABEL_186;
          v125 = (int)v150;
          v122[1] = (__int64)v124;
          *v122 = v123;
          *v124 = v122;
          v116 = (unsigned int)v149;
          *(_QWORD *)(v123 + 8) = v122;
          LODWORD(v150) = v125 + 1;
          if ( v125 + 1 >= v116 )
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
  DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v19 + 208));
  v20 = (hResource >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)v19 + 62) )
    goto LABEL_10;
  v21 = *((_QWORD *)v19 + 29);
  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
  if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_10;
  v23 = v22 & 0x1F;
  if ( (_BYTE)v23 != 4 )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v24 + 24) = 316LL;
    WdLogEvent5_WdError(v24);
LABEL_10:
    v25 = 0LL;
    goto LABEL_11;
  }
  v25 = *(struct DXGRESOURCE **)(v21 + 16LL * (unsigned int)v20);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v149, v25);
  ExReleasePushLockSharedEx((char *)v19 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v145, &v149);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v149);
  v29 = v145;
  if ( !v145 )
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
  if ( v145[1] != (DXGDEVICE *)this )
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
    v34 = v145[7];
    if ( !v34 || (*((_DWORD *)v34 + 3) & 0x20) == 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30[3] = a2->hResource;
LABEL_64:
      LODWORD(v31) = -1073741811;
      v30[4] = -1073741811LL;
      goto LABEL_65;
    }
  }
  if ( (*((_DWORD *)v145 + 1) & 1) == 0 )
    goto LABEL_59;
  v35 = v145[7];
  if ( !v35 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v26, v28);
    v30[3] = this;
    v30[4] = v29;
LABEL_27:
    v31 = -1073741811LL;
    goto LABEL_13;
  }
  if ( *((_DWORD *)v35 + 30) != a2->PrivateDriverDataSize )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v26, v28);
    v30[3] = this;
    v30[4] = v29[7];
    v33 = (DXGDEVICE *)a2->PrivateDriverDataSize;
    goto LABEL_18;
  }
  v36 = a11;
  v37 = (DXGDEVICE *)((char *)v35 + 32);
  *((_QWORD *)a11 + 1) = v37;
  DXGPUSHLOCK::AcquireExclusive(v37);
  *((_DWORD *)v36 + 4) = 2;
  v39 = v29[7];
  v40 = a2->NumAllocations;
  *(_QWORD *)&v146 = v36;
  v31 = 0LL;
  if ( (_DWORD)v40 )
  {
    v38 = *(unsigned int *)(*((_QWORD *)v39 + 16) - 8LL);
    do
    {
      if ( (_DWORD)v38 != a3[v31].PrivateDriverDataSize )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v38);
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
  if ( (*((_DWORD *)v39 + 3) & 0x100) != 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v38);
    v30[3] = this;
    v30[4] = v29[7];
    goto LABEL_27;
  }
  v42 = v40 + *((_DWORD *)v39 + 31);
  if ( v42 > 0x100 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v40, v38);
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
    v47 = operator new(v43, 0x4B677844u, PagedPool);
    if ( !v47 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
      v30[3] = this;
      v30[4] = v42;
      goto LABEL_44;
    }
    v48 = v29[7];
    v49 = (char *)*((_QWORD *)v48 + 20);
    if ( v49 != (char *)v48 + 152 )
    {
      operator delete[](v49);
      v48 = v29[7];
    }
    *((_QWORD *)v48 + 20) = v47;
  }
  v50 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_58:
    *((_DWORD *)v29[7] + 31) = v42;
LABEL_59:
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)(v29 + 10), 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_60:
    DXGRESOURCEREFERENCE::MoveAssign(a7, (struct DXGRESOURCE **)&v145);
    v146 = 0uLL;
    LODWORD(v31) = 0;
    goto LABEL_61;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 185LL) )
    {
      v51 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
      if ( v51 )
      {
        v55 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v51);
        goto LABEL_55;
      }
    }
    else
    {
      v55 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
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
    v57 = (__int64)v29[7] + 128;
    v58 = (__int64 **)*((_QWORD *)v29[7] + 17);
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
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v146);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v145);
  return (unsigned int)v31;
}
