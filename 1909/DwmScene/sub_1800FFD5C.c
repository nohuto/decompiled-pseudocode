/*
 * XREFs of sub_1800FFD5C @ 0x1800FFD5C
 * Callers:
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800B1094 @ 0x1800B1094 (sub_1800B1094.c)
 *     sub_1800B1144 @ 0x1800B1144 (sub_1800B1144.c)
 *     sub_1800B1210 @ 0x1800B1210 (sub_1800B1210.c)
 *     sub_180100F40 @ 0x180100F40 (sub_180100F40.c)
 *     sub_180101098 @ 0x180101098 (sub_180101098.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FFD5C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int *v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  int *v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // xmm1_4
  unsigned int v20; // xmm2_4
  _DWORD v21[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int128 v23; // [rsp+38h] [rbp-39h] BYREF
  __int128 v24; // [rsp+48h] [rbp-29h] BYREF
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  __int128 v26; // [rsp+68h] [rbp-9h] BYREF
  __int64 v27; // [rsp+78h] [rbp+7h]
  volatile signed __int32 *v28; // [rsp+80h] [rbp+Fh]
  __int128 v29; // [rsp+88h] [rbp+17h] BYREF
  __int64 v30[6]; // [rsp+98h] [rbp+27h] BYREF

  v30[4] = -2LL;
  if ( *(_DWORD *)(a1 + 1960) )
  {
    v27 = 0LL;
    v28 = 0LL;
    v10 = *(volatile signed __int32 **)(a1 + 1920);
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = *(volatile signed __int32 **)(a1 + 1920);
    }
    v11 = *(_QWORD *)(a1 + 1912);
    v27 = v11;
    v28 = v10;
    v12 = *(unsigned int *)(a1 + 4LL * *(int *)(a1 + 1964) + 1972);
    if ( !v11
      || ((v13 = *(_QWORD *)(v11 + 136)) == 0 || (v14 = *(int **)(v13 + 128)) == 0LL ? (v15 = 0) : (v15 = *v14),
          v15 != *(_DWORD *)(a1 + 1940)
       || (!v13 || (v16 = *(_QWORD *)(v13 + 128)) == 0 ? (v17 = 0) : (v17 = *(_DWORD *)(v16 + 16)), v17 != (_DWORD)v12)) )
    {
      sub_180100F40(a1, v12);
    }
    v26 = 0LL;
    v18 = *(_QWORD *)(a1 + 1920);
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = *(_QWORD *)(a1 + 1920);
    }
    *(_QWORD *)&v26 = *(_QWORD *)(a1 + 1912);
    *((_QWORD *)&v26 + 1) = v18;
    sub_1800B1094(a1, (__int64 *)&v26);
    v29 = 0LL;
    sub_1800B0E64(a1, (__int64 *)&v29);
    sub_1800B1144(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_1800B1144(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_1800B1144(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    v19 = *(_DWORD *)(a1 + 404);
    v20 = *(_DWORD *)(a1 + 408);
    v21[0] = *(_DWORD *)(a1 + 400);
    v21[1] = v19;
    v22 = v20;
    v30[2] = 0LL;
    v30[3] = 0LL;
    sub_18000F444(v30, (__int64)&qword_18025D0F8);
    result = sub_1800B1210(a1, v30, v21, -1);
    if ( v10 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        result = (unsigned int)_InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 1832);
    if ( !v2
      || ((v3 = *(_QWORD *)(v2 + 112)) == 0 || (v4 = *(int **)(v3 + 128)) == 0LL ? (v5 = 0) : (v5 = *v4),
          v5 != *(_DWORD *)(a1 + 1940)) )
    {
      sub_180101098(a1);
    }
    v23 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1912), (__int64 *)&v23);
    if ( *((_QWORD *)&v23 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v6 = *((_QWORD *)&v23 + 1);
        (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
      }
    }
    v24 = 0LL;
    v7 = *(_QWORD *)(a1 + 1920);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *(_QWORD *)(a1 + 1920);
    }
    *(_QWORD *)&v24 = *(_QWORD *)(a1 + 1912);
    *((_QWORD *)&v24 + 1) = v7;
    sub_1800B1094(a1, (__int64 *)&v24);
    v25 = 0LL;
    v8 = *(_QWORD *)(a1 + 1840);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *(_QWORD *)(a1 + 1840);
    }
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 1832);
    *((_QWORD *)&v25 + 1) = v8;
    sub_1800B0E64(a1, (__int64 *)&v25);
    sub_1800B1144(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_1800B1144(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_1800B1144(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
