/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18000701C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180008268 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180009718 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180043194 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCFocusTarget *a2)
{
  struct IMPCFocusTarget *v2; // rbx
  struct IMPCFocusTarget *v5; // rcx
  struct IMPCFocusTarget *v6; // rbp
  __int64 v7; // rcx
  struct IMPCFocusTarget *v8; // rbx
  MPCHolographicInputManager *Instance; // rax
  struct IMPCFocusTarget *v10; // rbx
  struct IMPCFocusTarget *v11; // rsi
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx

  v2 = (struct IMPCFocusTarget *)*((_QWORD *)this + 98);
  if ( v2 != a2 )
  {
    v5 = (struct IMPCFocusTarget *)*((_QWORD *)this + 99);
    if ( v5 != v2 )
    {
      if ( v2 )
      {
        (*(void (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v2 + 8LL))(v2);
        v5 = (struct IMPCFocusTarget *)*((_QWORD *)this + 99);
      }
      *((_QWORD *)this + 99) = v2;
      if ( v5 )
        (*(void (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = (struct IMPCFocusTarget *)*((_QWORD *)this + 98);
    if ( v6 != a2 )
    {
      v7 = *((_QWORD *)this + 98);
      if ( a2 )
      {
        (*(void (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a2 + 8LL))(a2);
        v7 = *((_QWORD *)this + 98);
      }
      *((_QWORD *)this + 98) = a2;
      v6 = a2;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v6 = (struct IMPCFocusTarget *)*((_QWORD *)this + 98);
      }
    }
    v8 = (struct IMPCFocusTarget *)*((_QWORD *)this + 99);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(Instance, v8, v6);
    MPCInputRouter::Update3DFocusWNF(this);
    v10 = (struct IMPCFocusTarget *)*((_QWORD *)this + 98);
    v11 = (struct IMPCFocusTarget *)*((_QWORD *)this + 99);
    v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v12 && *v12 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_Set3DFocusTarget_(v13, v11, v10);
    }
  }
  v14 = *((_QWORD *)this + 98);
  if ( v14 )
  {
    if ( *((_BYTE *)this + 880) )
    {
      if ( *((_QWORD *)this + 111) == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) )
      {
        v15 = *((_QWORD *)this + 97);
        v16 = *((_QWORD *)this + 98);
        if ( v15 != v16 )
        {
          if ( v16 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*((_QWORD *)this + 98));
            v15 = *((_QWORD *)this + 97);
          }
          *((_QWORD *)this + 97) = v16;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
  }
}
