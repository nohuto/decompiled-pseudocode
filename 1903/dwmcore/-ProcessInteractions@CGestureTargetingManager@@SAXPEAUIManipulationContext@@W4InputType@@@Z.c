/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x180260C40
 * Callers:
 *     ?CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238010 (-CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801E4F4C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x180260084 (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1802608EC (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, BOOL *); // rbx
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v14)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD); // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall **v17)(_QWORD); // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+90h] [rbp-70h]
  __int16 v21; // [rsp+98h] [rbp-68h] BYREF
  char v22; // [rsp+9Ah] [rbp-66h]
  __int128 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  BOOL v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+E8h] [rbp-18h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v5 = v16;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  LODWORD(v30) = 0;
  *(_QWORD *)((char *)&v31 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  LOWORD(v31) = 0;
  v23 = 0LL;
  HIDWORD(v31) = 0;
  v18 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v19 = 0LL;
  v20 = 0;
  LOWORD(v17) = 0;
  BYTE2(v17) = 0;
  v27 = 0LL;
  v28 = 0;
  v13 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v6 = *a1;
    v13 = 2;
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(a1);
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v14, v7);
  }
  v8 = v13;
  if ( v13 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              (__int64)a1,
              v5,
              a2,
              (__int64)&v21,
              &v17,
              (__int64)&v26,
              &v31,
              &v13,
              &v14,
              &v15) >= 0 )
  {
    v8 = v13;
    if ( v13 == 3 )
    {
LABEL_11:
      v10 = *a1;
      v29 = 1;
      v30 = v15;
      v11 = *(void (__fastcall **)(__int64 *, BOOL *))(v10 + 104);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
      v11(a1, &v29);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
      goto LABEL_12;
    }
LABEL_6:
    if ( v8 != 4 )
    {
      v30 = v14;
      v29 = v8 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
      if ( v13 == 2 )
      {
        v9 = v14;
        if ( v9 == (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1) )
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
      }
      (*(void (__fastcall **)(__int64 *, BOOL *))(*a1 + 88))(a1, &v29);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v26);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v18);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v23);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
  return Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
}
