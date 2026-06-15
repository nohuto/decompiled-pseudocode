/*
 * XREFs of sub_180003370 @ 0x180003370
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003370(char *a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  const wil::ResultException *v7; // rbx
  char *v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rbp
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  _BYTE *v14; // rbp
  char *v15; // rbx
  __int64 v16; // rax
  _BYTE *v17; // rbp
  char *v18; // rbx
  __int64 v19; // rax
  _BYTE *v20; // rdx
  _BYTE *v21; // rdx
  _BYTE *v22; // rdx
  _BYTE v23[32]; // [rsp+0h] [rbp-78h] BYREF
  char *v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  _BYTE *v26; // [rsp+30h] [rbp-48h]
  const wil::ResultException *v27; // [rsp+38h] [rbp-40h] BYREF
  const wil::ResultException *v28; // [rsp+40h] [rbp-38h] BYREF
  const std::bad_alloc *v29; // [rsp+48h] [rbp-30h] BYREF
  const std::bad_alloc *v30; // [rsp+50h] [rbp-28h] BYREF
  std::exception *v31; // [rsp+58h] [rbp-20h] BYREF

  v24 = a1;
  v25 = a2;
  v26 = a3;
  if ( a1 )
    *(_WORD *)a1 = 0;
  *a3 = 0;
  if ( !qword_18004FD08 || (result = qword_18004FD08(), (int)result >= 0) )
  {
    if ( !qword_18004FD58 )
    {
      if ( qword_18004FCE8 )
        throw;
      try
      {
      }
      catch ( const wil::ResultException *v27 )
      {
        *v26 = 1;
        if ( v24 && v25 )
        {
          v7 = v27;
          sub_180002320(v24, v25, (__int64)v27 + 24);
        }
        else
        {
          v7 = v27;
        }
        return *((unsigned int *)v7 + 7);
      }
      catch ( const std::bad_alloc *v29 )
      {
        v8 = v24;
        if ( v24 )
        {
          v9 = (*(__int64 (__fastcall **)(const std::bad_alloc *))(*(_QWORD *)v29 + 8LL))(v29);
          sub_18000210C(v8, v25, (const char *)L"std::exception: %hs", v9);
        }
        return 2147942414LL;
      }
      catch ( ... )
      {
        LODWORD(v24) = sub_1800031C4((__int64)v24);
        if ( (int)v24 < 0 )
          return (unsigned int)v24;
        return 0LL;
      }
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v28 )
      {
        v20 = v23;
        v10 = v20;
        **((_BYTE **)v20 + 6) = 1;
        v11 = (char *)*((_QWORD *)v20 + 4);
        if ( v11 && (v12 = *((_QWORD *)v10 + 5)) != 0 )
        {
          v13 = *((_QWORD *)v10 + 8);
          sub_180002320(v11, v12, v13 + 24);
        }
        else
        {
          v13 = *((_QWORD *)v10 + 8);
        }
        *((_DWORD *)v10 + 8) = *(_DWORD *)(v13 + 28);
        return (unsigned int)v24;
      }
      catch ( const std::bad_alloc *v30 )
      {
        v21 = v23;
        v14 = v21;
        v15 = (char *)*((_QWORD *)v21 + 4);
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v14 + 10) + 8LL))(*((_QWORD *)v14 + 10));
          sub_18000210C(v15, *((_QWORD *)v14 + 5), (const char *)L"std::exception: %hs", v16);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v31 )
      {
        v22 = v23;
        v17 = v22;
        v18 = (char *)*((_QWORD *)v22 + 4);
        if ( v18 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 11) + 8LL))(*((_QWORD *)v17 + 11));
          sub_18000210C(v18, *((_QWORD *)v17 + 5), (const char *)L"std::exception: %hs", v19);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    return qword_18004FD58(a1, a2, a3);
  }
  return result;
}
