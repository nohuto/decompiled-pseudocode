/*
 * XREFs of sub_1800CE4E8 @ 0x1800CE4E8
 * Callers:
 *     sub_1800A44F8 @ 0x1800A44F8 (sub_1800A44F8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_1800CD614 @ 0x1800CD614 (sub_1800CD614.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CE4E8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r12
  __int128 v9; // rcx
  unsigned int v10; // ebx
  __int64 **v11; // r15
  __int64 *v12; // rcx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 *v16; // rax
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18[4]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[5]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v24; // [rsp+F8h] [rbp-10h]
  _QWORD *v25; // [rsp+100h] [rbp-8h] BYREF
  _QWORD *v26; // [rsp+108h] [rbp+0h]
  __int64 v27; // [rsp+110h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 152) )
  {
    sub_18000E498(v19);
    v16 = sub_18000E498(v18);
    sub_180027770(pExceptionObject, v16, 78, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  *(_QWORD *)(a1 + 120) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v4;
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_BYTE *)(a1 + 152) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_18007B178(v6, &v25);
  v7 = v25;
  v8 = v26;
  while ( v7 != v8 )
  {
    v21 = 0LL;
    *((_QWORD *)&v9 + 1) = v7[1];
    if ( *((_QWORD *)&v9 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
      *((_QWORD *)&v9 + 1) = v7[1];
    }
    *(_QWORD *)&v9 = *v7;
    v21 = v9;
    if ( (_QWORD)v9 )
    {
      v10 = sub_18006CDB8(v9);
      if ( v10 )
      {
        v11 = (__int64 **)(a1 + 136);
        v12 = *(__int64 **)(a1 + 136);
        v13 = (__int64 *)v12[1];
        if ( *((_BYTE *)v13 + 25) )
          goto LABEL_20;
        do
        {
          if ( *((_DWORD *)v13 + 8) >= v10 )
          {
            v12 = v13;
            v13 = (__int64 *)*v13;
          }
          else
          {
            v13 = (__int64 *)v13[2];
          }
        }
        while ( !*((_BYTE *)v13 + 25) );
        if ( v12 == *v11 || v10 < *((_DWORD *)v12 + 8) )
LABEL_20:
          v12 = *v11;
        if ( v12 == *v11 )
        {
          v23 = 0LL;
          v24 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int128 *))(*(_QWORD *)a1 + 48LL))(a1, &v23, *a2, &v21);
          v22 = v10;
          sub_1800CD614((__int64 **)(a1 + 136), (__int64)&v17, &v22);
          std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v17 + 40), &v23);
          if ( !v23 )
            *(_BYTE *)(a1 + 152) = 0;
          v14 = v24;
          if ( v24 )
          {
            if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
              if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            }
          }
        }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&v21 + 1);
      }
      else
      {
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&v21 + 1);
      }
    }
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
    v7 += 2;
  }
  sub_180011388((__int64 *)&v25);
  return 1;
}
