/*
 * XREFs of ?GetEndpointBufferSize@CAudioStream@@QEAAJPEAIPEAM@Z @ 0x1800D9EA8
 * Callers:
 *     ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x1800E4B90 (-GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::GetEndpointBufferSize(CAudioStream *this, unsigned int *a2, float *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 7);
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v10);
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v10 + 176LL))(v10, a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return v7;
}
