/*
 * XREFs of sub_18000C260 @ 0x18000C260
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

__int64 __fastcall sub_18000C260(_WORD *a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v4; // rbp
  _WORD *v5; // rcx
  __int64 v6; // rbx
  _BYTE *v7; // rbp
  char *v8; // rbx
  _BYTE *v9; // rbp
  int v10; // eax
  _BYTE *v11; // rbp
  _WORD *v12; // rcx
  __int64 v13; // rbx
  _BYTE *v14; // rbp
  char *v15; // rbx
  _BYTE *v16; // rbp
  char *v17; // rbx
  _BYTE *v18; // rdx
  _BYTE *v19; // rdx
  _BYTE *v20; // rdx
  _BYTE *v21; // rdx
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  _BYTE v24[32]; // [rsp+0h] [rbp-58h] BYREF
  const wil::ResultException *v25; // [rsp+20h] [rbp-38h] BYREF
  const wil::ResultException *v26[2]; // [rsp+28h] [rbp-30h] BYREF
  const std::bad_alloc *v27; // [rsp+38h] [rbp-20h] BYREF
  const std::bad_alloc *v28; // [rsp+40h] [rbp-18h] BYREF
  std::exception *v29; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+60h] [rbp+8h]

  v26[1] = (const wil::ResultException *)-2LL;
  if ( a1 )
    *a1 = 0;
  *a3 = 0;
  if ( !qword_180268B60 )
  {
    if ( !qword_180268AC0 )
    {
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v26 )
      {
        v21 = v24;
        v11 = v21;
        **((_BYTE **)v21 + 14) = 1;
        v12 = (_WORD *)*((_QWORD *)v21 + 12);
        v13 = *((_QWORD *)v21 + 5);
        if ( v12 )
          sub_18000B10C(v12, *((_QWORD *)v11 + 13), v13 + 24);
        *((_DWORD *)v11 + 24) = *(_DWORD *)(v13 + 28);
        return v30;
      }
      catch ( const std::bad_alloc *v28 )
      {
        v22 = v24;
        v14 = v22;
        v15 = (char *)*((_QWORD *)v22 + 12);
        if ( v15 )
        {
          (*(void (**)(void))(**((_QWORD **)v14 + 8) + 8LL))();
          sub_18000CC6C(v15);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v29 )
      {
        v23 = v24;
        v16 = v23;
        v17 = (char *)*((_QWORD *)v23 + 12);
        if ( v17 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 9) + 8LL))(*((_QWORD *)v16 + 9));
          sub_18000CC6C(v17);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v25 )
    {
      v18 = v24;
      v4 = v18;
      **((_BYTE **)v18 + 14) = 1;
      v5 = (_WORD *)*((_QWORD *)v18 + 12);
      v6 = *((_QWORD *)v18 + 4);
      if ( v5 )
        sub_18000B10C(v5, *((_QWORD *)v4 + 13), v6 + 24);
      *((_DWORD *)v4 + 24) = *(_DWORD *)(v6 + 28);
      return v30;
    }
    catch ( const std::bad_alloc *v27 )
    {
      v19 = v24;
      v7 = v19;
      v8 = (char *)*((_QWORD *)v19 + 12);
      if ( v8 )
      {
        (*(void (**)(void))(**((_QWORD **)v7 + 7) + 8LL))();
        sub_18000CC6C(v8);
      }
      return 2147942414LL;
    }
    catch ( ... )
    {
      v20 = v24;
      v9 = v20;
      v10 = sub_18000BD54(*((_QWORD *)v20 + 12));
      *((_DWORD *)v9 + 24) = v10;
      if ( v10 < 0 )
        return v30;
      return 0LL;
    }
  }
  return qword_180268B60(a1, a2, a3, 0LL);
}
