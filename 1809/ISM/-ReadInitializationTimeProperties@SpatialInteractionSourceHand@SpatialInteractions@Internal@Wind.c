/*
 * XREFs of ?ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800BDA20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z @ 0x1800BCAE0 (-Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ @ 0x1800BFB28 (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadInitializationTimeProperties(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-428h] BYREF
  wchar_t v7[512]; // [rsp+40h] [rbp-418h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+458h] [rbp+0h]

  v6[0] = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, _DWORD *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_Handedness,
         v6,
         4LL,
         0LL);
  if ( v2 >= 0 )
  {
    if ( v6[0] )
    {
      if ( v6[0] == 1 )
      {
        *((_DWORD *)this + 38) = 1;
        return 0LL;
      }
      if ( v6[0] == 2 )
      {
        *((_DWORD *)this + 38) = 2;
        return 0LL;
      }
      swprintf_s<512>(v7, L"Invalid handedness reported by device: %d");
      v3 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v3 && *v3 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::Log_Error_(v4, -2147418113, v7);
      }
    }
    *((_DWORD *)this + 38) = 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v2);
  }
  return 0LL;
}
