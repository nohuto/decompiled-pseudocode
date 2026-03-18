/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18025F02C
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18025F02C (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18025F380 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     RemoveCountFromEndOfArray_AxisWithType_ @ 0x18025E6E4 (RemoveCountFromEndOfArray_AxisWithType_.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x18025E87C (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x18025E904 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18025F02C (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x18025F5FC (RemoveCountFromEndOfArrayAndFree.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD),
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD),
        __int64 a6,
        _OWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 *); // rbx
  int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64 (__fastcall ***)(_QWORD), _QWORD); // rdi
  unsigned int v24; // ebx
  int v25; // eax
  _OWORD *v26; // r13
  __int64 (__fastcall ***v27)(_QWORD); // rbx
  _QWORD *v28; // r15
  __int64 v30; // [rsp+20h] [rbp-91h]
  __int64 (__fastcall ***v31)(_QWORD); // [rsp+50h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-59h]
  unsigned int v33; // [rsp+5Ch] [rbp-55h] BYREF
  int v34; // [rsp+60h] [rbp-51h] BYREF
  int v35; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v36; // [rsp+68h] [rbp-49h]
  __int64 v37; // [rsp+70h] [rbp-41h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-39h]
  _QWORD *v39; // [rsp+80h] [rbp-31h]
  _OWORD *v40; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v41[2]; // [rsp+98h] [rbp-19h] BYREF

  v31 = a5;
  v36 = a6;
  v40 = a7;
  *a8 = 3;
  *a9 = 0LL;
  v39 = a10;
  *a10 = 0LL;
  v13 = *(_QWORD *)a1;
  v38 = a9;
  v41[0] = a4;
  v32 = a3;
  v14 = (*(__int64 (__fastcall **)(__int64))(v13 + 32))(a1);
  v15 = *(_QWORD *)a1;
  v16 = v14;
  v37 = 0LL;
  v34 = 0;
  v35 = 0;
  v17 = *(__int64 (__fastcall **)(__int64))(v15 + 112);
  v33 = 0;
  v18 = v17(a1);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 128LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v37);
  v20 = v19(v18, a3, &v37);
  if ( v20 >= 0 )
  {
    v21 = v36;
    v22 = v41[0];
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64, _QWORD, int *, __int64 (__fastcall ***)(_QWORD), int *, __int64, unsigned int *))(*a2)[3])(
            a2,
            v37,
            v41[0],
            &v34,
            v31,
            &v35,
            v36,
            &v33);
    if ( v20 >= 0 )
    {
      if ( v16 )
      {
        v23 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a1 + 56LL);
        v24 = v23(a1, a2, v32);
        if ( v24 > (unsigned int)v23(a1, (__int64 (__fastcall ***)(_QWORD))v16, v32)
          || (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v16) )
        {
          v22 = v41[0];
          v21 = v36;
        }
        else
        {
          v25 = (*a2)[19](a2);
          v21 = v36;
          v22 = v41[0];
          if ( !v25 )
            v20 = CGestureTargetingManager::ProcessInteractionTree(
                    a1,
                    v16,
                    v32,
                    v41[0],
                    (__int64)v31,
                    v36,
                    (__int64)v40,
                    (__int64)a8,
                    (__int64)v38,
                    (__int64)v39);
        }
      }
      if ( v20 >= 0 )
      {
        RemoveCountFromEndOfArrayAndFree(v33, v21);
        if ( *a8 != 3 )
        {
          v27 = v31;
LABEL_21:
          RemoveCountFromEndOfArray_AxisWithType_(v34, v22 + 8);
          RemoveCountFromEndOfArray_AxisWithType_(v35, (__int64)(v27 + 1));
          goto LABEL_22;
        }
        v26 = v40;
        v41[0] = 0LL;
        v41[1] = 0LL;
        v30 = v21;
        v27 = v31;
        v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _OWORD *, __int64, __int64 (__fastcall ***)(_QWORD), __int64, __int64, _DWORD *, _QWORD *))(*a2)[4])(
                a2,
                v40,
                v22,
                v31,
                v30,
                v37,
                a8,
                v41);
        *v26 = *(_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)&v40, (__int64)v26, (__int64)v41);
        if ( v20 >= 0 && *a8 == 2
          || *a8 == 1 && anonymous_namespace_::DisableBufferingForInteraction(a1, (__int64)a2, v32) )
        {
          *a8 = 2;
          v31 = a2;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
          v20 = 0;
          *v38 = a2;
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v31);
        }
        if ( v20 >= 0 )
        {
          if ( *a8 == 4 )
          {
            *a8 = 3;
            v28 = v39;
            if ( !*v39 )
            {
              v31 = a2;
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
              *v28 = a2;
              v20 = 0;
              Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v31);
            }
          }
          goto LABEL_21;
        }
      }
    }
  }
LABEL_22:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v37);
  return (unsigned int)v20;
}
