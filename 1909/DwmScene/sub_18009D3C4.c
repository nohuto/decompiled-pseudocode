/*
 * XREFs of sub_18009D3C4 @ 0x18009D3C4
 * Callers:
 *     sub_18002E01C @ 0x18002E01C (sub_18002E01C.c)
 *     sub_18009E870 @ 0x18009E870 (sub_18009E870.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18009D3C4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  _QWORD v19[4]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v20[7]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+98h] [rbp+7h] BYREF

  v20[4] = -2LL;
  v20[5] = a1;
  v20[6] = a2;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *a2;
  *(_QWORD *)(a1 + 32) = a2[1];
  *(_QWORD *)(a1 + 40) = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *(_DWORD *)(a1 + 48) = -1;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 == v9 )
    goto LABEL_13;
  do
  {
    if ( *(_DWORD *)(v8 + 28) == v6 )
    {
      ++v6;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 28) )
        goto LABEL_21;
      if ( v7 )
      {
        if ( v6 != *(_DWORD *)(a1 + 48) )
        {
          sub_18000E4E8(v19);
          v18 = sub_18000E4E8(v20);
          sub_18006586C(pExceptionObject, v18, 241LL, (__int64)v19, 0);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v6;
      }
      ++v7;
      v6 = 1;
    }
    v8 += 32LL;
  }
  while ( v8 != v9 );
  if ( !v7 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 48) = v6;
  }
  else if ( v6 != *(_DWORD *)(a1 + 48) )
  {
    sub_18000E4E8(v20);
    v17 = sub_18000E4E8(v19);
    sub_18006586C(pExceptionObject, v17, 262LL, (__int64)v20, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v10 = *a2;
  if ( *a2 )
  {
    v11 = (a2[2] - v10) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v11 >= 0x1000 )
    {
      v12 = v11 + 39;
      v13 = *(_QWORD *)(v10 - 8);
      v14 = v10 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
LABEL_21:
        sub_18000E4E8(v19);
        v16 = sub_18000E4E8(v20);
        sub_18006586C(pExceptionObject, v16, 250LL, (__int64)v19, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v10 = v13;
    }
    j_j__o_free(v10);
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
