/*
 * XREFs of ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180081190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1801062BC (--$GetAppPosition@VCTaskWindowFinder@@@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180106830 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCharmsWindowManager::HandleActivation(CCharmsWindowManager *this, unsigned __int64 a2)
{
  char v4; // r12
  char v5; // r14
  char v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r8
  bool v9; // di
  __int64 v10; // r13
  __int64 v11; // rax
  bool v12; // r12
  __int64 v13; // rdi
  bool v14; // sf
  int v15; // eax
  HWND v16; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  char v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+48h]
  __int64 v21; // [rsp+90h] [rbp+50h] BYREF

  v20 = a2;
  if ( *((_QWORD *)this + 4) )
  {
    v4 = 1;
    v5 = *((_BYTE *)this + 56) & 1;
    v6 = 0;
    v7 = **((_QWORD **)this + 3);
    v21 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v16 = (HWND)a2;
    v17 = 0LL;
    v18 = 0;
    v9 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
                (char *)this + 16,
                &v16,
                v8,
                &v19) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v10 = v19;
    if ( v9 )
    {
      if ( v19 || (*((_BYTE *)this + 56) & 1) == 0 )
      {
        v6 = 1;
        if ( v19 )
          goto LABEL_22;
      }
      else
      {
        v6 = 0;
      }
      v5 = 0;
    }
    else
    {
      v4 = 0;
    }
    if ( !v6 )
    {
      if ( !v5 )
      {
LABEL_21:
        *((_DWORD *)this + 14) &= ~8u;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        return;
      }
      goto LABEL_11;
    }
LABEL_22:
    if ( !v5 )
    {
      v11 = 0LL;
      goto LABEL_12;
    }
LABEL_11:
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
LABEL_12:
    v16 = (HWND)v11;
    v17 = v20 & -(__int64)(v4 != 0);
    v12 = (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), &v16) >= 0;
    if ( v6 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v10);
      v13 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v14 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13) < 0;
      v15 = 2;
      if ( !v14 )
        v15 = 3;
      *((_DWORD *)this + 14) |= v15;
      CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewActiveApp(
        (char *)this + 16,
        &v19,
        v10);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    }
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
      if ( !v6 )
        *((_DWORD *)this + 14) = 0;
    }
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    goto LABEL_21;
  }
}
