/*
 * XREFs of ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CD840
 * Callers:
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1800CD788 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x1800CE42C (-GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::ConfigureRecognizer(EdgyProcessorTarget *this)
{
  __int64 v2; // rdx
  EdgyImpl *v3; // rcx
  unsigned int v4; // edi
  bool CandidateGestureParameters; // al
  int v6; // eax
  unsigned int v7; // esi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v16; // [rsp+50h] [rbp+20h] BYREF
  __int16 v17; // [rsp+54h] [rbp+24h]
  __int16 v18; // [rsp+56h] [rbp+26h]
  unsigned int v19; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)this + 8) )
    goto LABEL_16;
  v2 = 0LL;
  v3 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
  v16 = 0;
  v4 = 0;
  v19 = 0;
  if ( *(_QWORD *)v3 )
  {
    CandidateGestureParameters = EdgyImpl::GetCandidateGestureParameters(v3, &v16, (enum OrientationBias *)&v19);
    v2 = v16;
    v4 = v19;
  }
  else
  {
    CandidateGestureParameters = 0;
  }
  if ( !CandidateGestureParameters )
  {
LABEL_16:
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), 0LL);
    if ( v9 < 0 )
    {
      v10 = 602LL;
      goto LABEL_10;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), 0LL);
    if ( v13 < 0 )
    {
      v14 = 603LL;
      goto LABEL_15;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x243,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19), v4);
    if ( v9 < 0 )
    {
      v10 = 580LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    v11 = *((_QWORD *)this + 19);
    v18 = 0;
    v17 = 35;
    v16 = 9;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 112LL))(v11, &v16);
    if ( v9 < 0 )
    {
      v10 = 590LL;
      goto LABEL_10;
    }
    v12 = *((_QWORD *)this + 19);
    v16 = 10;
    v17 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 112LL))(v12, &v16);
    if ( v13 < 0 )
    {
      v14 = 598LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  return 0LL;
}
