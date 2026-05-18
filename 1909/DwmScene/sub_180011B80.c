/*
 * XREFs of sub_180011B80 @ 0x180011B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011540 @ 0x180011540 (sub_180011540.c)
 *     sub_180090AF0 @ 0x180090AF0 (sub_180090AF0.c)
 *     sub_180090EE4 @ 0x180090EE4 (sub_180090EE4.c)
 *     sub_1800911F0 @ 0x1800911F0 (sub_1800911F0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180011B80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v8; // rcx
  char v9; // bl
  __int64 v10; // rcx
  __int128 *v11; // r8
  char v12; // bl
  __int64 v13; // r13
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  char v33; // [rsp+20h] [rbp-C8h]
  volatile signed __int32 *v34; // [rsp+30h] [rbp-B8h]
  __int128 v35; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A0h]
  __int128 v37; // [rsp+50h] [rbp-98h]
  __int128 v38; // [rsp+60h] [rbp-88h] BYREF
  __int64 v39; // [rsp+70h] [rbp-78h]
  _QWORD Src[3]; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp-58h]
  _QWORD *v42; // [rsp+98h] [rbp-50h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v39 = -2LL;
  v36 = a1;
  v42 = a2;
  if ( a3 )
  {
    v8 = *(volatile signed __int32 **)(a3 + 24);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = *(volatile signed __int32 **)(a3 + 24);
    }
    v34 = v8;
    v9 = 1;
  }
  else
  {
    v37 = 0LL;
    v9 = 2;
  }
  try
  {
    v33 = v9;
    sub_180090EE4(*(_QWORD *)(a1 + 16));
    if ( (v9 & 2) != 0 )
    {
      v9 &= ~2u;
      v33 = v9;
      if ( *((_QWORD *)&v37 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v37 + 1))(*((_QWORD *)&v37 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 12LL)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 8LL))(*((_QWORD *)&v37 + 1));
        }
      }
    }
    if ( (v9 & 1) != 0 )
    {
      v9 &= ~1u;
      v33 = v9;
      if ( v34 )
      {
        if ( !_InterlockedDecrement(v34 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
          if ( !_InterlockedDecrement(v34 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        }
      }
    }
    if ( a4 )
    {
      v35 = 0LL;
      v10 = *(_QWORD *)(a4 + 24);
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = *(_QWORD *)(a4 + 24);
        v9 = v33;
      }
      *(_QWORD *)&v35 = *(_QWORD *)(a4 + 16);
      *((_QWORD *)&v35 + 1) = v10;
      v11 = &v35;
      v12 = v9 | 4;
    }
    else
    {
      v38 = 0LL;
      v11 = &v38;
      v12 = v9 | 8;
    }
    v13 = v36;
    sub_1800911F0(*(_QWORD *)(v36 + 16), a2, v11);
    if ( (v12 & 8) != 0 )
    {
      v12 &= ~8u;
      v14 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
      if ( *((_QWORD *)&v38 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    if ( (v12 & 4) != 0 )
    {
      v15 = (volatile signed __int32 *)*((_QWORD *)&v35 + 1);
      if ( *((_QWORD *)&v35 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    v16 = sub_180011540(Src, a2, &qword_18025C538);
    LOBYTE(v17) = a3 != 0;
    sub_180090AF0(*(_QWORD *)(v13 + 16), v16, v17);
    if ( v41 >= 0x10 )
    {
      v18 = Src[0];
      if ( v41 + 1 >= 0x1000 )
      {
        v18 = *(_QWORD *)(Src[0] - 8LL);
        if ( (unsigned __int64)(Src[0] - v18 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v18, v41 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v18);
    }
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 249, (__int64)"SpectreMaterial.cpp", 0x80004005);
    goto LABEL_43;
  }
  v19 = a2[3];
  if ( v19 < 0x10 )
    goto LABEL_41;
  v20 = v19 + 1;
  v21 = *a2;
  if ( v20 < 0x1000 )
  {
LABEL_40:
    j_j__o_free(v21);
LABEL_41:
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
    return 0LL;
  }
  v22 = v20 + 39;
  v23 = *(_QWORD *)(v21 - 8);
  v24 = v21 - v23;
  if ( (unsigned __int64)(v24 - 8) <= 0x1F )
  {
    v21 = v23;
    goto LABEL_40;
  }
  o__invalid_parameter_noinfo_noreturn(v24, v22);
LABEL_43:
  v26 = v42;
  v27 = v42[3];
  if ( v27 >= 0x10 )
  {
    v28 = v27 + 1;
    v29 = *v42;
    if ( v28 >= 0x1000 )
    {
      v30 = v28 + 39;
      v31 = *(_QWORD *)(v29 - 8);
      v32 = v29 - v31;
      if ( (unsigned __int64)(v32 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v32, v30);
        JUMPOUT(0x180011EF8LL);
      }
      v29 = v31;
    }
    j_j__o_free(v29);
  }
  v26[2] = 0LL;
  v26[3] = 15LL;
  *(_BYTE *)v26 = 0;
  return 2147500037LL;
}
