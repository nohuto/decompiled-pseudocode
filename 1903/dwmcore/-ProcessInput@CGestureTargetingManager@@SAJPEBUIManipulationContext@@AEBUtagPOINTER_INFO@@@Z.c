/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1802606EC
 * Callers:
 *     ?CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238010 (-CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800863D0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x180260084 (_anonymous_namespace_--BypassGestureTargeting.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2)
{
  unsigned int v4; // eax
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // rax
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD); // rbx
  __int64 (__fastcall *v17)(_QWORD); // rbp
  __int64 (__fastcall *v18)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD); // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // eax
  _BYTE v22[80]; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+B8h] [rbp+10h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+C0h] [rbp+18h] BYREF

  v4 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v5 = anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, v4);
  v6 = *(_QWORD *)a1;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v6 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
    return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v6 + 24))(
            a1,
            *((unsigned int *)a2 + 1));
    if ( v10 )
    {
      while ( v9 >= 0 )
      {
        v11 = *(_QWORD *)v10;
        v12 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL);
        v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 176LL))(v10, v22);
        v14 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
        v15 = v12(a1, v10, v14);
        v9 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v11 + 16))(
               v10,
               a2,
               v15,
               v13,
               &v23);
        if ( v9 >= 0 )
        {
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 208LL))(v10);
        }
        v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v10);
        if ( !v10 )
        {
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v24 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1);
      v16 = v24;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v24);
      v17 = (*v16)[2];
      v18 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a1 + 56LL);
      v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _BYTE *))(*v16)[22])(v16, v22);
      v20 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
      v21 = v18(a1, v16, v20);
      v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), const struct tagPOINTER_INFO *, _QWORD, __int64, char *))v17)(
             v16,
             a2,
             v21,
             v19,
             &v23);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
    }
    return (unsigned int)v9;
  }
}
