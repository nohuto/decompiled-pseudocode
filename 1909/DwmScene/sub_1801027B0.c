/*
 * XREFs of sub_1801027B0 @ 0x1801027B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800848F4 @ 0x1800848F4 (sub_1800848F4.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801027B0(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // xmm6_4
  int v5; // xmm7_4
  int v6; // xmm8_4
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  signed __int32 v13; // eax
  __int128 v14; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-19h] BYREF
  int v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h] BYREF
  int v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+60h] [rbp+Fh]

  v19 = -2LL;
  v20 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v2 + 8);
      if ( !v13 )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v13 + 1, v13) )
      {
        v3 = *(_DWORD **)(a1 + 56);
        v20 = *(_OWORD *)(a1 + 56);
        goto LABEL_3;
      }
    }
  }
  v3 = (_DWORD *)v20;
LABEL_3:
  v4 = qword_18025EF08;
  v5 = HIDWORD(qword_18025EF08);
  v6 = dword_18025EF10;
  sub_180087524((__int64)v3);
  v3[36] = v4;
  v3[37] = v5;
  v3[38] = v6;
  v7 = _InterlockedIncrement64(&qword_180259748);
  v8 = v20;
  *(_QWORD *)(v20 + 208) = v7;
  v9 = *(_QWORD *)(v8 + 216);
  if ( v7 >= v9 )
    v9 = v7;
  *(_QWORD *)(v8 + 216) = v9;
  v15 = qword_18025EF28;
  v16 = dword_18025EF30;
  v17 = qword_18026C298;
  v18 = dword_18026C2A0;
  sub_1800848F4(v8, (unsigned __int64 *)&v17, (__int64)&v15);
  v14 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), (__int64 *)&v14);
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 124) = qword_18026C298;
  *(_DWORD *)(a1 + 132) = dword_18026C2A0;
  *(_QWORD *)(a1 + 112) = qword_18025EF08;
  *(_DWORD *)(a1 + 120) = dword_18025EF10;
  *(_QWORD *)(a1 + 140) = qword_18026C298;
  *(_DWORD *)(a1 + 148) = dword_18026C2A0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  if ( *((_QWORD *)&v20 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v12 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  return result;
}
