/*
 * XREFs of sub_1800AEF3C @ 0x1800AEF3C
 * Callers:
 *     sub_1800AEEA4 @ 0x1800AEEA4 (sub_1800AEEA4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_1800DB87C @ 0x1800DB87C (sub_1800DB87C.c)
 *     sub_1800DD508 @ 0x1800DD508 (sub_1800DD508.c)
 *     sub_1800F964C @ 0x1800F964C (sub_1800F964C.c)
 *     sub_1800F97D0 @ 0x1800F97D0 (sub_1800F97D0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800AEF3C(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  char *v15; // rsi
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rbx
  const void *v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 *v29; // [rsp+68h] [rbp-A0h]
  __int64 v30[4]; // [rsp+70h] [rbp-98h] BYREF
  char v31[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  volatile signed __int32 *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v36[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v37[4]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v38[5]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v39[8]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+178h] [rbp+70h] BYREF
  __int128 v41; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v42; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v43; // [rsp+1D0h] [rbp+C8h]
  char *v44; // [rsp+1D8h] [rbp+D0h] BYREF
  char *v45; // [rsp+1E0h] [rbp+D8h]
  __int64 v46; // [rsp+1E8h] [rbp+E0h]
  _QWORD v47[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  const void *Src[3]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 v49; // [rsp+218h] [rbp+110h]

  v30[3] = -2LL;
  v6 = a1 + 212;
  result = _std_type_info_compare(a1[212] + 8LL, &unk_180264A70);
  if ( (_DWORD)result )
  {
    sub_18002BFD4(Src, a1 + 3, " effect");
    v41 = 0uLL;
    v9 = sub_18006CCE8(*a2, v8);
    v41 = 0LL;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v41 = *(_OWORD *)v9;
    v47[0] = 0LL;
    v47[1] = 0LL;
    sub_1800F964C(v47, &v41, Src);
    memset(v30, 0, 24);
    v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 200LL))(*a3, v31);
    sub_180073974(v30, v11, (__int64)Src);
    v12 = v32;
    if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v28 = 0LL;
    v29 = 0LL;
    v13 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    v14 = (volatile signed __int32 *)v13[1];
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      v14 = (volatile signed __int32 *)v13[1];
    }
    v28 = *v13;
    v29 = v14;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    sub_1800DD508(v28, &v44, v6);
    v15 = v44;
    if ( v44 != v45 )
    {
      if ( (unsigned __int64)((v45 - v44) >> 4) > 1 )
      {
        sub_18000E498(v36);
        v25 = sub_18000E498(v35);
        sub_180027770(v39, v25, 858, (__int64)v36, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v39;
      }
      if ( *(_DWORD *)(*(_QWORD *)v44 + 176LL) != 1 )
      {
        sub_18000E498(v38);
        v24 = sub_18000E498(v37);
        sub_180027770(pExceptionObject, v24, 865, (__int64)v38, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v44 + 136LL) )
      {
        v42 = 0LL;
        v43 = 0LL;
        v16 = (volatile signed __int32 *)a1[18];
        if ( v16 )
        {
          _InterlockedIncrement(v16 + 2);
          v16 = (volatile signed __int32 *)a1[18];
        }
        v17 = a1[17];
        v33 = v17;
        v34 = v16;
        v26 = 0LL;
        v18 = *(_QWORD *)(v17 + 144);
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v26 = *(_OWORD *)(v17 + 136);
        v27 = 0LL;
        v19 = *((_QWORD *)v15 + 1);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v19 = *((_QWORD *)v15 + 1);
        }
        *(_QWORD *)&v27 = *(_QWORD *)v15;
        *((_QWORD *)&v27 + 1) = v19;
        sub_1800DB87C(v28, (unsigned int)&v42, (_DWORD)a3, (unsigned int)&v27, (__int64)&v26);
        if ( v16 )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        v20 = a1[220];
        if ( v20 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 16LL))(v20, *(_QWORD *)v15, &v42);
        v21 = v43;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          }
        }
      }
    }
    sub_180011388((__int64 *)&v44);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    sub_180074840(v30);
    result = sub_1800F97D0(v47);
    v22 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
    if ( *((_QWORD *)&v41 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        result = (unsigned int)_InterlockedDecrement(v22 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    if ( v49 >= 0x10 )
    {
      v23 = Src[0];
      if ( v49 + 1 >= 0x1000 )
      {
        v23 = (const void *)*((_QWORD *)Src[0] - 1);
        if ( (unsigned __int64)((char *)Src[0] - (char *)v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v49 + 40);
          __debugbreak();
        }
      }
      return j_j__o_free(v23);
    }
  }
  return result;
}
