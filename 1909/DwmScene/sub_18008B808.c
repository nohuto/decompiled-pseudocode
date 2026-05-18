/*
 * XREFs of sub_18008B808 @ 0x18008B808
 * Callers:
 *     sub_18008C610 @ 0x18008C610 (sub_18008C610.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_18008B02C @ 0x18008B02C (sub_18008B02C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
unsigned __int64 __fastcall sub_18008B808(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rax
  signed __int32 v12; // eax
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 result; // rax
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  volatile signed __int32 *v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 *v44; // [rsp+D8h] [rbp-28h]
  _QWORD *v45; // [rsp+E0h] [rbp-20h]
  _QWORD v46[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v47[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v48[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v49[4]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v50[4]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v51[4]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v52[4]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v53[5]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v54[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v55[8]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v56[8]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v43 = -2LL;
  v44 = a2;
  v45 = a3;
  v6 = *a2;
  if ( !*a2 )
  {
    sub_18000E4E8(v47);
    v29 = sub_18000E4E8(v46);
    sub_180027880(v54, v29, 345, (__int64)v47, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v54;
  }
  if ( !*a3 )
  {
    sub_18000E4E8(v49);
    v30 = sub_18000E4E8(v48);
    sub_180027880(v55, v30, 350, (__int64)v49, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v55;
  }
  v36 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v7 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v12 + 1, v12) )
      {
        v13 = *(_QWORD *)(v6 + 72);
        *(_QWORD *)&v36 = v13;
        v14 = *(_QWORD *)(v6 + 80);
        *((_QWORD *)&v36 + 1) = v14;
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v36 + 1))(*((_QWORD *)&v36 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v36 + 1) + 8LL))(*((_QWORD *)&v36 + 1));
          }
        }
        if ( v13 )
        {
          sub_18000E4E8(v51);
          v28 = sub_18000E4E8(v50);
          sub_180027880(v56, v28, 355, (__int64)v51, 0);
          throw (Spectre::Engine::EngineInvalidArgException *)v56;
        }
        break;
      }
    }
  }
  v34 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  *(_QWORD *)&v37 = *a2;
  *((_QWORD *)&v37 + 1) = v8;
  sub_18008B02C(a1, &v34, (__int64 *)&v37);
  v32 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v38 = *a3;
  *((_QWORD *)&v38 + 1) = v9;
  sub_18008B02C(a1, &v32, (__int64 *)&v38);
  if ( v34 )
  {
    sub_18000E4E8(v53);
    v27 = sub_18000E4E8(v52);
    sub_180027880(pExceptionObject, v27, 363, (__int64)v53, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800635BC(a1 + 16, v10);
  if ( v32 )
  {
    v11 = (volatile signed __int32 *)(v32 + 76);
    v31 = (volatile signed __int32 *)(v32 + 76);
    while ( _interlockedbittestandset(v11, 0) )
      v11 = v31;
    v15 = *a2;
    sub_180087450(*a2);
    v39 = 0LL;
    v16 = *(_QWORD *)(v15 + 64);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v18 = *(_QWORD *)(v15 + 56);
          *(_QWORD *)&v39 = v18;
          v19 = *(_QWORD *)(v15 + 64);
          *((_QWORD *)&v39 + 1) = v19;
          if ( v19 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
            {
              (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
            }
          }
          if ( v18 )
          {
            v42 = 0LL;
            sub_180085C60(*a2, (__int64 *)&v42);
          }
          break;
        }
      }
    }
    v40 = 0LL;
    v20 = a3[1];
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = a3[1];
    }
    *(_QWORD *)&v40 = *a3;
    *((_QWORD *)&v40 + 1) = v20;
    sub_180085C60(*a2, (__int64 *)&v40);
    result = (unsigned __int64)v31;
    *v31 = 0;
  }
  else
  {
    v41 = 0LL;
    v22 = a3[1];
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = a3[1];
    }
    *(_QWORD *)&v41 = *a3;
    *((_QWORD *)&v41 + 1) = v22;
    result = sub_180085C60(*a2, (__int64 *)&v41);
  }
  if ( v33 )
  {
    result = (unsigned int)_InterlockedDecrement(v33 + 2);
    if ( !(_DWORD)result )
    {
      v23 = v33;
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      result = (unsigned int)_InterlockedDecrement(v23 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  if ( v35 )
  {
    result = (unsigned int)_InterlockedDecrement(v35 + 2);
    if ( !(_DWORD)result )
    {
      v24 = v35;
      (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
      result = (unsigned int)_InterlockedDecrement(v24 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
    }
  }
  v25 = (volatile signed __int32 *)a2[1];
  if ( v25 )
  {
    result = (unsigned int)_InterlockedDecrement(v25 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      result = (unsigned int)_InterlockedDecrement(v25 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  v26 = (volatile signed __int32 *)a3[1];
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement(v26 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      result = (unsigned int)_InterlockedDecrement(v26 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  return result;
}
