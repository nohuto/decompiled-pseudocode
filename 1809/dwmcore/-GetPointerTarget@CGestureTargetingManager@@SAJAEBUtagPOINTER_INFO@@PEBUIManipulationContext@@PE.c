/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801F9A3C
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18002C150 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801F97FC (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  unsigned int v5; // r12d
  int v6; // r13d
  __int64 (__fastcall ***v7)(_QWORD); // rdi
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 *v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  bool v20; // al
  struct TargetingInfo *v21; // rcx
  int v23; // [rsp+20h] [rbp-69h]
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+28h] [rbp-61h] BYREF
  int v25; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+38h] [rbp-51h] BYREF
  __int64 v27; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v28)(_QWORD); // [rsp+48h] [rbp-41h] BYREF
  struct TargetingInfo *v29; // [rsp+50h] [rbp-39h]
  _BYTE v30[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v31; // [rsp+60h] [rbp-29h] BYREF
  int v32; // [rsp+68h] [rbp-21h] BYREF
  char v33; // [rsp+6Ch] [rbp-1Dh]
  char v34; // [rsp+A0h] [rbp+17h]

  v29 = a3;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
  v5 = ConvertToInputType(*(_DWORD *)a1, *((_DWORD *)a1 + 3));
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *((unsigned int *)a1 + 1),
         &v25);
  if ( v6 >= 0 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v25 && v26 && (unsigned int)(*v26)[18](v26) )
    {
      v23 = v25;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, &v26);
      v7 = v24;
    }
    else
    {
      v8 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, _BYTE *))(*(_QWORD *)a2 + 80LL))(
                       a2,
                       v30);
      v7 = 0LL;
      v9 = *v8;
      v10 = (__int64 *)(v8 + 2);
      v23 = v9;
      if ( &v27 != v10 )
      {
        v7 = (__int64 (__fastcall ***)(_QWORD))*v10;
        *v10 = 0LL;
      }
      v27 = 0LL;
      v24 = v7;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v31);
    }
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              v7,
              v5);
      if ( !v11
        || (v12 = *(_QWORD *)a2,
            v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(
              a2,
              v13,
              v5) > v11) )
      {
        v23 = 0;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
        v7 = v24;
      }
    }
    v14 = *((_DWORD *)a1 + 3);
    if ( (v14 & 0x40000) != 0 )
    {
      if ( v25 )
      {
        if ( v26 != v7 )
        {
          v15 = ConvertToInputType(*(_DWORD *)a1, v14);
          if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a2, v15) )
          {
            v23 = 1;
            Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
            v7 = v24;
          }
        }
      }
    }
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v25 == 2 && v23 == 1 && v7 )
    {
      v23 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
      v7 = v24;
    }
    v16 = (__int64)v26;
    if ( v26 )
    {
      if ( v26 != v7 )
      {
        v17 = *(_QWORD *)a2;
        v18 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        LODWORD(v17) = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v17 + 56))(
                         a2,
                         v18,
                         v5);
        if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
               a2,
               v16,
               v5) == (_DWORD)v17 )
        {
          if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64))(*v26)[10])(
                 v26,
                 v5,
                 1LL) )
          {
            v27 = 0LL;
            v19 = (__int64)v26;
            Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v27);
            if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 128LL))(v19, v5, &v27) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 40LL))(v27, &v32);
              v20 = v32 == 1 && ((v33 & 1) != 0 || (v33 & 2) != 0);
              if ( ((v34 & 1) == 0 || v20) && (unsigned int)(*v26)[17](v26) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, &v26);
                v7 = v24;
                v23 = v25;
              }
            }
            Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v27);
          }
        }
      }
    }
    if ( !v23 )
    {
      if ( !v25 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_48:
        v21 = v29;
        *(_DWORD *)v29 = v23;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v21 + 1, &v24);
        goto LABEL_49;
      }
      v23 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
      v7 = v24;
    }
    if ( v23 == 1 && !v7 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v27);
      if ( v28 )
      {
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v28);
        v6 = 0;
        v24 = v28;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
    }
    goto LABEL_48;
  }
LABEL_49:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
  return (unsigned int)v6;
}
