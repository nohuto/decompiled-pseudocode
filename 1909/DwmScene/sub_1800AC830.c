/*
 * XREFs of sub_1800AC830 @ 0x1800AC830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800B1094 @ 0x1800B1094 (sub_1800B1094.c)
 *     sub_1800DD6EC @ 0x1800DD6EC (sub_1800DD6EC.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AC830(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  const char *v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  signed __int32 v14; // eax
  bool v15; // zf
  void (__fastcall **v16)(__int64); // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  signed __int32 v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[2]; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-1h] BYREF
  char v28[16]; // [rsp+60h] [rbp+Fh] BYREF
  char v29[16]; // [rsp+70h] [rbp+1Fh] BYREF
  char v30[16]; // [rsp+80h] [rbp+2Fh] BYREF
  char v31[24]; // [rsp+90h] [rbp+3Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v5 = *(_DWORD *)(a1 + 128);
  if ( v5 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 0x100) != 0 )
      v5 = ((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 280LL))(*a2) != 0) + 2;
    result = *(_DWORD *)(a1 + 440) >> 9;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
      v5 = 4;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a2 + 32LL))(*a2, v30);
    sub_1800B1094(a1, v24);
    v25 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a2 + 40LL))(*a2, v31);
    return sub_1800B0E64(a1, v25);
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
      {
        v8 = (const char *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
          v8 = *(const char **)v8;
        return sub_18011DA98(
                 &unk_18025D7A0,
                 4LL,
                 "Warning: camera '%s' not bound to any render target or depth buffer -- no pixels will be rendered",
                 v8);
      }
      return result;
    }
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
    v10 = v9[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = v9[1];
    }
    v11 = *v9;
    v12 = sub_1800DD84C(*v9, v28, 2LL);
    sub_1800B1094(a1, v12);
    v13 = sub_1800DD6EC(v11, v29, 2LL);
    result = sub_1800B0E64(a1, v13);
    if ( v10 )
    {
      v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF);
      v15 = v14 == 1;
      result = (unsigned int)(v14 - 1);
      if ( v15 )
      {
        (**(void (__fastcall ***)(__int64))v10)(v10);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
        if ( !(_DWORD)result )
        {
          v16 = *(void (__fastcall ***)(__int64))v10;
          v17 = v10;
          return ((__int64 (__fastcall *)(__int64))v16[1])(v17);
        }
      }
    }
  }
  else
  {
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
    v19 = v18[1];
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = v18[1];
    }
    v20 = (_QWORD *)*v18;
    v21 = *(_QWORD *)(*v18 + 464LL);
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      v21 = v20[58];
    }
    v26[0] = v20[57];
    v26[1] = v21;
    sub_1800B1094(a1, v26);
    v22 = v20[60];
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = v20[60];
    }
    v27[0] = v20[59];
    v27[1] = v22;
    result = sub_1800B0E64(a1, v27);
    if ( v19 )
    {
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF);
      v15 = v23 == 1;
      result = (unsigned int)(v23 - 1);
      if ( v15 )
      {
        (**(void (__fastcall ***)(__int64))v19)(v19);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
        if ( !(_DWORD)result )
        {
          v16 = *(void (__fastcall ***)(__int64))v19;
          v17 = v19;
          return ((__int64 (__fastcall *)(__int64))v16[1])(v17);
        }
      }
    }
  }
  return result;
}
