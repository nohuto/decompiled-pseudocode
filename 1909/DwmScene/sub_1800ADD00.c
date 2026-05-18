/*
 * XREFs of sub_1800ADD00 @ 0x1800ADD00
 * Callers:
 *     sub_1800FD830 @ 0x1800FD830 (sub_1800FD830.c)
 *     sub_1801001B0 @ 0x1801001B0 (sub_1801001B0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     sub_18006BB80 @ 0x18006BB80 (sub_18006BB80.c)
 *     sub_1800AA6AC @ 0x1800AA6AC (sub_1800AA6AC.c)
 *     sub_1800AA96C @ 0x1800AA96C (sub_1800AA96C.c)
 *     sub_1800AB64C @ 0x1800AB64C (sub_1800AB64C.c)
 *     sub_1800AC298 @ 0x1800AC298 (sub_1800AC298.c)
 *     sub_1800AC304 @ 0x1800AC304 (sub_1800AC304.c)
 *     sub_1800AC384 @ 0x1800AC384 (sub_1800AC384.c)
 *     sub_1800ADC1C @ 0x1800ADC1C (sub_1800ADC1C.c)
 *     sub_1800B2CEC @ 0x1800B2CEC (sub_1800B2CEC.c)
 *     sub_1800F0DA0 @ 0x1800F0DA0 (sub_1800F0DA0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800ADD00(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  char v20; // [rsp+28h] [rbp-69h]
  __int64 v21; // [rsp+30h] [rbp-61h] BYREF
  volatile signed __int32 *v22; // [rsp+38h] [rbp-59h]
  __int128 v23; // [rsp+48h] [rbp-49h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-39h]
  __int128 v25; // [rsp+60h] [rbp-31h] BYREF
  char v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h]
  _QWORD *v28; // [rsp+80h] [rbp-11h]
  _BYTE v29[40]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v30; // [rsp+B0h] [rbp+1Fh]

  v27 = -2LL;
  v2 = a2;
  v24 = a2;
  v28 = a2;
  v23 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v23 = *a2;
  *((_QWORD *)&v23 + 1) = v4;
  sub_1800F0DA0(a1, &v23);
  v21 = 0LL;
  v22 = 0LL;
  sub_18006BB80(&v21, v2);
  v5 = v21;
  *(_QWORD *)(v21 + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 136), (_QWORD *)(a1 + 136));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 152), (_QWORD *)(a1 + 152));
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  sub_180011764((__int64 *)(v5 + 216), (__int64 *)(a1 + 216));
  sub_180011764((__int64 *)(v5 + 248), (__int64 *)(a1 + 248));
  *(_DWORD *)(v5 + 292) = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(v5 + 296) = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(v5 + 300) = *(_DWORD *)(a1 + 300);
  *(_DWORD *)(v5 + 304) = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(v5 + 308) = *(_DWORD *)(a1 + 308);
  *(_DWORD *)(v5 + 312) = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(v5 + 316) = *(_DWORD *)(a1 + 316);
  *(_DWORD *)(v5 + 320) = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(v5 + 324) = *(_DWORD *)(a1 + 324);
  *(_DWORD *)(v5 + 328) = *(_DWORD *)(a1 + 328);
  *(_DWORD *)(v5 + 332) = *(_DWORD *)(a1 + 332);
  *(_BYTE *)(v5 + 336) = *(_BYTE *)(a1 + 336);
  *(_DWORD *)(v5 + 340) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v5 + 344) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(v5 + 348) = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v5 + 352) = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(v5 + 356) = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(v5 + 360) = *(_DWORD *)(a1 + 360);
  *(_DWORD *)(v5 + 364) = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(v5 + 368) = *(_DWORD *)(a1 + 368);
  v26 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v25 = *(_OWORD *)(a1 + 372);
    v26 = 1;
  }
  sub_1800AC298((__int128 *)(v5 + 372), &v25);
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_1800AA6AC((__int64 **)(v5 + 416), *(unsigned __int64 **)(a1 + 416), *(_QWORD *)(a1 + 424));
  *(_DWORD *)(v5 + 440) = *(_DWORD *)(a1 + 440);
  *(_BYTE *)(v5 + 464) = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(v5 + 465) = *(_BYTE *)(a1 + 465);
  *(_OWORD *)(v5 + 472) = *(_OWORD *)(a1 + 472);
  *(_OWORD *)(v5 + 488) = *(_OWORD *)(a1 + 488);
  *(_OWORD *)(v5 + 504) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(v5 + 520) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(v5 + 536) = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v5 + 544) = *(_DWORD *)(a1 + 544);
  sub_1800AC304((_OWORD *)(v5 + 548), a1 + 548);
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  if ( v5 + 1616 != a1 + 1616 )
  {
    sub_1800B2CEC(v5 + 1616);
    sub_1800AA96C((_QWORD *)(v5 + 1616), (_QWORD *)(a1 + 1616), v20, v6);
  }
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  sub_1800AC384(v5 + 1704, a1 + 1704);
  v7 = (__int64 *)(v5 + 104);
  sub_1800AB64C((_QWORD *)(v5 + 104), (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 48LL);
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 104);
  v10 = *(_QWORD *)(a1 + 112) - v9;
  result = (unsigned __int64)((unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v12 = v10 / 48;
  if ( v10 / 48 )
  {
    v13 = 0LL;
    do
    {
      v14 = sub_1800ADC1C(v9 + v13, (__int64)v29);
      v15 = *v7;
      *(_BYTE *)(v13 + v15) = *(_BYTE *)v14;
      *(_QWORD *)(v13 + v15 + 8) = *(_QWORD *)(v14 + 8);
      *(_QWORD *)(v13 + v15 + 16) = *(_QWORD *)(v14 + 16);
      *(_QWORD *)(v13 + v15 + 24) = *(_QWORD *)(v14 + 24);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v13 + v15 + 32), (__int64 *)(v14 + 32));
      v16 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      ++v8;
      v13 += 48LL;
      v9 = *(_QWORD *)(a1 + 104);
      v17 = *(_QWORD *)(a1 + 112) - v9;
      result = (unsigned __int64)((unsigned __int128)(v17 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
      v12 = v17 / 48;
    }
    while ( v8 < v17 / 48 );
    v2 = v24;
  }
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement(v22 + 2);
    if ( !(_DWORD)result )
    {
      v18 = v22;
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v22)(v22, v12);
      result = (unsigned int)_InterlockedDecrement(v18 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v19 = (volatile signed __int32 *)v2[1];
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v19)(v19, v12);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return result;
}
