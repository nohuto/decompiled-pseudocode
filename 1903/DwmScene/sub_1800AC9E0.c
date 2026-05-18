/*
 * XREFs of sub_1800AC9E0 @ 0x1800AC9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_1800202A8 @ 0x1800202A8 (sub_1800202A8.c)
 *     sub_180020898 @ 0x180020898 (sub_180020898.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006C87C @ 0x18006C87C (sub_18006C87C.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800AB7B4 @ 0x1800AB7B4 (sub_1800AB7B4.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800AC9E0(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r15d
  __int64 *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // r14
  __int64 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  _DWORD v21[18]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-90h]
  __int64 v24[6]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+C8h] [rbp-40h]
  unsigned int v28; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD *v29; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v30; // [rsp+F0h] [rbp-18h]
  int v31; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+FCh] [rbp-Ch]
  int v33; // [rsp+104h] [rbp-4h]
  int v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+10Ch] [rbp+4h]
  int v36; // [rsp+110h] [rbp+8h]
  __int128 v37; // [rsp+114h] [rbp+Ch]
  int v38; // [rsp+124h] [rbp+1Ch]
  int v39; // [rsp+128h] [rbp+20h]
  _QWORD v40[166]; // [rsp+138h] [rbp+30h] BYREF

  v24[4] = -2LL;
  v24[5] = (__int64)a2;
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = sub_18006CDB8(*a2);
  if ( v5 )
  {
    v6 = (__int64 *)(a1 + 448);
    v7 = *(_QWORD *)(a1 + 448);
    v8 = sub_18006CDB8(*a2);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v10 + 25) )
      goto LABEL_15;
    do
    {
      if ( *(_DWORD *)(v10 + 32) >= v8 )
      {
        v9 = v10;
        v10 = *(_QWORD *)v10;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    while ( !*(_BYTE *)(v10 + 25) );
    if ( v9 == *v6 || v8 < *(_DWORD *)(v9 + 32) )
LABEL_15:
      v9 = *v6;
    if ( v9 == v7 )
    {
      sub_1800634AC(*a2 + 24, v9);
      memset(v40, 0, sizeof(v40));
      sub_1800202A8((__int64)v40);
      v11 = (_QWORD *)sub_18006CD84(*a2);
      sub_18001D7D4(v11, &v22, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=(&v40[90], &v22);
      v12 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      memset(v21, 0, sizeof(v21));
      *(_QWORD *)&v21[1] = 2LL;
      v21[3] = 0;
      v21[4] = 0;
      v21[5] = 0;
      LOBYTE(v21[6]) = 0;
      memset(&v21[7], 0, 32);
      v21[15] = 65793;
      LOBYTE(v21[16]) = 1;
      v21[17] = 3;
      sub_1800CC090(v40[90], v21, 0LL);
      v29 = 0LL;
      v30 = 0LL;
      v13 = (_QWORD *)sub_18006CD84(*a2);
      sub_180015D84(v13, &v29, 1u);
      v32 = 0LL;
      v33 = 0;
      v34 = 0;
      v35 = 1;
      v36 = 7;
      v38 = 0;
      v39 = 2139095039;
      v31 = 2;
      v37 = 0LL;
      v24[2] = 0LL;
      v24[3] = 15LL;
      LOBYTE(v24[0]) = 0;
      LOBYTE(v14) = 0;
      sub_18000E118(v24, 0x16uLL, v14, "Camera Default Sampler");
      sub_1800644E4((__int64)v29, v24);
      sub_18009F5B0(v29, &v31, 0LL);
      v15 = &v40[56];
      v16 = 16LL;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v15, &v29);
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v17 = sub_18006C87C(*a2, &v26, (__int64)v40, a1 + 24);
      v28 = v5;
      sub_1800AB7B4((__int64 **)(a1 + 448), (__int64)&v25, &v28);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v25 + 40), v17);
      v18 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v19 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      sub_180020898(v40);
    }
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 && !_InterlockedDecrement(v20 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
    if ( !_InterlockedDecrement(v20 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  }
}
