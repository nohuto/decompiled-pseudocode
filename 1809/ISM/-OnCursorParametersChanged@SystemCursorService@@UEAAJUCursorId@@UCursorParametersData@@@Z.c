/*
 * XREFs of ?OnCursorParametersChanged@SystemCursorService@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x180096770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorService::OnCursorParametersChanged(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v14 = a3;
  v6 = *(_QWORD *)(v3 + 64);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)(v6 + 8) + 48LL))(
           v6 + 8,
           (unsigned int)*a2,
           &v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v10 = *(_QWORD *)(a1 + 176);
        v11 = *(volatile signed __int32 **)(a1 + 184);
        if ( v10 && *(_QWORD *)(v10 + 24) == *a2 )
          *(_DWORD *)(a1 + 192) = v14;
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
