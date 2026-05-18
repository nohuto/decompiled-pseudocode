/*
 * XREFs of sub_18000F008 @ 0x18000F008
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000F008(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int v14; // r8d
  __int64 result; // rax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _BYTE v21[8]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-51h]
  unsigned int v23; // [rsp+60h] [rbp-49h]
  unsigned int v24; // [rsp+68h] [rbp-41h]
  __int128 v25; // [rsp+70h] [rbp-39h]
  __int64 v26; // [rsp+80h] [rbp-29h] BYREF
  __int64 v27; // [rsp+88h] [rbp-21h]
  _DWORD v28[12]; // [rsp+90h] [rbp-19h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
  {
    v8 = *(_DWORD *)(a1 + 1704);
    v9 = *(_DWORD *)(a1 + 1708);
    v10 = *(_DWORD *)(a1 + 1712);
    if ( a3 >= v8 )
      v8 = a3;
    v11 = v8 + v10 - 1 - (v8 + v10 - 1) % v10;
    v24 = v11;
    if ( a4 >= v9 )
      v9 = a4;
    v12 = v9 + v10 - 1 - (v9 + v10 - 1) % v10;
    v23 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    if ( v13 < v11 )
      v13 = v11;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    if ( v14 < v12 )
      v14 = v12;
    if ( v14 * v13 - v12 * v11 < (int)(float)((float)(int)(v14 * v13) * *(float *)(a1 + 1716)) )
    {
      v24 = v13;
      v23 = v14;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 80LL))(a2, v28);
    v24 = v28[0];
    v23 = v28[1];
  }
  if ( *(_QWORD *)(a1 + 1696) != a2
    || v24 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1), v23 != (_DWORD)result) )
  {
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v21);
    v16 = (_QWORD *)result;
    v25 = 0LL;
    v17 = *(_QWORD *)(result + 8);
    if ( v17 )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v17 + 8);
        if ( !(_DWORD)result )
          break;
        if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), result + 1, result) )
        {
          *(_QWORD *)&v25 = *v16;
          result = v16[1];
          *((_QWORD *)&v25 + 1) = result;
          break;
        }
      }
    }
    v18 = v22;
    if ( v22 )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v18 + 8LL))(v18, v17, v16);
    }
    if ( (_QWORD)v25 )
    {
      v26 = 0LL;
      v27 = 0LL;
      sub_1800631C0(v25 + 24, &v26);
      v19 = *(_QWORD *)(a1 + 1696);
      if ( v19 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v19 = *(_QWORD *)(a1 + 1696);
        }
        *(_QWORD *)(a1 + 1696) = a2;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v25 + 144LL))(v25, 0LL);
      if ( (_BYTE)v27 )
        result = sub_180063668(v26);
    }
    if ( *((_QWORD *)&v25 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v20 = *((_QWORD *)&v25 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v25 + 1))(*((_QWORD *)&v25 + 1), v17, v16);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
      }
    }
  }
  return result;
}
