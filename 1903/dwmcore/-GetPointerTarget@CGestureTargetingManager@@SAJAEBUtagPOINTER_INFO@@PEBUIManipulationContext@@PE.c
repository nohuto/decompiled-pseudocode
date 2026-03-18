/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180260238
 * Callers:
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800863D0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237CC0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x18025FFFC (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  unsigned int v5; // r12d
  int v6; // r13d
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD); // rcx
  __int64 (__fastcall ***v11)(_QWORD); // rax
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD); // r15
  __int64 (__fastcall *v18)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v19; // rax
  int v20; // ebx
  __int64 (__fastcall ***v21)(_QWORD); // rdi
  __int64 (__fastcall *v22)(_QWORD); // rbx
  bool v23; // al
  struct TargetingInfo *v24; // rcx
  int v26; // [rsp+20h] [rbp-69h]
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+28h] [rbp-61h] BYREF
  int v28; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+38h] [rbp-51h] BYREF
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v31)(_QWORD); // [rsp+48h] [rbp-41h] BYREF
  struct TargetingInfo *v32; // [rsp+50h] [rbp-39h]
  _BYTE v33[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  int v35; // [rsp+68h] [rbp-21h] BYREF
  char v36; // [rsp+6Ch] [rbp-1Dh]
  char v37; // [rsp+A0h] [rbp+17h]

  v32 = a3;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v29);
  v5 = ConvertToInputType(*(_DWORD *)a1, *((_DWORD *)a1 + 3));
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *((unsigned int *)a1 + 1),
         &v28);
  if ( v6 >= 0 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v28 && v29 && (unsigned int)(*v29)[18](v29) )
    {
      v26 = v28;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v27, &v29);
    }
    else
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, _BYTE *))(*(_QWORD *)a2 + 80LL))(
                       a2,
                       v33);
      v8 = *v7;
      v9 = (__int64 *)(v7 + 2);
      v26 = v8;
      v10 = 0LL;
      if ( &v30 != (__int64 (__fastcall ****)(_QWORD))v9 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD))*v9;
        *v9 = 0LL;
      }
      v11 = v27;
      v27 = v10;
      v30 = v11;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v34);
    }
    if ( v27 )
    {
      v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              v27,
              v5);
      if ( !v12
        || (v13 = *(_QWORD *)a2,
            v14 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v13 + 56))(
              a2,
              v14,
              v5) > v12) )
      {
        v26 = 0;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      }
    }
    v15 = *((_DWORD *)a1 + 3);
    if ( (v15 & 0x40000) != 0 )
    {
      if ( v28 )
      {
        if ( v29 != v27 )
        {
          v16 = ConvertToInputType(*(_DWORD *)a1, v15);
          if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a2, v16) )
          {
            v26 = 1;
            Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
          }
        }
      }
    }
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v28 == 2 && v26 == 1 && v27 )
    {
      v26 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    }
    v17 = v29;
    if ( v29 )
    {
      if ( v29 != v27 )
      {
        v18 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL);
        v19 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        v20 = v18(a2, v19, v5);
        if ( (unsigned int)v18(a2, (__int64)v17, v5) == v20 )
        {
          if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64))(*v29)[10])(
                 v29,
                 v5,
                 1LL) )
          {
            v21 = v29;
            v30 = 0LL;
            v22 = (*v29)[16];
            Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v30);
            if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 (__fastcall ****)(_QWORD)))v22)(
                   v21,
                   v5,
                   &v30) >= 0 )
            {
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), int *))(*v30)[5])(v30, &v35);
              v23 = v35 == 1 && ((v36 & 1) != 0 || (v36 & 2) != 0);
              if ( ((v37 & 1) == 0 || v23) && (unsigned int)(*v29)[17](v29) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v27, &v29);
                v26 = v28;
              }
            }
            Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v30);
          }
        }
      }
    }
    if ( !v26 )
    {
      if ( !v28 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_48:
        v24 = v32;
        *(_DWORD *)v32 = v26;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v24 + 1, &v27);
        goto LABEL_49;
      }
      v26 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    }
    if ( v26 == 1 && !v27 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)a2 + 96LL))(
        a2,
        &v30);
      if ( v31 )
      {
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
        v6 = 0;
        v27 = v31;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v31);
    }
    goto LABEL_48;
  }
LABEL_49:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
  return (unsigned int)v6;
}
