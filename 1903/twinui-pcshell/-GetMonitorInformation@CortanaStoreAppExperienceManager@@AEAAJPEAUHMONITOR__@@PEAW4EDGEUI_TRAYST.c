/*
 * XREFs of ?GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1801BCD3C
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE850 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::GetMonitorInformation(
        CortanaStoreAppExperienceManager *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  LONG v19; // r10d
  int v20; // r8d
  LONG v21; // r11d
  int v22; // r9d
  int v24[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+38h] [rbp-61h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-59h]
  __int64 v27; // [rsp+50h] [rbp-49h]
  struct tagMONITORINFO mi; // [rsp+58h] [rbp-41h] BYREF
  __m128i v29; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v27 = -2LL;
  v25 = 0LL;
  v9 = *((_QWORD *)this + 28);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v11 = v10(v9, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v25);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *(_QWORD *)v24 = 0LL;
    v13 = v25;
    v14 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v25 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    v15 = v14(v13, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v24);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v24 + 80LL))(
              *(_QWORD *)v24,
              a3);
      v12 = v15;
      if ( v15 >= 0 )
      {
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v17 = 2147549183LL;
          v16 = 987LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)v17);
LABEL_26:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
          goto LABEL_27;
        }
        *a4 = mi.rcMonitor;
        *a5 = mi.rcWork;
        v15 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v24 + 112LL))(*(_QWORD *)v24, &v29);
        v12 = v15;
        if ( v15 >= 0 )
        {
          v26 = (struct tagRECT)v29;
          v18 = _mm_srli_si128(v29, 8).m128i_u64[0];
          v19 = _mm_cvtsi128_si32(v29);
          v20 = v18 - v19;
          v21 = _mm_cvtsi128_si32(_mm_srli_si128(v29, 4));
          v22 = _mm_cvtsi128_si32(_mm_srli_si128(v29, 12)) - v21;
          if ( *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 == 1 )
            {
              if ( v21 < mi.rcMonitor.top )
              {
                v26.top = mi.rcMonitor.top;
                v26.bottom = v22 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a3 == 2 )
            {
              if ( (int)v18 > mi.rcMonitor.right )
              {
                v26.right = mi.rcMonitor.right;
                v26.left = mi.rcMonitor.right - v20;
              }
            }
            else if ( *(_DWORD *)a3 == 3 && SHIDWORD(v18) > mi.rcMonitor.bottom )
            {
              v26.bottom = mi.rcMonitor.bottom;
              v26.top = mi.rcMonitor.bottom - v22;
            }
          }
          else if ( v19 < mi.rcMonitor.left )
          {
            v26.left = mi.rcMonitor.left;
            v26.right = v20 + mi.rcMonitor.left;
          }
          *a6 = v26;
          v12 = 0;
          goto LABEL_26;
        }
        v16 = 993LL;
      }
      else
      {
        v16 = 983LL;
      }
    }
    else
    {
      v16 = 980LL;
    }
    v17 = (unsigned int)v15;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_27:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return v12;
}
