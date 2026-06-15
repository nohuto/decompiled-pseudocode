/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800E5CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DB3CC (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-30h] BYREF
  char v16; // [rsp+48h] [rbp-28h]
  __int64 *v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  char v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF

  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) )
  {
    v8 = -2004287487;
    v9 = 2357LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v8);
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 24);
  if ( !v10 )
  {
    v8 = -2004287487;
    v9 = 2358LL;
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 54) )
  {
    v8 = -2147024809;
    v9 = 2360LL;
    goto LABEL_7;
  }
  v21 = 0LL;
  v18 = 0LL;
  v17 = &v21;
  v19 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v10 + 8) + 128LL))(v10 + 8, &v18);
  if ( v19 )
    wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(v17, v18);
  if ( (v8 & 0x80000000) == 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, bool))(*(_QWORD *)v21 + 96LL))(
            v21,
            *(_QWORD *)(*((_QWORD *)this + 24) + 48LL),
            a2,
            a3,
            a4,
            *((_DWORD *)this + 136) == 3);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v8 = 0;
      goto LABEL_16;
    }
    v11 = (unsigned int)v13;
    v12 = 2367LL;
  }
  else
  {
    v11 = v8;
    v12 = 2364LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v11);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
LABEL_17:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
