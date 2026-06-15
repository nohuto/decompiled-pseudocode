/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800DA640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800CCDD4 (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-28h]
  __int64 *v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF

  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) )
  {
    v8 = -2004287487;
    v9 = 2349LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 24);
  if ( !v10 )
  {
    v8 = -2004287487;
    v9 = 2350LL;
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    v8 = -2147024809;
    v9 = 2352LL;
    goto LABEL_7;
  }
  v21 = 0LL;
  v18 = 0LL;
  v17 = &v21;
  v19 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v10 + 8) + 128LL))(v10 + 8, &v18);
  if ( v19 )
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(v17, v18);
  if ( (v8 & 0x80000000) == 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v21 + 96LL))(
            v21,
            *(_QWORD *)(*((_QWORD *)this + 24) + 48LL),
            a2,
            a3,
            a4);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v8 = 0;
      goto LABEL_16;
    }
    v11 = (unsigned int)v13;
    v12 = 2358LL;
  }
  else
  {
    v11 = v8;
    v12 = 2356LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v11);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
LABEL_17:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
