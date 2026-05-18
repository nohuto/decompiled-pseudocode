/*
 * XREFs of sub_180043510 @ 0x180043510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_18006456C @ 0x18006456C (sub_18006456C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_180043510(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int32 v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  const char *v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 *v24; // rax
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-A0h]
  _QWORD v27[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v28[5]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+108h] [rbp+0h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_18000E4E8(v28);
    v24 = sub_18000E4E8(v27);
    sub_180027880(pExceptionObject, v24, 37, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a2 != a2[1] || *((_DWORD *)a2 + 8) != *((_DWORD *)a2 + 6) )
  {
    v30 = 0LL;
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v4 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v11 + 1, v11) )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(a1 + 72);
          v5 = *(_QWORD *)(a1 + 80);
          *((_QWORD *)&v30 + 1) = v5;
          goto LABEL_6;
        }
      }
    }
    v5 = *((_QWORD *)&v30 + 1);
LABEL_6:
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *((_QWORD *)&v30 + 1);
    }
    v31 = 0LL;
    sub_18002328C(v30, &v31);
    v6 = v31;
    v7 = (__int64 *)(a1 + 104);
    v8 = *(_QWORD *)(a1 + 104);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *a2;
    if ( *a2 == a2[1] )
      v10 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
    else
      v10 = a2[1] - v9;
    if ( v9 == a2[1] )
      v9 = a2[3];
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 96LL))(
            v6,
            v9,
            v10,
            0LL,
            a1 + 104);
    sub_1800254C0(v30, v12);
    if ( v12 >= 0 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      v13 = sub_180064408(a1, &v25);
      v14 = (const char *)v13;
      if ( *(_QWORD *)(v13 + 24) >= 0x10uLL )
        v14 = *(const char **)v13;
      v15 = *v7;
      if ( v15 )
      {
        if ( v14 )
          v16 = strnlen(v14, 0x7FFFFFFFuLL);
        else
          v16 = 0;
        (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v15 + 40LL))(
          v15,
          &unk_180211200,
          v16,
          v14);
      }
      if ( v26 >= 0x10 )
      {
        v17 = v25;
        if ( v26 + 1 >= 0x1000 )
        {
          v17 = *(_QWORD *)(v25 - 8);
          if ( (unsigned __int64)(v25 - v17 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v17, v26 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v17);
      }
      v18 = a2[1];
      if ( *a2 == v18 )
        v19 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
      else
        v19 = v18 - *a2;
      sub_18006456C(a1, v19, 8LL);
    }
    v20 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v5 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 8))
        || (v21 = *((_QWORD *)&v30 + 1),
            (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1)),
            _InterlockedDecrement((volatile signed __int32 *)(v21 + 12))) )
      {
        v5 = *((_QWORD *)&v30 + 1);
      }
      else
      {
        v5 = *((_QWORD *)&v30 + 1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
    if ( v5 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 8)) )
      {
        v22 = *((_QWORD *)&v30 + 1);
        (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v22 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
  }
  return *(_BYTE *)(a1 + 96);
}
