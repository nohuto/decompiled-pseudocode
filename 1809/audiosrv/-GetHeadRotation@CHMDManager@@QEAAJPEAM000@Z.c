/*
 * XREFs of ?GetHeadRotation@CHMDManager@@QEAAJPEAM000@Z @ 0x1800F79D0
 * Callers:
 *     s_GetHeadRotation @ 0x1800F7F60 (s_GetHeadRotation.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CHMDManager::GetHeadRotation(CHMDManager *this, float *a2, float *a3, float *a4, float *a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v21[1] = -2LL;
  v19 = 0LL;
  GetSystemTimePreciseAsFileTime(&v19);
  if ( (v19 & 0x8000000000000000uLL) != 0LL )
  {
    v11 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      59LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)0x8000000BLL);
    return v11;
  }
  v9 = *(_QWORD *)this;
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(
          v9,
          (unsigned int)v19 | (HIDWORD(v19) << 32),
          &v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this + 2);
    v21[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 88LL))(v12, v18, v21);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        67LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_13:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v21);
      goto LABEL_14;
    }
    v14 = *((_QWORD *)this + 1);
    v20 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v14 + 88LL))(
            v14,
            v18,
            v21[0],
            &v20);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 56LL))(v20, v22);
      v11 = v15;
      if ( v15 >= 0 )
      {
        *a2 = *(float *)v22;
        *a3 = *(float *)&v22[1];
        *a4 = *(float *)&v22[2];
        *a5 = *(float *)&v22[3];
        v11 = 0;
        goto LABEL_12;
      }
      v16 = 73LL;
    }
    else
    {
      v16 = 70LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    62LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  return v11;
}
