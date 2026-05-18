/*
 * XREFs of sub_18003BFB0 @ 0x18003BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003BFB0(__int64 a1, _QWORD *a2, int *a3, int *a4)
{
  int v5; // edi
  int v6; // esi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  size_t v14; // [rsp+40h] [rbp-49h]
  int v15[2]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-31h]
  int *v17; // [rsp+60h] [rbp-29h]
  __int128 v18; // [rsp+68h] [rbp-21h] BYREF
  __int128 v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  _QWORD v21[3]; // [rsp+98h] [rbp+Fh] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+27h]

  v20 = -2LL;
  *(_QWORD *)v15 = *a2;
  v16 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v17 = v15;
  v5 = *a4;
  v6 = *a3;
  v7 = (_QWORD *)sub_1800642F8(*(_QWORD *)(a1 + 8), v21);
  v8 = std::string::append(v7, "Texture", 7uLL);
  v19 = 0uLL;
  v18 = *(_OWORD *)v8;
  v19 = *((_OWORD *)v8 + 1);
  v8[2] = 0LL;
  v8[3] = 15LL;
  *(_BYTE *)v8 = 0;
  sub_1800644E4(*(_QWORD *)v15, &v18);
  if ( v22 >= 0x10 )
  {
    v9 = v21[0];
    if ( v22 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v21[0] - 8LL);
      if ( (unsigned __int64)(v21[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v22 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  LODWORD(v14) = 0;
  result = sub_18009DF60(
             v15[0],
             **(_DWORD **)(a1 + 16),
             **(_DWORD **)(a1 + 24),
             0,
             v6,
             0,
             (unsigned __int8)v5 | **(_BYTE **)(a1 + 32),
             0LL,
             v14,
             **(_QWORD **)(a1 + 40));
  v11 = v16;
  if ( v16 )
  {
    v12 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v13 = v12 == 1;
    result = (unsigned int)(v12 - 1);
    if ( v13 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
