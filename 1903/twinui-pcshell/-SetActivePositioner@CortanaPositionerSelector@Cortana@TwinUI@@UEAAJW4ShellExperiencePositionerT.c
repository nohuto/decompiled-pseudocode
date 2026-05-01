/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x1800805D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // r14d
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  void (*v12)(void); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD, __int64 *); // rdi
  __int64 v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  char v23; // [rsp+88h] [rbp+48h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  v20[1] = -2LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( a2 == v6 )
    return 0LL;
  v22 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v9 = v8(a1, a2, &v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 111LL;
  }
  else
  {
    v23 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v22 + 56LL))(v22, a3, v6, &v23);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( !v23 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        return 0LL;
      }
      v20[0] = 0LL;
      if ( !v6 )
        goto LABEL_7;
      v24 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v16 = v15(a1, v6, &v24);
      v10 = v16;
      if ( v16 >= 0 )
      {
        v18 = v24;
        v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 64LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
        v16 = v19(v18, a3, a2, v20);
        v10 = v16;
        if ( v16 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_7:
          v11 = **(_QWORD **)(a1 + 40);
          if ( a2 == 1 )
            v12 = *(void (**)(void))(v11 + 144);
          else
            v12 = *(void (**)(void))(v11 + 152);
          v12();
          *(_DWORD *)(a1 + 24) = a2;
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v22 + 72LL))(
                  v22,
                  a3,
                  v6,
                  v20[0]);
          v10 = v13;
          if ( v13 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
            goto LABEL_11;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x89,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_23;
        }
        v17 = 122LL;
      }
      else
      {
        v17 = 121LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
      goto LABEL_24;
    }
    v14 = 114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v10;
}
