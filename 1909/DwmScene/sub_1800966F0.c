/*
 * XREFs of sub_1800966F0 @ 0x1800966F0
 * Callers:
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 * Callees:
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_18006443C @ 0x18006443C (sub_18006443C.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_18006A50C @ 0x18006A50C (sub_18006A50C.c)
 *     sub_18006AB68 @ 0x18006AB68 (sub_18006AB68.c)
 *     sub_18006AB78 @ 0x18006AB78 (sub_18006AB78.c)
 *     sub_18006AC70 @ 0x18006AC70 (sub_18006AC70.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800966F0(__int64 a1, __int64 *a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // eax
  int *v11; // rbx
  __int128 *v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int128 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-B8h]
  __int128 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 v44; // [rsp+F8h] [rbp-10h]
  int v45; // [rsp+100h] [rbp-8h]
  __int64 v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  __int64 v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+130h] [rbp+28h]
  __int64 v52; // [rsp+138h] [rbp+30h] BYREF
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  v3 = &retaddr;
  if ( !*(_DWORD *)(a1 + 120) )
    return (char)v3;
  v7 = *a2;
  v25 = 0LL;
  v8 = *(_QWORD *)(v7 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v25 = *(_OWORD *)(v7 + 72);
        break;
      }
    }
  }
  v10 = sub_18006CEC8(v25);
  if ( sub_18006443C(a1, v10) )
    goto LABEL_11;
  LOBYTE(v3) = sub_180064430(a1, 4);
  if ( (_BYTE)v3 )
  {
    sub_1800956D0(a1, (__int64 *)&v25);
LABEL_11:
    v27 = 0LL;
    v28 = a1 + 144;
    v29 = 1LL;
    v30 = 0;
    v31 = a1 + 160;
    v32 = 2LL;
    v33 = 1;
    v34 = a1 + 176;
    v35 = 16LL;
    v36 = 4;
    v37 = a1 + 192;
    v38 = 4LL;
    v39 = 2;
    v40 = a1 + 240;
    v41 = 32LL;
    v42 = 5;
    v43 = a1 + 256;
    v44 = 64LL;
    v45 = 6;
    v46 = a1 + 208;
    v47 = 512LL;
    v48 = 9;
    v49 = a1 + 224;
    v50 = 1024LL;
    v51 = 10;
    v11 = &v30;
    do
    {
      v12 = (__int128 *)*((_QWORD *)v11 - 2);
      if ( !*(_QWORD *)v12 || (a3 & *((_QWORD *)v11 - 1)) == 0 )
        v12 = &v27;
      sub_18006AC70(*a2, (__int64)v12, *v11, 0, 0);
      v11 += 6;
    }
    while ( v11 - 4 != (int *)&v52 );
    sub_18006AB78(*a2, *(_DWORD *)(a1 + 300));
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_18006AB68(*a2);
      sub_18006A50C((_QWORD **)*a2, *(_DWORD *)(a1 + 112), 0, 0);
      v13 = *(_DWORD *)(a1 + 112);
      v15 = sub_1800D0D88(v14);
      sub_1800D0D70(v15, 1LL, 1LL, v13);
    }
    else
    {
      v26 = 0LL;
      sub_18006AB68(*a2);
      sub_18006A4B8((_QWORD **)*a2, *(_DWORD *)(a1 + 120), 0);
      v17 = (volatile signed __int32 *)*((_QWORD *)&v26 + 1);
      if ( *((_QWORD *)&v26 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    v18 = *(_DWORD *)(a1 + 120);
    v19 = sub_1800D0D88(v16);
    sub_1800D0D70(v19, 0LL, 1LL, v18);
    v21 = sub_1800D0D88(v20);
    LOBYTE(v3) = sub_1800D0D70(v21, 12LL, 1LL, 1LL);
    v22 = (volatile signed __int32 *)*((_QWORD *)&v27 + 1);
    if ( *((_QWORD *)&v27 + 1) )
    {
      LODWORD(v3) = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL));
      if ( !(_DWORD)v3 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        LODWORD(v3) = _InterlockedDecrement(v22 + 3);
        if ( !(_DWORD)v3 )
          LOBYTE(v3) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
  }
  v23 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
  if ( *((_QWORD *)&v25 + 1) )
  {
    LODWORD(v3) = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
    if ( !(_DWORD)v3 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      LODWORD(v3) = _InterlockedDecrement(v23 + 3);
      if ( !(_DWORD)v3 )
        LOBYTE(v3) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  return (char)v3;
}
