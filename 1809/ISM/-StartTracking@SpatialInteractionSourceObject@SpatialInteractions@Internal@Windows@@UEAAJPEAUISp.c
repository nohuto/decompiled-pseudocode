/*
 * XREFs of ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BB390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___ @ 0x1800BBFC0 (wil--details--lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___--_lambda_call__lambda_2610.c)
 *     wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___ @ 0x1800BC078 (wil--details--lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___--_lambda_call__lambda_8af7.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking(
        HSTRING *a1,
        __int64 a2,
        __int64 a3,
        HSTRING a4,
        unsigned int a5)
{
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  HSTRING *v13; // rbx
  _QWORD *v14; // rcx
  int v16; // [rsp+30h] [rbp-A1h] BYREF
  int v17; // [rsp+34h] [rbp-9Dh] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-99h] BYREF
  __int128 v19; // [rsp+40h] [rbp-91h] BYREF
  __int128 v20; // [rsp+50h] [rbp-81h]
  __int128 *v21; // [rsp+60h] [rbp-71h]
  __int64 v22; // [rsp+68h] [rbp-69h]
  HSTRING *v23; // [rsp+70h] [rbp-61h]
  _OWORD v24[2]; // [rsp+78h] [rbp-59h] BYREF
  __int128 *v25; // [rsp+98h] [rbp-39h]
  char v26; // [rsp+A0h] [rbp-31h]
  __int128 v27; // [rsp+A8h] [rbp-29h] BYREF
  int v28; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-11h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v22 = -2LL;
  v17 = 0;
  v18 = 0LL;
  v27 = 0uLL;
  v28 = 0;
  *(_QWORD *)&v19 = a1;
  *((_QWORD *)&v19 + 1) = &v18;
  *(_QWORD *)&v20 = &v17;
  *((_QWORD *)&v20 + 1) = &a5;
  v21 = &v27;
  v24[0] = v19;
  v24[1] = v20;
  v25 = &v27;
  v26 = 1;
  v16 = 0;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
          (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v27) )
  {
    *(_QWORD *)&v29 = a1;
    *((_QWORD *)&v29 + 1) = &v16;
    *(_QWORD *)&v30 = &v27;
    v19 = v29;
    *(_QWORD *)&v20 = &v27;
    BYTE8(v20) = 1;
    memset_0(&v29, 0, 0x20uLL);
    v9 = (*(__int64 (__fastcall **)(HSTRING, void *, __int128 *, __int64, _QWORD))(*(_QWORD *)a1[15] + 72LL))(
           a1[15],
           &SPATIALPROP_DynamicNode,
           &v29,
           32LL,
           0LL);
    v10 = v9;
    v16 = v9;
    if ( v9 < 0 )
    {
      v11 = 109LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v9);
      wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___(&v19);
      goto LABEL_11;
    }
    v27 = v30;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *))(*(_QWORD *)a3 + 128LL))(a3, &v27, &v28);
    v10 = v9;
    v16 = v9;
    if ( v9 < 0 )
    {
      v11 = 113LL;
      goto LABEL_4;
    }
    AcquireSRWLockExclusive((PSRWLOCK)a1 + 6);
    v23 = a1 + 6;
    *(_OWORD *)(a1 + 7) = v27;
    *((_DWORD *)a1 + 18) = v28;
    (*((void (__fastcall **)(HSTRING *))*a1 + 11))(a1);
    if ( a1 != (HSTRING *)-48LL )
      ReleaseSRWLockExclusive((PSRWLOCK)a1 + 6);
    wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___(&v19);
  }
  v10 = v16;
LABEL_11:
  v17 = v10;
  if ( v10 >= 0 )
  {
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int128 *, _QWORD, _QWORD **))(*(_QWORD *)a2 + 32LL))(
            a2,
            a4,
            &v27,
            a5,
            &v18);
    v17 = v10;
    if ( v10 >= 0 )
    {
      v13 = a1 + 12;
      if ( !a4 || a4 != *v13 )
      {
        WindowsDeleteString(*v13);
        *v13 = 0LL;
        WindowsDuplicateString(a4, a1 + 12);
      }
      v10 = 0;
    }
  }
  wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___(v24);
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 16LL))(v14, *v14);
  }
  return (unsigned int)v10;
}
