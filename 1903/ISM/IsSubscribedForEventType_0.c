/*
 * XREFs of IsSubscribedForEventType_0 @ 0x1800579EC
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800575D0 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall IsSubscribedForEventType_0(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v7; // edx
  const char *v8; // r9
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      168LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) )
    return 1;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v9 = 2;
  v10 = a1 - 2;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 5 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                201LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
                v8);
              __debugbreak();
            }
          }
          v9 = 4;
        }
        else
        {
          v9 = 1;
        }
      }
    }
    else
    {
      v9 = 16;
    }
  }
  else
  {
    v9 = 8;
  }
  return (v9 & v7) != 0;
}
