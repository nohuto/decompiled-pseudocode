/*
 * XREFs of sub_1800D0190 @ 0x1800D0190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800390B0 @ 0x1800390B0 (sub_1800390B0.c)
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800643AC @ 0x1800643AC (sub_1800643AC.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0190(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 *v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rax
  unsigned int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  _QWORD v19[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-20h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18006CDB8(*a2);
    v5 = result;
    v6 = *(__int64 **)(a1 + 256);
    v7 = v6;
    v8 = (__int64 *)v6[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= (unsigned int)result )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == v6 || (unsigned int)result < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = *(__int64 **)(a1 + 256);
    if ( v7 == v6 )
    {
      sub_1800641B0(a1, a2);
      v20 = 0LL;
      v21 = 0LL;
      sub_1800390B0(*a2, &v20);
      v9 = sub_1800642F8(a1, v19);
      sub_1800644E4(v20, v9);
      v10 = *(_QWORD *)(a1 + 112);
      v11 = *(unsigned int **)(v10 + 128);
      if ( v11 )
        v12 = v11[5];
      else
        v12 = 0;
      if ( v10 && v11 )
        v13 = v11[4];
      else
        v13 = 0LL;
      if ( v10 && v11 )
        v14 = v11[1];
      else
        v14 = 0LL;
      if ( v10 && v11 )
        v15 = *v11;
      else
        v15 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int))(*(_QWORD *)v20 + 40LL))(
        v20,
        v15,
        v14,
        v13,
        v12);
      sub_1800CFDC8(a1, &v20);
      result = sub_1800643AC(a1, v5);
      v16 = v21;
      if ( v21 )
      {
        v17 = _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF);
        v18 = v17 == 1;
        result = (unsigned int)(v17 - 1);
        if ( v18 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          result = (unsigned int)_InterlockedDecrement(v16 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
  }
  return result;
}
