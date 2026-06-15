/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140052980
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400548C0 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcess.c)
 * Callees:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140001CCC (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140003A88 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     memcpy_0 @ 0x140017D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A90 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140051F68 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140052CA8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        CCrossProcessBaseClientEndpoint *this,
        struct ICrossProcessMemory *a2,
        __int64 a3,
        struct ICrossProcessEvent *a4,
        struct ICrossProcessEvent *a5,
        unsigned int a6)
{
  int v9; // eax
  char *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  struct ControlData *v16; // r14
  unsigned int *v17; // rdi
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  void *v33; // rcx
  void *v34; // rax
  int v35; // r8d
  struct ControlData *v36; // rdx
  __int64 v37; // rax
  struct ControlData *v39; // [rsp+20h] [rbp-40h] BYREF
  __int64 v40; // [rsp+28h] [rbp-38h] BYREF
  char *v41; // [rsp+30h] [rbp-30h]
  char *v42; // [rsp+40h] [rbp-20h]
  char *v43; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v45; // [rsp+80h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  v9 = *((_DWORD *)this - 86);
  v10 = (char *)this - 400;
  v41 = (char *)this - 400;
  if ( !v9 )
  {
    if ( !a2 )
    {
      v11 = -2147024809;
      v12 = 1021LL;
      goto LABEL_5;
    }
    v40 = 0LL;
    wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(&v40, (__int64)a2);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)a4);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a5);
    v39 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, char *, struct ControlData **))(*(_QWORD *)v40 + 32LL))(v40, &v45, &v39);
    v11 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 1033LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)v14);
LABEL_30:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v40);
      goto LABEL_31;
    }
    v16 = v39;
    v17 = (unsigned int *)((char *)v39 + 196);
    v18 = (void *)AERTGetDLLRTHeap();
    v20 = (void *)AE_ALLOCATE_SAFEMULT(v19, *v17, v18, (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
    *((_QWORD *)this - 40) = v20;
    if ( !v20 )
    {
      v11 = -2147024882;
      v15 = 1040LL;
      v14 = 2147942414LL;
      goto LABEL_10;
    }
    memcpy_0(v20, v17, *v17);
    v42 = (char *)this - 400;
    if ( CCrossProcessBaseEndpoint::IsValidControlData((CCrossProcessBaseClientEndpoint *)((char *)this - 400), v16) )
    {
      v22 = *((_QWORD *)this - 40);
      *((_QWORD *)this - 27) = 0LL;
      *((_QWORD *)this - 29) = 0LL;
      v23 = *(unsigned __int16 *)(v22 + 184);
      *((_DWORD *)this - 78) = v23;
      *((float *)this - 61) = (float)*(int *)(v22 + 176);
      if ( *(_WORD *)(v22 + 172) == 0xFFFE )
        v24 = *(_WORD *)(v22 + 190);
      else
        v24 = *(_WORD *)(v22 + 186);
      *((_DWORD *)this - 74) = v24;
      v25 = *(_DWORD *)(v22 + 156) - *(_DWORD *)(v22 + 152);
      v26 = a6;
      *((_DWORD *)this - 62) = v25;
      v27 = v25 / v23;
      if ( v26 <= v27 )
      {
        if ( !v26 )
          v26 = v27;
        *((_DWORD *)this - 76) = v26;
        v28 = (void *)AERTCreateZoneHeap(v23 * v26);
        *((_QWORD *)this - 32) = v28;
        if ( v28 )
        {
          v30 = AE_ALLOCATE_SAFEMULT(
                  v29,
                  (unsigned int)(*((_DWORD *)this - 76) * *((_DWORD *)this - 78)),
                  v28,
                  AERTZoneAllocate);
          *((_QWORD *)this - 36) = v30;
          v43 = (char *)this - 400;
          if ( v30 )
          {
            v36 = v39;
            v37 = *((_QWORD *)this - 40);
            *((_QWORD *)this - 41) = v39;
            *((_QWORD *)this - 35) = (char *)v36 + *(unsigned int *)(v37 + 148);
            if ( *((_DWORD *)v36 + 45) != -1 )
              *((_QWORD *)this - 34) = (char *)v39 + *(unsigned int *)(*((_QWORD *)this - 41) + 180LL);
            _InterlockedExchange((volatile __int32 *)this - 86, 1);
            wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this - 42, v40);
            v11 = 0;
            goto LABEL_30;
          }
          v11 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x440,
            (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)0x8007000ELL);
          v33 = (void *)*((_QWORD *)v10 + 18);
          if ( v33 )
          {
            AERTDestroyZoneHeap(v33, v31, v32);
            *((_QWORD *)v10 + 18) = 0LL;
          }
          goto LABEL_26;
        }
        v11 = -2147024882;
        v21 = 1079LL;
      }
      else
      {
        v11 = -2147024809;
        v21 = 1073LL;
      }
    }
    else
    {
      v11 = -2005139387;
      v21 = 1049LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v11);
LABEL_26:
    v34 = (void *)AERTGetDLLRTHeap();
    AERTFree(*((void **)v10 + 10), v34, v35);
    *((_QWORD *)v10 + 10) = 0LL;
    goto LABEL_30;
  }
  v11 = -2005139440;
  v12 = 1020LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)v11);
LABEL_31:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v41 + 16));
  return v11;
}
