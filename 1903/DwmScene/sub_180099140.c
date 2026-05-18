/*
 * XREFs of sub_180099140 @ 0x180099140
 * Callers:
 *     sub_180099040 @ 0x180099040 (sub_180099040.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012944 @ 0x180012944 (sub_180012944.c)
 *     sub_180097AF4 @ 0x180097AF4 (sub_180097AF4.c)
 *     sub_180098158 @ 0x180098158 (sub_180098158.c)
 *     sub_1800F0C90 @ 0x1800F0C90 (sub_1800F0C90.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180099140(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  _DWORD *v14; // rcx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-C0h]
  __int128 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _QWORD *v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v30[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v31[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v32[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v33[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v34[5]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v35[8]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v36[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v37[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+230h] [rbp+130h] BYREF

  v25 = -2LL;
  v26 = a2;
  v24 = 0LL;
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a2[1];
  }
  *(_QWORD *)&v24 = *a2;
  *((_QWORD *)&v24 + 1) = v6;
  sub_1800F0C90(a1, &v24);
  v22 = 0LL;
  v23 = 0LL;
  sub_180012944(&v22, a2);
  v7 = *a3;
  if ( (*a3 & 8) != 0 )
  {
    sub_18000E498(v28);
    v19 = sub_18000E498(v27);
    sub_180098158(v35, v19, 82, (__int64)v28, 0);
    throw (Spectre::Engine::EngineNotImplException *)v35;
  }
  if ( v22 + 104 != a1 + 104 )
  {
    sub_180097AF4((__int64 *)(v22 + 104), *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112));
    v7 = *a3;
  }
  if ( (v7 & 4) != 0 )
  {
    sub_18000E498(v30);
    v20 = sub_18000E498(v29);
    sub_180098158(v36, v20, 95, (__int64)v30, 0);
    throw (Spectre::Engine::EngineNotImplException *)v36;
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v22 + 88), (_QWORD *)(a1 + 88));
  if ( (*(_BYTE *)a3 & 0x10) != 0 )
  {
    sub_18000E498(v32);
    v21 = sub_18000E498(v31);
    sub_180098158(v37, v21, 104, (__int64)v32, 0);
    throw (Spectre::Engine::EngineNotImplException *)v37;
  }
  v8 = v22;
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    v9 = *(_QWORD *)(a1 + 144);
  }
  *(_QWORD *)(v8 + 136) = *(_QWORD *)(a1 + 136);
  v10 = *(volatile signed __int32 **)(v8 + 144);
  *(_QWORD *)(v8 + 144) = v9;
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( (*(_BYTE *)a3 & 0x20) != 0 )
  {
    sub_18000E498(v34);
    v18 = sub_18000E498(v33);
    sub_180098158(pExceptionObject, v18, 113, (__int64)v34, 0);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v11 = v22;
  v12 = *(_QWORD *)(a1 + 160);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    v12 = *(_QWORD *)(a1 + 160);
  }
  *(_QWORD *)(v11 + 152) = *(_QWORD *)(a1 + 152);
  v13 = *(volatile signed __int32 **)(v11 + 160);
  *(_QWORD *)(v11 + 160) = v12;
  if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (_DWORD *)v22;
  *(_BYTE *)(v22 + 168) = *(_BYTE *)(a1 + 168);
  v14[43] = *(_DWORD *)(a1 + 172);
  v14[44] = *(_DWORD *)(a1 + 176);
  v14[45] = *(_DWORD *)(a1 + 180);
  result = *(unsigned int *)(a1 + 184);
  v14[46] = result;
  if ( v23 )
  {
    result = (unsigned int)_InterlockedDecrement(v23 + 2);
    if ( !(_DWORD)result )
    {
      v16 = v23;
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
