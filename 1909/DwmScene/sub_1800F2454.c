/*
 * XREFs of sub_1800F2454 @ 0x1800F2454
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F5588 @ 0x1800F5588 (sub_1800F5588.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A35A8 @ 0x1800A35A8 (sub_1800A35A8.c)
 *     sub_1800A36E4 @ 0x1800A36E4 (sub_1800A36E4.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800DB384 @ 0x1800DB384 (sub_1800DB384.c)
 *     sub_1800F175C @ 0x1800F175C (sub_1800F175C.c)
 *     sub_1800F19B8 @ 0x1800F19B8 (sub_1800F19B8.c)
 *     sub_1800F1A2C @ 0x1800F1A2C (sub_1800F1A2C.c)
 *     sub_1800F2A18 @ 0x1800F2A18 (sub_1800F2A18.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800F2454(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r13d
  int v7; // edi
  __int64 v8; // r15
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  const void **v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v26[40]; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+70h] [rbp-98h]
  _QWORD v28[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v29[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v30[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v31[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v32[4]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v33[4]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v34[4]; // [rsp+138h] [rbp+30h] BYREF
  const void *Src; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v36[32]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v37[8]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v38[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v39[8]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v41; // [rsp+298h] [rbp+190h] BYREF
  volatile signed __int32 *v42; // [rsp+2A0h] [rbp+198h]
  _QWORD v43[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v44; // [rsp+2B8h] [rbp+1B0h]
  __int16 v45; // [rsp+2C8h] [rbp+1C0h]
  int v46; // [rsp+2CCh] [rbp+1C4h]
  int v47; // [rsp+2D0h] [rbp+1C8h]
  int v48; // [rsp+2D4h] [rbp+1CCh]
  int v49; // [rsp+2D8h] [rbp+1D0h]
  _QWORD v50[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int128 v51; // [rsp+2F0h] [rbp+1E8h]
  __int16 v52; // [rsp+300h] [rbp+1F8h]
  unsigned int v53; // [rsp+304h] [rbp+1FCh]
  int v54; // [rsp+308h] [rbp+200h]
  int v55; // [rsp+30Ch] [rbp+204h]
  int v56; // [rsp+310h] [rbp+208h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000E4E8(v29);
    v22 = sub_18000E4E8(v28);
    sub_180027880(v37, v22, 125, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_18000E4E8(v31);
    v23 = sub_18000E4E8(v30);
    sub_180027880(v38, v23, 128, (__int64)v31, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v38;
  }
  if ( (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 56LL == 512 )
  {
    sub_18000E4E8(v33);
    v24 = sub_18000E4E8(v32);
    sub_180027880(v39, v24, 131, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v39;
  }
  v8 = (unsigned __int16)sub_1800A36E4(*(_QWORD *)(a1 + 1152), (size_t *)a2);
  if ( *(_WORD *)(a1 + 2 * v8 + 128) != 0xFFFF )
  {
    v19 = sub_18009FC40(&Src, "ShaderPropertyLayout::AddProperty() -- variable '", (_QWORD *)a2);
    v20 = sub_18002C088((__int64)v36, v19, "' is already defined");
    v21 = sub_18000E4E8(v34);
    sub_180027880(pExceptionObject, v21, 137, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a3 == 1 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v9 = sub_1800A41D0(*(_QWORD *)(a1 + 1152), &v25);
    sub_1800F5904(*v9, &v41);
    v10 = *(volatile signed __int32 **)v26;
    if ( *(_QWORD *)v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v26 + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v11 = v41;
    if ( v41 != a1 )
    {
      sub_1800F2D88(v41, a2);
      if ( *(_WORD *)(v11 + 2LL * v12 + 128) == 0xFFFF )
        sub_1800A35A8(*(_QWORD *)(a1 + 1152), a2);
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    v13 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  if ( v6 == 8 )
  {
    v14 = (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 40LL;
    memset(&v26[8], 0, 32);
    v27 = v14;
    sub_1800F1A2C((_QWORD *)(a1 + 104), (__int64)&v26[8]);
    *(_WORD *)(a1 + 2LL * (unsigned __int16)v8 + 128) = (__int16)(*(_WORD *)(a1 + 64) - *(_WORD *)(a1 + 56)) / 56;
    v44 = 0LL;
    sub_18000F444(v43, a2);
    v45 = v8;
    v46 = 8;
    v47 = v14;
    v48 = 0;
    v49 = a3;
    sub_1800F19B8((_QWORD *)(a1 + 56), (__int64)v43);
    if ( *((_QWORD *)&v44 + 1) >= 0x10uLL )
    {
      v15 = v43[0];
      if ( (unsigned __int64)(*((_QWORD *)&v44 + 1) + 1LL) >= 0x1000 )
      {
        v15 = *(_QWORD *)(v43[0] - 8LL);
        if ( (unsigned __int64)(v43[0] - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, *((_QWORD *)&v44 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v15);
    }
    sub_1800DB384((__int64)&v26[8]);
  }
  else
  {
    if ( v6 <= 2 )
    {
      v7 = 1;
    }
    else
    {
      switch ( v6 )
      {
        case 3u:
          v7 = 2;
          break;
        case 4u:
          v7 = 3;
          break;
        case 5u:
        case 6u:
          v7 = 4;
          break;
        case 7u:
          v7 = 16;
          break;
      }
    }
    sub_1800F2A18(a1);
    v16 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
    sub_1800F175C(a1 + 80, (unsigned int)(v16 + v7));
    *(_WORD *)(a1 + 2LL * (unsigned __int16)v8 + 128) = (__int16)(*(_WORD *)(a1 + 64) - *(_WORD *)(a1 + 56)) / 56;
    v51 = 0LL;
    sub_18000F444(v50, a2);
    v52 = v8;
    v53 = v6;
    v54 = v16;
    v55 = 1;
    v56 = a3;
    sub_1800F19B8((_QWORD *)(a1 + 56), (__int64)v50);
    if ( *((_QWORD *)&v51 + 1) >= 0x10uLL )
    {
      v17 = v50[0];
      if ( (unsigned __int64)(*((_QWORD *)&v51 + 1) + 1LL) >= 0x1000 )
      {
        v17 = *(_QWORD *)(v50[0] - 8LL);
        if ( (unsigned __int64)(v50[0] - v17 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v17, *((_QWORD *)&v51 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v17);
    }
  }
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_1800F352C(a1, (unsigned __int16)v8, a2);
  return (unsigned __int16)v8;
}
