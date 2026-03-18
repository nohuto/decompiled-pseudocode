/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801FA0C8
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801FA0C8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801FA404 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     RemoveCountFromEndOfArray_AxisWithType_ @ 0x1801F97AC (RemoveCountFromEndOfArray_AxisWithType_.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1801F993C (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801F99C8 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801FA0C8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801FA674 (RemoveCountFromEndOfArrayAndFree.c)
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
  __int64 v16; // r12
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rbx
  int v19; // edi
  __int64 v20; // rbx
  unsigned int v21; // ebx
  int v22; // eax
  _OWORD *v23; // r12
  __int64 (__fastcall ***v24)(_QWORD); // r13
  _QWORD *v25; // r14
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+50h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-59h]
  unsigned int v29; // [rsp+5Ch] [rbp-55h] BYREF
  int v30; // [rsp+60h] [rbp-51h] BYREF
  int v31; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v32; // [rsp+68h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+70h] [rbp-41h]
  _QWORD *v34; // [rsp+78h] [rbp-39h]
  _OWORD *v35; // [rsp+80h] [rbp-31h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-21h] BYREF

  v27 = a5;
  v35 = a7;
  *a8 = 3;
  *a9 = 0LL;
  v34 = a10;
  *a10 = 0LL;
  v13 = *(_QWORD *)a1;
  v33 = a9;
  v36[0] = a4;
  v28 = a3;
  v14 = (*(__int64 (__fastcall **)(__int64))(v13 + 32))(a1);
  v15 = *(_QWORD *)a1;
  v16 = v14;
  v32 = 0LL;
  v30 = 0;
  v31 = 0;
  v17 = *(__int64 (__fastcall **)(__int64))(v15 + 112);
  v29 = 0;
  v18 = v17(a1);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v32);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 128LL))(v18, a3, &v32);
  if ( v19 >= 0 )
  {
    v20 = v36[0];
    v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64, _QWORD, int *, __int64 (__fastcall ***)(_QWORD), int *, __int64, unsigned int *))(*a2)[3])(
            a2,
            v32,
            v36[0],
            &v30,
            v27,
            &v31,
            a6,
            &v29);
    if ( v19 >= 0 )
    {
      if ( v16 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a1 + 56LL))(
                a1,
                a2,
                v28);
        if ( v21 > (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v16, v28)
          || (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v16) )
        {
          v20 = v36[0];
        }
        else
        {
          v22 = (*a2)[19](a2);
          v20 = v36[0];
          if ( !v22 )
            v19 = CGestureTargetingManager::ProcessInteractionTree(
                    a1,
                    v16,
                    v28,
                    v36[0],
                    (__int64)v27,
                    a6,
                    (__int64)v35,
                    (__int64)a8,
                    (__int64)v33,
                    (__int64)v34);
        }
      }
      if ( v19 >= 0 )
      {
        RemoveCountFromEndOfArrayAndFree(v29, a6);
        if ( *a8 != 3 )
        {
          v24 = v27;
LABEL_21:
          RemoveCountFromEndOfArray_AxisWithType_(v30, v20 + 8);
          RemoveCountFromEndOfArray_AxisWithType_(v31, (__int64)(v24 + 1));
          goto LABEL_22;
        }
        v23 = v35;
        v36[0] = 0LL;
        v36[1] = 0LL;
        v24 = v27;
        v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _OWORD *, __int64, __int64 (__fastcall ***)(_QWORD), __int64, __int64, _DWORD *, _QWORD *))(*a2)[4])(
                a2,
                v35,
                v20,
                v27,
                a6,
                v32,
                a8,
                v36);
        *v23 = *(_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)&v35, (__int64)v23, (__int64)v36);
        if ( v19 >= 0 && *a8 == 2
          || *a8 == 1 && anonymous_namespace_::DisableBufferingForInteraction(a1, (__int64)a2, v28) )
        {
          *a8 = 2;
          v27 = a2;
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
          Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
          v19 = 0;
          *v33 = a2;
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
        }
        if ( v19 >= 0 )
        {
          if ( *a8 == 4 )
          {
            *a8 = 3;
            v25 = v34;
            if ( !*v34 )
            {
              v27 = a2;
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
              Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
              *v25 = a2;
              v19 = 0;
              Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
            }
          }
          goto LABEL_21;
        }
      }
    }
  }
LABEL_22:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v32);
  return (unsigned int)v19;
}
