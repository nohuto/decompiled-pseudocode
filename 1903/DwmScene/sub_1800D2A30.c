/*
 * XREFs of sub_1800D2A30 @ 0x1800D2A30
 * Callers:
 *     sub_1800D24F4 @ 0x1800D24F4 (sub_1800D24F4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 *     sub_1800D206C @ 0x1800D206C (sub_1800D206C.c)
 *     _o__invalid_parameter_noinfo @ 0x180125A19 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2A30(_QWORD *a1, void *a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  void (__fastcall ****v6)(_QWORD, __int64); // r12
  unsigned int v7; // r10d
  __int64 v8; // rax
  unsigned int v11; // r15d
  int v12; // r14d
  unsigned int v13; // r13d
  void **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  _QWORD *v24; // rax
  void (__fastcall ***v25)(_QWORD, __int64); // rdx
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  _DWORD v28[15]; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+84h] [rbp-7Ch]
  int v31; // [rsp+8Ch] [rbp-74h]
  int v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+94h] [rbp-6Ch]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int v36; // [rsp+A0h] [rbp-60h]
  _DWORD v37[15]; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+ECh] [rbp-14h]
  __int64 v39; // [rsp+F4h] [rbp-Ch]
  int v40; // [rsp+FCh] [rbp-4h]
  int v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+104h] [rbp+4h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  int v45; // [rsp+110h] [rbp+10h]
  void *v46; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v47; // [rsp+128h] [rbp+28h]
  void (__fastcall ***v48)(_QWORD, __int64); // [rsp+170h] [rbp+70h] BYREF
  unsigned int v49; // [rsp+180h] [rbp+80h]

  v49 = a3;
  v6 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 14);
  v7 = a3;
  v8 = a1[14];
  if ( v8 )
    v11 = *(_DWORD *)(v8 + 16);
  else
    v11 = 0;
  v12 = a6;
  if ( (unsigned int)(a6 - 23) > 1 )
  {
    v37[0] = 0;
    v37[5] = 12;
    v37[6] = 16;
    v37[10] = 12;
    v37[11] = 16;
    v37[12] = 2;
    v37[14] = 2;
    v38 = 0x400000004LL;
    v39 = 0x400000004LL;
    v40 = 2;
    v45 = 2;
    v37[1] = 4;
    v37[2] = 4;
    v37[3] = 4;
    v37[4] = 8;
    v37[7] = 4;
    v37[8] = 4;
    v37[9] = 8;
    v37[13] = 1;
    v41 = 4;
    v42 = 8;
    v43 = 4;
    v44 = 1;
    v13 = a3 * v37[a6];
  }
  else
  {
    v28[0] = 0;
    v28[5] = 12;
    v28[10] = 12;
    v28[12] = 2;
    v28[14] = 2;
    v31 = 2;
    v36 = 2;
    v28[6] = 16;
    v28[11] = 16;
    v28[1] = 4;
    v28[2] = 4;
    v28[3] = 4;
    v28[4] = 8;
    v28[7] = 4;
    v28[8] = 4;
    v28[9] = 8;
    v28[13] = 1;
    v29 = 0x400000004LL;
    v30 = 0x400000004LL;
    v32 = 4;
    v33 = 8;
    v34 = 4;
    v35 = 1;
    v13 = ((a3 + 1) & 0xFFFFFFFE) * v28[a6];
  }
  v14 = (void **)(a1 + 17);
  if ( !a1[17] )
    goto LABEL_22;
  if ( *v14 != a2 && a4 <= v11 )
  {
    if ( v13 )
    {
      if ( !a2 || v11 < (unsigned __int64)v13 )
      {
        memset(*v14, 0, v11);
        if ( a2 )
        {
          if ( v11 >= (unsigned __int64)v13 )
            goto LABEL_19;
          *(_DWORD *)o__errno(v16, v15, v17) = 34;
        }
        else
        {
          *(_DWORD *)o__errno(v16, v15, v17) = 22;
        }
        o__invalid_parameter_noinfo(v19, v18, v20);
        goto LABEL_19;
      }
      memcpy(*v14, a2, v13);
    }
LABEL_19:
    sub_18002627C(a1 + 15);
    v12 = a6;
LABEL_27:
    v7 = v49;
    goto LABEL_28;
  }
  if ( !*v14 || *v14 != a2 )
  {
LABEL_22:
    v21 = a4;
    v11 = a4;
    v22 = (__int64 *)sub_1800D206C(&v46, a4, a2, v13);
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, v22);
    v23 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    sub_18006445C((__int64)a1, v21, 0xFu);
    goto LABEL_27;
  }
LABEL_28:
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, void (__fastcall ****)(_QWORD, __int64), _QWORD, _QWORD, unsigned int, int, int))(*a1 + 48LL))(
                    a1,
                    &v48,
                    v7,
                    v13,
                    v11,
                    a5,
                    v12);
  if ( v6 != v24 )
  {
    v25 = (void (__fastcall ***)(_QWORD, __int64))*v24;
    *v24 = 0LL;
    v26 = *v6;
    *v6 = v25;
    if ( v26 )
      (**v26)(v26, 1LL);
  }
  if ( v48 )
    (**v48)(v48, 1LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
}
