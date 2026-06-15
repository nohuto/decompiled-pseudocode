/*
 * XREFs of ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18013ED8C
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005A158 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::InitializeAppServiceMode(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( *((_BYTE *)this + 216) )
  {
    v3 = *((_QWORD *)this + 28);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, (char *)this + 8);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8DF,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_7;
      }
      *((_BYTE *)this + 217) = 1;
    }
  }
  v5 = 0;
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
