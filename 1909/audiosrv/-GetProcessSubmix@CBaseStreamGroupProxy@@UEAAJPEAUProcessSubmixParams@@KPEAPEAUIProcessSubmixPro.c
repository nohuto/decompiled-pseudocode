/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800323B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180032CA0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x1800335D0 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180033940 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180048988 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BDCA8 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4F8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800D5B70 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800DD10C (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EC650 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        __int64 **this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 *j; // rbx
  __int64 *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 *v19; // rdx
  struct IProcessSubmixProxy *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  signed int v24; // edi
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  std::_Ref_count_base *v30; // rcx
  struct _TP_WORK *ThreadpoolWork; // r14
  struct IProcessSubmixProxy *v32; // rax
  __int64 result; // rax
  PTP_POOL Threadpool; // rax
  __int64 *i; // r13
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r13
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct IProcessSubmixProxy *v48; // rax
  struct IProcessSubmixProxy *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  signed int LastError; // eax
  signed int v53; // eax
  signed int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-208h]
  int v56; // [rsp+20h] [rbp-208h]
  __int64 v57; // [rsp+30h] [rbp-1F8h] BYREF
  struct IProcessSubmixProxy *v58; // [rsp+38h] [rbp-1F0h] BYREF
  struct IProcessSubmixProxy *v59; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-1E0h] BYREF
  _BYTE *v61; // [rsp+50h] [rbp-1D8h]
  _QWORD *v62; // [rsp+58h] [rbp-1D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v63; // [rsp+60h] [rbp-1C8h]
  char *v64; // [rsp+68h] [rbp-1C0h] BYREF
  _QWORD *v65; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v66; // [rsp+78h] [rbp-1B0h] BYREF
  struct IProcessSubmixProxy *v67; // [rsp+80h] [rbp-1A8h] BYREF
  struct IProcessSubmixProxy **v68; // [rsp+88h] [rbp-1A0h]
  _QWORD v69[7]; // [rsp+90h] [rbp-198h] BYREF
  _QWORD *v70; // [rsp+C8h] [rbp-160h]
  _BYTE v71[56]; // [rsp+D0h] [rbp-158h] BYREF
  _BYTE *v72; // [rsp+108h] [rbp-120h]
  __int64 v73; // [rsp+110h] [rbp-118h]
  _QWORD *v74; // [rsp+118h] [rbp-110h]
  _QWORD *v75; // [rsp+120h] [rbp-108h]
  _DWORD v76[4]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+140h] [rbp-E8h]
  int v78; // [rsp+148h] [rbp-E0h]
  int v79; // [rsp+14Ch] [rbp-DCh]
  __int64 v80; // [rsp+150h] [rbp-D8h]
  int v81; // [rsp+158h] [rbp-D0h]
  int v82; // [rsp+15Ch] [rbp-CCh]
  __int64 v83; // [rsp+160h] [rbp-C8h]
  __int64 v84; // [rsp+168h] [rbp-C0h]
  int v85; // [rsp+170h] [rbp-B8h]
  __int128 v86; // [rsp+174h] [rbp-B4h]
  char v87[92]; // [rsp+184h] [rbp-A4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v73 = -2LL;
  v68 = a4;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
  v63 = v6;
  try
  {
    if ( ((unsigned __int8 (*)(void))(*this)[19])() )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x80070057LL);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942487LL;
    }
    EnterCriticalSection(v6);
    v9 = this[28];
    v10 = this[27];
    if ( v10 != v9 )
    {
      do
      {
        if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v7, v10) )
          break;
        ++v10;
      }
      while ( v10 != v9 );
      if ( v10 != v9 )
      {
        for ( i = v10 + 1; i != v9; ++i )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v7, i) )
          {
            v36 = 0LL;
            if ( &v65 != (_QWORD **)i )
            {
              v36 = *i;
              *i = 0LL;
            }
            v7 = *v10;
            *v10 = v36;
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
            ++v10;
          }
        }
      }
    }
    v11 = this[28];
    if ( v10 != v11 )
    {
      v37 = v10;
      do
      {
        v38 = *v37;
        if ( *v37 )
        {
          *v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
        ++v37;
      }
      while ( v37 != v11 );
      this[28] = v10;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    v58 = 0LL;
    for ( j = this[27]; ; ++j )
    {
      if ( j == this[28] )
      {
LABEL_9:
        if ( v58 )
          goto LABEL_55;
        v76[3] = 0;
        v79 = 0;
        v82 = 0;
        memset_0(v87, 0, 0x54uLL);
        v13 = (__int64 *)*((_QWORD *)a2 + 2);
        v76[0] = *((_DWORD *)v13 + 2);
        v76[1] = 0;
        v80 = *v13;
        v76[2] = *(unsigned __int16 *)(v13[2] + 16) + 18;
        v77 = v13[2];
        v81 = *(unsigned __int16 *)(v13[2] + 16) + 18;
        v83 = v13[2];
        v84 = v13[3];
        v85 = 0;
        v86 = *((_OWORD *)v13 + 2);
        v78 = *((unsigned __int8 *)v13 + 50);
        v58 = 0LL;
        v14 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
        v15 = v14;
        v62 = v14;
        if ( v14 )
        {
          v14[5] = 1LL;
          *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `IInspectable'};
          v14[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
          v14[2] = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
          v14[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *v15 = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
          v15[1] = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
          v15[2] = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
          v15[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          v15[6] = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 7), 0, 0);
          v15[12] = 0LL;
          *((_DWORD *)v15 + 26) = 0;
          v15[14] = 0LL;
          *((_DWORD *)v15 + 30) = 0;
          *((_WORD *)v15 + 62) = 0;
          *((_DWORD *)v15 + 32) = 0;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 17), 0, 0);
          v15[22] = 0LL;
          v15[23] = 0LL;
          v15[24] = 0LL;
          v15[25] = 0LL;
          v15[26] = 0LL;
          v15[27] = 0LL;
          v64 = (char *)v15;
          v62 = 0LL;
          v16 = CProcessSubmixProxy::RuntimeClassInitialize(
                  (CProcessSubmixProxy *)v15,
                  a2,
                  (struct PROCESS_SUBMIX_DESCRIPTOR *)v76,
                  (struct IStreamGroupProxy *)this,
                  v55);
          if ( v16 < 0 )
          {
            Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v64);
            Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v62);
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IProcessSubmixProxy **))*v15)(
                    v15,
                    &GUID_1c09b051_783b_4f90_a426_dc76e6cdb825,
                    &v58);
            if ( v15 )
              (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          }
          if ( v16 >= 0 )
          {
            v60 = 0LL;
            v17 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v58, &v60);
            v18 = v17;
            if ( v17 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x194,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v17);
              if ( v60 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v58);
              if ( v6 )
                LeaveCriticalSection(v6);
              return v18;
            }
            else
            {
              v19 = this[28];
              if ( this[29] == v19 )
              {
                std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
                  this + 27,
                  v19,
                  &v60);
              }
              else
              {
                v51 = v60;
                *v19 = v60;
                if ( v51 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
                ++this[28];
              }
              v65 = v69;
              v20 = v58;
              if ( v58 )
                (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v58 + 8LL))(v58);
              v69[0] = off_18014F518;
              v69[1] = v20;
              v70 = v69;
              v74 = v69;
              v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
              v23 = v21;
              v24 = 0;
              if ( !*(_BYTE *)(v21 + 80) )
              {
                if ( *(_QWORD *)v21 )
                  goto LABEL_24;
                Threadpool = CreateThreadpool(0LL);
                *(_QWORD *)v23 = Threadpool;
                if ( Threadpool )
                  goto LABEL_137;
                LastError = GetLastError();
                v24 = LastError;
                if ( LastError > 0 )
                  v24 = (unsigned __int16)LastError | 0x80070000;
                if ( v24 >= 0 )
                {
LABEL_137:
                  if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)v23, 1u) )
                    goto LABEL_60;
                  v53 = GetLastError();
                  v24 = v53;
                  if ( v53 > 0 )
                    v24 = (unsigned __int16)v53 | 0x80070000;
                  if ( v24 >= 0 )
                  {
LABEL_60:
                    SetThreadpoolThreadMaximum(*(PTP_POOL *)v23, 1u);
                    *(_QWORD *)(v23 + 16) = *(_QWORD *)v23;
LABEL_24:
                    v25 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
                    v26 = v25;
                    v61 = v25;
                    if ( v25 )
                    {
                      *v25 = 0LL;
                      v25[1] = 0LL;
                      v25[2] = 0LL;
                    }
                    else
                    {
                      v26 = 0LL;
                    }
                    v75 = v26;
                    if ( v26 )
                    {
                      v61 = v71;
                      v72 = 0LL;
                      if ( v70 )
                        v72 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v70)(v70, v71);
                      v61 = v71;
                      v26[2] = v23;
                      ProcessHeap = GetProcessHeap();
                      v28 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
                      v29 = v28;
                      v65 = v28;
                      if ( v28 )
                      {
                        *((_DWORD *)v28 + 2) = 1;
                        *((_DWORD *)v28 + 3) = 1;
                        *v28 = &std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
                        v64 = (char *)(v28 + 2);
                        v28[9] = 0LL;
                        if ( v72 )
                          v28[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v72)(v72, (__int64)(v28 + 2));
                      }
                      else
                      {
                        v29 = 0LL;
                      }
                      *v26 = v29 + 2;
                      v30 = (std::_Ref_count_base *)v26[1];
                      v26[1] = v29;
                      if ( v30 )
                        std::_Ref_count_base::_Decref(v30);
                      if ( *v26 )
                        v24 = 0;
                      else
                        v24 = -2147024882;
                      if ( v72 )
                      {
                        if ( v72 == v71 )
                          v22 = 0LL;
                        else
                          LOBYTE(v22) = 1;
                        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v72 + 32LL))(v72, v22);
                        v72 = 0LL;
                      }
                      if ( v24 >= 0 )
                      {
                        ThreadpoolWork = CreateThreadpoolWork(
                                           CSerialWorkQueue::WorkCallback,
                                           v26,
                                           (PTP_CALLBACK_ENVIRON)(v23 + 8));
                        if ( ThreadpoolWork )
                        {
                          v24 = 0;
                          goto LABEL_43;
                        }
                        v54 = GetLastError();
                        v24 = v54;
                        if ( v54 > 0 )
                          v24 = (unsigned __int16)v54 | 0x80070000;
                        if ( v24 >= 0 )
                        {
LABEL_43:
                          v26 = 0LL;
                          SubmitThreadpoolWork(ThreadpoolWork);
                        }
                      }
                    }
                    else
                    {
                      v24 = -2147024882;
                    }
                    if ( v26 )
                      _WorkTask::`scalar deleting destructor'((_WorkTask *)v26, v22);
                  }
                }
              }
              if ( v70 )
              {
                if ( v70 == v69 )
                  v22 = 0LL;
                else
                  LOBYTE(v22) = 1;
                (*(void (__fastcall **)(_QWORD *, __int64))(*v70 + 32LL))(v70, v22);
                v70 = 0LL;
              }
              if ( v24 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x19C,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                  (const char *)(unsigned int)v24,
                  v56);
              if ( v60 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
              v6 = v63;
LABEL_55:
              v32 = v58;
              v58 = 0LL;
              *v68 = v32;
              if ( v6 )
                LeaveCriticalSection(v6);
              return 0LL;
            }
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v62);
          v16 = -2147024882;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x190,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v58);
        if ( v6 )
          LeaveCriticalSection(v6);
        return (unsigned int)v16;
      }
      v39 = *j;
      v66 = v39;
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      v57 = 0LL;
      v40 = Microsoft::WRL::WeakRef::As<IInspectable>(&v66, &v57);
      v41 = v57;
      if ( v40 >= 0 && v57 )
      {
        v59 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v57, &v59) >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v59 + 208LL))(v59) )
          {
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
            v43 = v57;
            if ( v57 )
            {
              v57 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            }
            if ( v39 )
              goto LABEL_116;
          }
          else
          {
            v44 = *(_QWORD *)a2;
            LODWORD(v60) = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v59 + 104LL))(v59);
            v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 40LL))(v44);
            if ( v45 == (_DWORD)v60 )
            {
              if ( *((_BYTE *)a2 + 8) == (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v59 + 120LL))(v59) )
              {
                v48 = v58;
                v49 = v59;
                if ( v58 != v59 )
                {
                  if ( v59 )
                  {
                    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v59 + 8LL))(v59);
                    v48 = v58;
                  }
                  v67 = v48;
                  v58 = v49;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
                v50 = v57;
                if ( v57 )
                {
                  v57 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                }
                if ( v39 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                goto LABEL_9;
              }
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
              v47 = v57;
              if ( v57 )
              {
                v57 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
              }
              if ( v39 )
              {
LABEL_116:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                continue;
              }
            }
            else
            {
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
              v46 = v57;
              if ( v57 )
              {
                v57 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
              }
              if ( v39 )
                goto LABEL_116;
            }
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
          v42 = v57;
          if ( v57 )
          {
            v57 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
          if ( v39 )
            goto LABEL_116;
        }
      }
      else
      {
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        if ( v39 )
          goto LABEL_116;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A2,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v8);
  }
  return result;
}
