/*
 * XREFs of sub_1800F352C @ 0x1800F352C
 * Callers:
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180017258 @ 0x180017258 (sub_180017258.c)
 *     sub_1800176CC @ 0x1800176CC (sub_1800176CC.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2E5C @ 0x1800F2E5C (sub_1800F2E5C.c)
 *     sub_1800F3888 @ 0x1800F3888 (sub_1800F3888.c)
 *     sub_1800F38B8 @ 0x1800F38B8 (sub_1800F38B8.c)
 *     sub_1800F38F8 @ 0x1800F38F8 (sub_1800F38F8.c)
 *     sub_1800F3924 @ 0x1800F3924 (sub_1800F3924.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_DWORD *__fastcall sub_1800F352C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v6; // si
  __int64 v7; // rax
  int v8; // ebx
  _DWORD *result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // xmm2_4
  unsigned int v26; // xmm1_4
  int v27; // xmm7_4
  int v28; // xmm6_4
  int v29; // xmm6_4
  int v30; // ebx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 *v34; // rax
  __int128 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  _QWORD v40[4]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v41[5]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v43[3]; // [rsp+108h] [rbp+0h] BYREF

  v39 = -2LL;
  LODWORD(v35) = 0;
  v6 = 1;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_1800F2E5C((__int64)&v36, *(_DWORD *)(a3 + 32));
    v8 = 2;
  }
  else
  {
    v7 = (__int64)sub_180017258(&v37[1], a3 + 40);
    v8 = 1;
  }
  LODWORD(v35) = v8;
  result = sub_180017258(v43, v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    v10 = v36;
    if ( (_QWORD)v36 )
    {
      v11 = (v37[0] - v36) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v11 >= 0x1000 )
      {
        v12 = v11 + 39;
        v10 = *(_QWORD *)(v36 - 8);
        if ( (unsigned __int64)(v36 - v10 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v10, v12);
          __debugbreak();
        }
      }
      result = (_DWORD *)j_j__o_free(v10);
      v36 = 0LL;
      v37[0] = 0LL;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v13 = v37[1];
    if ( v37[1] )
    {
      v14 = (v38 - v37[1]) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 >= 0x1000 )
      {
        v15 = v14 + 39;
        v13 = *(_QWORD *)(v37[1] - 8LL);
        if ( (unsigned __int64)(v37[1] - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v15);
          __debugbreak();
        }
      }
      result = (_DWORD *)j_j__o_free(v13);
      *(_OWORD *)&v37[1] = 0LL;
      v38 = 0LL;
    }
  }
  v16 = *(_DWORD *)(a3 + 32);
  v17 = v43[0];
  if ( v16 )
  {
    v18 = v16 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = (unsigned int)(v23 - 1);
                if ( (_DWORD)v24 )
                {
                  if ( (_DWORD)v24 != 1 )
                  {
                    sub_18000E4E8(v41);
                    v34 = sub_18000E4E8(v40);
                    sub_180027880(pExceptionObject, v34, 395, (__int64)v41, 0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  sub_1800176CC(pExceptionObject, v43[0]);
                  result = (_DWORD *)sub_1800F38B8(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v35 = *(_OWORD *)v43[0];
                result = (_DWORD *)sub_1800F3888(a1, a2, &v35);
              }
            }
            else
            {
              v35 = *(_OWORD *)v43[0];
              result = (_DWORD *)sub_1800F3924(a1, a2, &v35);
            }
          }
          else
          {
            v25 = *(_DWORD *)(v43[0] + 8);
            v26 = *(_DWORD *)(v43[0] + 4);
            LODWORD(v35) = *(_DWORD *)v43[0];
            *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(v25, v26);
            result = (_DWORD *)sub_1800F38F8(a1, a2, &v35);
          }
        }
        else
        {
          v27 = *(_DWORD *)(v43[0] + 4);
          v28 = *(_DWORD *)v43[0];
          result = (_DWORD *)sub_1800F1E34(a1, a2);
          *result = v28;
          result[1] = v27;
        }
      }
      else
      {
        v29 = *(_DWORD *)v43[0];
        result = (_DWORD *)sub_1800F1E34(a1, a2);
        *result = v29;
      }
    }
    else
    {
      v30 = (int)*(float *)v43[0];
      result = (_DWORD *)sub_1800F1E34(a1, a2);
      *result = v30;
    }
  }
  else
  {
    if ( *(float *)v43[0] == 0.0 )
      v6 = 0;
    result = (_DWORD *)sub_1800F1E34(a1, a2);
    v24 = (unsigned int)-(v6 != 0);
    *result = v24;
  }
  if ( v17 )
  {
    v31 = (v43[2] - v17) & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = v17;
    if ( v31 >= 0x1000 )
    {
      v33 = v31 + 39;
      v17 = *(_QWORD *)(v17 - 8);
      if ( (unsigned __int64)(v32 - v17 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v24, v33);
        __debugbreak();
      }
    }
    return (_DWORD *)j_j__o_free(v17);
  }
  return result;
}
