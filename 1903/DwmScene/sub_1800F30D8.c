/*
 * XREFs of sub_1800F30D8 @ 0x1800F30D8
 * Callers:
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800F1440 @ 0x1800F1440 (sub_1800F1440.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800F30D8(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r15
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int16 v9; // cx
  __int64 v10; // r13
  int v11; // ecx
  __int64 *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  int i; // r14d
  __int64 *v21; // rdx
  volatile signed __int32 *v22; // rbx
  signed __int32 v23; // eax
  bool v24; // zf
  const void **v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  const void **v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  _QWORD *v37; // [rsp+60h] [rbp-A8h]
  __int64 v38[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v39[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41[4]; // [rsp+C8h] [rbp-40h] BYREF
  const void *v42; // [rsp+E8h] [rbp-20h] BYREF
  char v43[32]; // [rsp+108h] [rbp+0h] BYREF
  const void *Src; // [rsp+128h] [rbp+20h] BYREF
  char v45[32]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v46[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v47[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1E8h] [rbp+E0h] BYREF

  v36 = -2LL;
  v37 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_18000E498(v39);
    v28 = sub_18000E498(v38);
    sub_180027770(v46, v28, 658, (__int64)v39, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v46;
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1176), a2);
  v4 = (__int64 *)(a1 + 1192);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(a1 + 1192);
  v5 = (__int64 *)(a1 + 1216);
  result = *(_QWORD *)(a1 + 1216);
  *(_QWORD *)(a1 + 1224) = result;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 64);
  v32 = v8;
  while ( v7 != v8 )
  {
    if ( !*(_DWORD *)(v7 + 48) )
      goto LABEL_33;
    v9 = *(_WORD *)(*a2 + 2LL * *(unsigned __int16 *)(v7 + 32) + 128);
    if ( v9 == 0xFFFF )
    {
      v25 = sub_18009FB30(
              &Src,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
              (_QWORD *)v7);
      v26 = sub_18002BF78((__int64)v45, v25, "' required for import by this layout");
      v27 = sub_18000E498(v41);
      sub_180027770(pExceptionObject, v27, 673, v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    result = v9;
    v10 = *(_QWORD *)(*a2 + 56LL) + 56LL * v9;
    v11 = *(_DWORD *)(v7 + 36);
    if ( v11 != *(_DWORD *)(v10 + 36) )
    {
      v29 = sub_18009FB30(
              &v42,
              "ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
              (_QWORD *)v7);
      v30 = sub_18002BF78((__int64)v43, v29, "' imported by this layout");
      v31 = sub_18000E498(v40);
      sub_180027770(v47, v31, 680, v30, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)v47;
    }
    if ( v11 == 8 )
    {
      LODWORD(v33) = *(_DWORD *)(v10 + 40);
      HIDWORD(v33) = *(_DWORD *)(v7 + 40);
      v12 = (__int64 *)v5[1];
      if ( (__int64 *)v5[2] == v12 )
      {
        result = sub_1800F1440(v5, (unsigned __int64)v12, &v33);
      }
      else
      {
        result = v33;
        *v12 = v33;
        v5[1] += 8LL;
      }
      goto LABEL_33;
    }
    if ( !v11 )
    {
      v19 = 1;
LABEL_26:
      if ( !v19 )
        goto LABEL_33;
      goto LABEL_27;
    }
    v13 = v11 - 1;
    if ( v13 && (v14 = v13 - 1) != 0 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 && (v18 = v17 - 1) != 0 )
          {
            if ( v18 != 1 )
            {
              v19 = 0;
              goto LABEL_26;
            }
            v19 = 16;
          }
          else
          {
            v19 = 4;
          }
        }
        else
        {
          v19 = 3;
        }
      }
      else
      {
        v19 = 2;
      }
    }
    else
    {
      v19 = 1;
    }
LABEL_27:
    for ( i = 0; i < v19; ++i )
    {
      LODWORD(v35) = i + *(_DWORD *)(v10 + 40);
      HIDWORD(v35) = i + *(_DWORD *)(v7 + 40);
      v34 = v35;
      v21 = (__int64 *)v4[1];
      if ( (__int64 *)v4[2] == v21 )
      {
        result = sub_1800F1440(v4, (unsigned __int64)v21, &v34);
      }
      else
      {
        result = v34;
        *v21 = v34;
        v4[1] += 8LL;
      }
    }
    v8 = v32;
LABEL_33:
    v7 += 56LL;
  }
  v22 = (volatile signed __int32 *)a2[1];
  if ( v22 )
  {
    v23 = _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF);
    v24 = v23 == 1;
    result = (unsigned int)(v23 - 1);
    if ( v24 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      result = (unsigned int)_InterlockedDecrement(v22 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return result;
}
