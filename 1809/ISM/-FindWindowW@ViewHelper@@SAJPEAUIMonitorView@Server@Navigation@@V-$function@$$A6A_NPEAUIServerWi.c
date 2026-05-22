/*
 * XREFs of ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x18000CEC4
 * Callers:
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x18000C9E0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x18000CAF4 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call @ 0x18000D350 (std--_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation-_ea_18000D350.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::FindWindowW(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v31[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v33; // [rsp+80h] [rbp+38h] BYREF
  __int64 v34; // [rsp+88h] [rbp+40h]
  __int64 v35; // [rsp+90h] [rbp+48h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+50h] BYREF

  v34 = a2;
  v31[1] = -2LL;
  *a3 = 0LL;
  v35 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 128LL))(a1, &v35);
  if ( v5 < 0 )
  {
    v6 = 292LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v5);
    v8 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return (unsigned int)v5;
  }
  v33 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 48LL))(v35, &v33);
  if ( v5 < 0 )
  {
    v6 = 296LL;
    goto LABEL_3;
  }
  v12 = 0;
  if ( v33 <= 0 )
  {
LABEL_20:
    v19 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = *(_QWORD *)(a2 + 56);
    if ( v20 )
    {
      LOBYTE(v11) = v20 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v11);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    while ( 1 )
    {
      v36 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v12, &v36);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_40;
      }
      v30 = 0LL;
      v15 = (**v36)(v36, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, &v30);
      v14 = v15;
      if ( v15 < 0 )
        break;
      v31[0] = v30;
      v16 = *(_QWORD *)(a2 + 56);
      if ( !v16 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 16LL))(v16, v31) )
      {
        v21 = v30;
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v21 = v30;
        }
        *a3 = v21;
        if ( v21 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
        }
        v23 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = *(_QWORD *)(a2 + 56);
        if ( v24 )
        {
          LOBYTE(v11) = v24 != a2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v11);
          *(_QWORD *)(a2 + 56) = 0LL;
        }
        return 0LL;
      }
      v17 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
      }
      if ( (int)++v12 >= v33 )
        goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v15);
    v26 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
LABEL_40:
    v27 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[2])(v27);
    }
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = *(_QWORD *)(a2 + 56);
    if ( v29 )
    {
      LOBYTE(v25) = v29 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v25);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v14;
  }
}
