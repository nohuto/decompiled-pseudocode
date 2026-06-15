/*
 * XREFs of ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14005DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC68 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14005CB74 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14005DF8C (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::Initialize(
        CSpatialCrossProcessClientEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ICrossProcessMemory *v15; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 888);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::Initialize", 147);
  if ( *((_BYTE *)this - 824) )
  {
    v4 = -2005139440;
    v5 = 149LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
      (const char *)v4);
    goto LABEL_16;
  }
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 150LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)a2;
  v15 = a2;
  (*(void (__fastcall **)(struct ICrossProcessMemory *))(v6 + 8))(a2);
  v7 = CSpatialCrossProcessBaseEndpoint::MapCPMemory((CSpatialCrossProcessClientEndpoint *)((char *)this - 920), a2);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v7 = CSparseIndexMapRT::SetMapSize(
           (CSpatialCrossProcessClientEndpoint *)((char *)this + 24),
           *(_DWORD *)(*((_QWORD *)this - 3) + 524LL) + *(_DWORD *)(*((_QWORD *)this - 3) + 520LL));
    v4 = v7;
    if ( v7 >= 0 )
    {
      v9 = *((_QWORD *)this - 93);
      *((_QWORD *)this - 96) = 0LL;
      *((_QWORD *)this - 98) = 0LL;
      *((float *)this - 197) = (float)*(int *)(v9 + 4);
      if ( *(_WORD *)v9 == 0xFFFE )
        v10 = *(_WORD *)(v9 + 18);
      else
        v10 = *(_WORD *)(v9 + 14);
      *((_DWORD *)this - 204) = v10;
      *((_DWORD *)this - 198) = *((_DWORD *)this - 205) * *(unsigned __int16 *)(v9 + 12);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 3) + 72LL), 1u);
      _InterlockedExchange((volatile __int32 *)this - 206, 1);
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this - 104, (__int64)a2);
      v4 = 0;
      goto LABEL_15;
    }
    v8 = 161LL;
  }
  else
  {
    v8 = 155LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpclientendpoint.cpp",
    (const char *)(unsigned int)v7);
LABEL_15:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v15);
LABEL_16:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
