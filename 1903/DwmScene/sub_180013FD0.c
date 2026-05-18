/*
 * XREFs of sub_180013FD0 @ 0x180013FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800864E0 @ 0x1800864E0 (sub_1800864E0.c)
 *     sub_18008BC2C @ 0x18008BC2C (sub_18008BC2C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180013FD0(__int64 a1, __int128 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  _QWORD v16[2]; // [rsp+30h] [rbp-81h] BYREF
  __int128 v17; // [rsp+40h] [rbp-71h]
  _OWORD v18[4]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v19; // [rsp+98h] [rbp-19h]
  __int128 v20; // [rsp+A8h] [rbp-9h]
  __int128 v21; // [rsp+B8h] [rbp+7h]
  __int128 v22; // [rsp+C8h] [rbp+17h]
  __int64 v23; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+2Fh]
  __int64 retaddr; // [rsp+110h] [rbp+5Fh]

  v23 = 0LL;
  v24 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v4 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v5 = *(_QWORD *)(v4 + 72);
        v6 = *(volatile signed __int32 **)(v4 + 80);
        break;
      }
    }
  }
  sub_1800631C0(v5 + 16, &v23);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v19 = *a2;
  v20 = a2[1];
  v21 = a2[2];
  v22 = a2[3];
  v18[0] = v19;
  v18[1] = v20;
  v18[2] = v21;
  v18[3] = v22;
  if ( (unsigned __int8)sub_1800864E0(*(_QWORD *)(a1 + 32), v18) )
  {
    v17 = 0LL;
    sub_18001110C(v16, (__int64)&unk_1802587A8);
    v10 = *(_QWORD *)(a1 + 32);
    v11 = 0LL;
    v12 = 0LL;
    v13 = *(_QWORD *)(v10 + 80);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 8);
        if ( !v14 )
          break;
        if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
        {
          v11 = *(_QWORD *)(v10 + 72);
          v12 = *(volatile signed __int32 **)(v10 + 80);
          break;
        }
      }
    }
    sub_18008BC2C(v11, v16);
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    v9 = 0;
  }
  else
  {
    v9 = -2147024809;
    sub_18000C338(retaddr, 122, (__int64)"SpectreNode.cpp", 0x80070057);
  }
  if ( (_BYTE)v24 )
    sub_180063668(v23);
  return v9;
}
