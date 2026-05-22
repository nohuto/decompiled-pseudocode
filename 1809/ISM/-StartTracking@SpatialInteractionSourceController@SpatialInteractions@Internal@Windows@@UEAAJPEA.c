/*
 * XREFs of ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180127240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180127490 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x180127588 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StartTracking(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  __int64 v9; // r15
  int v10; // edi
  _QWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v15; // rcx
  unsigned int v16; // [rsp+30h] [rbp-91h] BYREF
  int v17[2]; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-81h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-79h] BYREF
  __int128 v20; // [rsp+50h] [rbp-71h]
  __int128 v21; // [rsp+60h] [rbp-61h]
  __int128 v22; // [rsp+70h] [rbp-51h]
  _OWORD v23[3]; // [rsp+80h] [rbp-41h] BYREF
  char v24; // [rsp+B0h] [rbp-11h]
  __int64 v25; // [rsp+B8h] [rbp-9h]
  _QWORD v26[2]; // [rsp+C0h] [rbp-1h] BYREF
  int v27; // [rsp+D0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v25 = -2LL;
  v16 = 0;
  _InterlockedExchange64((volatile __int64 *)(a1 + 672), GetTickCount64());
  v9 = *(_QWORD *)(a1 + 680);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 600));
  if ( !*(_BYTE *)(a1 + 592) )
  {
    *(_BYTE *)(a1 + 592) = 1;
    pftDueTime = (struct _FILETIME)(-10000 * v9);
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 584), &pftDueTime, 0, 0);
  }
  if ( a1 != -600 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 600));
  if ( *(_BYTE *)(a1 + 456) )
  {
    *(_BYTE *)(a1 + 457) = 1;
    return v16;
  }
  v18 = 0;
  *(_QWORD *)v17 = 0LL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v27 = 0;
  *(_QWORD *)&v20 = a1;
  *((_QWORD *)&v20 + 1) = v17;
  *(_QWORD *)&v21 = &v16;
  *((_QWORD *)&v21 + 1) = &a5;
  *(_QWORD *)&v22 = &v18;
  *((_QWORD *)&v22 + 1) = v26;
  v23[0] = v20;
  v23[1] = v21;
  v23[2] = v22;
  v24 = 1;
  v10 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)a1,
          a3,
          (struct Windows::Internal::Holographic::DynamicNodeInfo *)v26,
          &v18);
  v16 = v10;
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD **)v17;
    if ( *(_QWORD *)v17 )
    {
      *(_QWORD *)v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *, _QWORD, int *))(*(_QWORD *)a2 + 32LL))(
            a2,
            a4,
            v26,
            a5,
            v17);
    v10 = v12;
    v16 = v12;
    if ( v12 >= 0 )
    {
      if ( !a4 || a4 != *(HSTRING *)(a1 + 96) )
      {
        WindowsDeleteString(*(HSTRING *)(a1 + 96));
        *(_QWORD *)(a1 + 96) = 0LL;
        WindowsDuplicateString(a4, (HSTRING *)(a1 + 96));
      }
      v24 = 0;
      lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()(v23);
      v15 = *(_QWORD **)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
      return v16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AB,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v12);
  }
  v24 = 0;
  lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()(v23);
  v13 = *(_QWORD **)v17;
  if ( *(_QWORD *)v17 )
  {
    *(_QWORD *)v17 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return (unsigned int)v10;
}
