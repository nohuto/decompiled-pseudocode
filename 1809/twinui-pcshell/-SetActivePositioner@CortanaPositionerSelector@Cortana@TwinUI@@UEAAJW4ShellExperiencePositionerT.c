/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x18007CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // esi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  void (*v11)(void); // rax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  char v20; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v17[1] = -2LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( a2 == v6 )
    return 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, a2, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 111LL;
  }
  else
  {
    v20 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v19 + 56LL))(v19, a3, v6, &v20);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( !v20 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        return 0LL;
      }
      v17[0] = 0LL;
      if ( !v6 )
        goto LABEL_7;
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, v6, &v21);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v16 = v21;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, a3, a2, v17);
        v9 = v14;
        if ( v14 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_7:
          v10 = **(_QWORD **)(a1 + 40);
          if ( a2 == 1 )
            v11 = *(void (**)(void))(v10 + 136);
          else
            v11 = *(void (**)(void))(v10 + 144);
          v11();
          *(_DWORD *)(a1 + 24) = a2;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v19 + 72LL))(
                  v19,
                  a3,
                  v6,
                  v17[0]);
          v9 = v12;
          if ( v12 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
            goto LABEL_11;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x89,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_23;
        }
        v15 = 122LL;
      }
      else
      {
        v15 = 121LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
      goto LABEL_24;
    }
    v13 = 114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v9;
}
