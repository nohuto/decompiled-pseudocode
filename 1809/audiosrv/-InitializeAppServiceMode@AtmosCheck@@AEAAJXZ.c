/*
 * XREFs of ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18013A01C
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::InitializeAppServiceMode(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_BYTE *)this + 184) )
  {
    v3 = *((_QWORD *)this + 24);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, AtmosCheck *))(*(_QWORD *)v3 + 48LL))(v3, this);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          2029LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_7;
      }
      *((_BYTE *)this + 185) = 1;
    }
  }
  v5 = 0;
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
