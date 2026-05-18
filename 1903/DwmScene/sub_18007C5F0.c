/*
 * XREFs of sub_18007C5F0 @ 0x18007C5F0
 * Callers:
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18001C7F8 @ 0x18001C7F8 (sub_18001C7F8.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800260EC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18006CD34 @ 0x18006CD34 (sub_18006CD34.c)
 *     sub_18006CD5C @ 0x18006CD5C (sub_18006CD5C.c)
 *     sub_18006CD8C @ 0x18006CD8C (sub_18006CD8C.c)
 *     sub_180072C40 @ 0x180072C40 (sub_180072C40.c)
 *     sub_180072CE8 @ 0x180072CE8 (sub_180072CE8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18007C5F0(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  char *v8; // r12
  __int64 v9; // rbx
  _QWORD *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  void *v21; // rdx
  __int64 v22; // rbx
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  __int64 v26; // rbx
  volatile signed __int32 *v27; // rcx
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+68h] [rbp-A0h]
  __int128 v33; // [rsp+78h] [rbp-90h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v39[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int64 v41[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v42[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v43[4]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v44[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v45[4]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v46; // [rsp+178h] [rbp+70h]
  __int128 v47; // [rsp+188h] [rbp+80h]
  unsigned __int64 v48; // [rsp+198h] [rbp+90h] BYREF
  double v49; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v50; // [rsp+1A8h] [rbp+A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  result = (__int64)&retaddr;
  v35 = -2LL;
  v36 = a2;
  v46 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v5 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), result + 1, result) )
      {
        v6 = *a2;
        *(_QWORD *)&v46 = *a2;
        result = a2[1];
        *((_QWORD *)&v46 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v6 = v46;
LABEL_3:
  if ( v6 )
  {
    v48 = v6;
    v49 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 *, double *))(*(_QWORD *)v6 + 224LL))(v6, 0LL, &v50, &v49);
    sub_180072CE8((__int64 **)(a1 + 1440), (__int64)&v37, &v48);
    *(_QWORD *)(v37 + 40) = v50;
    sub_180072C40((__int64 ***)(a1 + 1424), (__int64)&v38, &v48);
    v7 = v38;
    v8 = (char *)(v38 + 64);
    v29 = 0LL;
    v30 = 0LL;
    sub_18001110C(&v28, v38 + 64);
    v9 = v29;
    result = unknown_libname_116(&v28);
    if ( !v9 )
    {
      result = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v6 + 376LL))(v6, v39);
      v10 = (_QWORD *)result;
      v47 = 0LL;
      v11 = *(_QWORD *)(result + 8);
      if ( v11 )
      {
        while ( 1 )
        {
          result = *(unsigned int *)(v11 + 8);
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), result + 1, result) )
          {
            *(_QWORD *)&v47 = *v10;
            result = v10[1];
            *((_QWORD *)&v47 + 1) = result;
            break;
          }
        }
      }
      v12 = v40;
      if ( v40 )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v12 + 8LL))(v12, v11, v10);
      }
      v13 = v47;
      if ( (_QWORD)v47 )
      {
        v14 = sub_18006CD8C(v47, v45);
        v15 = sub_18006CD5C(v13, v44);
        v16 = sub_18006CD34(v13, v43);
        v17 = std::wstring::append(v16, " ", 1uLL);
        v34 = 0LL;
        v33 = *(_OWORD *)v17;
        v34 = *((_OWORD *)v17 + 1);
        v17[2] = 0LL;
        v17[3] = 7LL;
        *(_WORD *)v17 = 0;
        v18 = (_QWORD *)sub_18001C7F8((__int64)v42, &v33, (__int64)v15);
        v19 = std::wstring::append(v18, " ", 1uLL);
        v32 = 0LL;
        v31 = *(_OWORD *)v19;
        v32 = *((_OWORD *)v19 + 1);
        v19[2] = 0LL;
        v19[3] = 7LL;
        *(_WORD *)v19 = 0;
        v20 = sub_18001C7F8((__int64)v41, &v31, (__int64)v14);
        if ( v8 != (char *)v20 )
        {
          v21 = (void *)v20;
          if ( *(_QWORD *)(v20 + 24) >= 8uLL )
            v21 = *(void **)v20;
          sub_180026168(v8, v21, *(_QWORD *)(v20 + 16));
        }
        unknown_libname_116(v41);
        unknown_libname_116((__int64 *)&v31);
        unknown_libname_116(v42);
        unknown_libname_116((__int64 *)&v33);
        unknown_libname_116(v43);
        unknown_libname_116(v44);
        result = unknown_libname_116(v45);
      }
      if ( *((_QWORD *)&v47 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v22 = *((_QWORD *)&v47 + 1);
          (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v47 + 1))(*((_QWORD *)&v47 + 1), v11, v10);
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
        }
      }
    }
    v23 = v49;
    if ( v23 > 0.0 )
    {
      v24 = *(float *)(v7 + 40);
      if ( v23 > v24 )
        v24 = v49;
      *(float *)(v7 + 40) = v24;
      v25 = *(float *)(v7 + 44);
      if ( v25 > v23 )
        v25 = v23;
      *(float *)(v7 + 44) = v25;
      *(float *)(v7 + 48) = v23 + *(float *)(v7 + 48);
      ++*(_QWORD *)(v7 + 56);
    }
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v26 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  v27 = (volatile signed __int32 *)a2[1];
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  }
  return result;
}
