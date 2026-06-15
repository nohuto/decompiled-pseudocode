/*
 * XREFs of ?SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18014B230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::SetCellularRouting(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _OWORD *v5; // rax
  _OWORD *v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+40h] [rbp-448h] BYREF
  _BYTE v22[4]; // [rsp+44h] [rbp-444h] BYREF
  GUID v23; // [rsp+48h] [rbp-440h] BYREF
  int v24; // [rsp+58h] [rbp-430h]
  int v25; // [rsp+5Ch] [rbp-42Ch]
  _BYTE v26[1056]; // [rsp+60h] [rbp-428h] BYREF

  v2 = 0;
  v21 = 0;
  v5 = (_OWORD *)a2;
  v6 = v26;
  v7 = 8LL;
  do
  {
    v8 = v5[1];
    *v6 = *v5;
    v9 = v5[2];
    v6[1] = v8;
    v10 = v5[3];
    v6[2] = v9;
    v11 = v5[4];
    v6[3] = v10;
    v12 = v5[5];
    v6[4] = v11;
    v13 = v5[6];
    v6[5] = v12;
    v14 = v5[7];
    v5 += 8;
    v6[6] = v13;
    v6 += 8;
    *(v6 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = *v5;
  v16 = *((_QWORD *)v5 + 2);
  *v6 = v15;
  *((_QWORD *)v6 + 2) = v16;
  v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, int *))(*a1 + 96LL))(a1, v26, &v21);
  if ( v17 < 0 )
    return (unsigned int)v17;
  if ( !v21 )
    return v2;
  v17 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64, _QWORD, int, _DWORD))(*(_QWORD *)g_AudioResourceManager + 64LL))(
          g_AudioResourceManager,
          0LL,
          a2,
          *(unsigned int *)(a2 + 520),
          1,
          0);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v17 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64, _QWORD, int, int))(*(_QWORD *)g_AudioResourceManager + 64LL))(
          g_AudioResourceManager,
          0LL,
          a2 + 524,
          *(unsigned int *)(a2 + 1044),
          1,
          1);
  if ( v17 < 0 )
  {
    return (unsigned int)v17;
  }
  else
  {
    v18 = a1[24];
    v23 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v24 = 0;
    v25 = 2;
    v19 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64, int, _BYTE *))(*(_QWORD *)v18 + 24LL))(
            v18,
            &v23,
            24LL,
            a2,
            1048,
            v22);
    if ( v19 < 0 )
      return (unsigned int)v19;
  }
  return v2;
}
