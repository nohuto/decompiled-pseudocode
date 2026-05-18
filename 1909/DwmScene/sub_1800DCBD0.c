/*
 * XREFs of sub_1800DCBD0 @ 0x1800DCBD0
 * Callers:
 *     sub_180069120 @ 0x180069120 (sub_180069120.c)
 * Callees:
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_180026880 @ 0x180026880 (sub_180026880.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180067FA4 @ 0x180067FA4 (sub_180067FA4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800DE74C @ 0x1800DE74C (sub_1800DE74C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DCBD0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // r12d
  bool v9; // cl
  _QWORD *v10; // r14
  unsigned int v11; // eax
  int v12; // r12d
  volatile signed __int32 *v13; // rbx
  _QWORD *i; // r14
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // r13
  volatile signed __int32 *v17; // rbx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // cl
  int v22; // r14d
  __int64 *v23; // r12
  volatile signed __int32 *v24; // rbx
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // r14d
  volatile signed __int32 *v32; // rbx
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  size_t Size; // [rsp+40h] [rbp-C0h]
  _QWORD *v37; // [rsp+50h] [rbp-B0h]
  unsigned int v38; // [rsp+58h] [rbp-A8h]
  __int64 v39[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40[4]; // [rsp+78h] [rbp-88h] BYREF
  char *v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  char *v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v52; // [rsp+100h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v7 = sub_18006CE94((__int64)a2);
    v8 = *(_DWORD *)(a3 + 20);
    v37 = (_QWORD *)v7;
    v9 = (a2[328] & 1) != 0 && (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 8LL);
    v10 = (_QWORD *)(a1 + 80);
    v11 = v8 & 0xFFFFFFBF;
    v12 = v8 | 0x40;
    if ( !v9 )
      v12 = v11;
    while ( v10 != (_QWORD *)(a1 + 176) )
    {
      *v10 = 0LL;
      v13 = (volatile signed __int32 *)v10[1];
      v10[1] = 0LL;
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      v10 += 2;
    }
    for ( i = (_QWORD *)(a1 + 176); i != (_QWORD *)(a1 + 272); i += 2 )
    {
      *i = 0LL;
      v15 = (volatile signed __int32 *)i[1];
      i[1] = 0LL;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    sub_18000DCC0((__int64)v37, &v47, 0);
    v16 = (__int64 *)(a1 + 456);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 456), &v47);
    v17 = v48;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    LOBYTE(v40[0]) = 0;
    v18 = (char *)operator new(0x30uLL);
    v40[2] = 33LL;
    v40[3] = 47LL;
    strcpy(v18, "ImageProcessing Input FrameBuffer");
    v19 = *v16;
    v40[0] = (__int64)v18;
    sub_1800645F4(v19, v40);
    sub_180064DAC(*v16, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v12, (__int64)a2);
    v20 = sub_180077A8C((__int64)v37, 1);
    v21 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v20 + 64LL))(v20, &unk_1802599D8, 0LL)
       && (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v22 = v12 | 0x100;
    v38 = v21 + 1;
    if ( !v21 )
      v22 = v12;
    sub_180026880(v37, &v49, 1u);
    v23 = (__int64 *)(a1 + 472);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 472), &v49);
    v24 = v50;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    v43 = 15LL;
    v42 = 0LL;
    LOBYTE(v41) = 0;
    v25 = (char *)operator new(0x30uLL);
    v42 = 34LL;
    v43 = 47LL;
    strcpy(v25, "ImageProcessing Input DepthBuffer)");
    v26 = *v23;
    v41 = v25;
    sub_1800645F4(v26, (__int64 *)&v41);
    sub_1800D0458((_QWORD *)*v23, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v38, v22, (__int64)a2);
    v27 = *v16;
    v28 = sub_18006CEC8((__int64)a2);
    v29 = *(_QWORD *)(v27 + 136);
    if ( v29 )
      v30 = sub_180067FA4(v29, v28);
    else
      v30 = 0;
    if ( v30 <= 1 )
    {
      *(_OWORD *)v39 = 0LL;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), v39);
      if ( v39[1] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39[1] + 8), 0xFFFFFFFF) == 1 )
        {
          v35 = v39[1];
          (**(void (__fastcall ***)(__int64))v39[1])(v39[1]);
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v35 + 12)) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39[1] + 8LL))(v39[1]);
        }
      }
    }
    else
    {
      v31 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
      sub_180015F14(v37, &v51, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), &v51);
      v32 = v52;
      if ( v52 && _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      }
      v45 = 0LL;
      v46 = 15LL;
      LOBYTE(v44) = 0;
      v33 = (char *)operator new(0x20uLL);
      v45 = 29LL;
      v46 = 31LL;
      strcpy(v33, "ImageProcessing Input Texture");
      v34 = *(_QWORD *)(a1 + 64);
      v44 = v33;
      sub_1800645F4(v34, (__int64 *)&v44);
      LODWORD(Size) = 0;
      sub_18009E070(
        *(_QWORD *)(a1 + 64),
        *(_DWORD *)a3,
        *(_DWORD *)(a3 + 4),
        0,
        *(_DWORD *)(a3 + 8),
        0,
        v31,
        0LL,
        Size,
        (__int64)a2);
    }
    return sub_1800DE74C(a1, a2);
  }
  return result;
}
