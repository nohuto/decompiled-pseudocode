/*
 * XREFs of sub_1800F1C04 @ 0x1800F1C04
 * Callers:
 *     sub_1800A5BC0 @ 0x1800A5BC0 (sub_1800A5BC0.c)
 * Callees:
 *     sub_1800F3C14 @ 0x1800F3C14 (sub_1800F3C14.c)
 *     sub_1800F3CC4 @ 0x1800F3CC4 (sub_1800F3CC4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1C04(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  volatile signed __int32 *v20; // rcx

  v2 = a1[152];
  if ( v2 )
  {
    v3 = (a1[154] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_33;
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[152] = 0LL;
    a1[153] = 0LL;
    a1[154] = 0LL;
  }
  v7 = a1[149];
  if ( v7 )
  {
    v8 = (a1[151] - v7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v8 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v7 - 8);
      v5 = v8 + 39;
      v6 = v7 - v9;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_33;
      v7 = v9;
    }
    j_j__o_free(v7);
    a1[149] = 0LL;
    a1[150] = 0LL;
    a1[151] = 0LL;
  }
  v10 = (volatile signed __int32 *)a1[148];
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a1[145];
  if ( v11 )
  {
    if ( !_InterlockedDecrement(v11 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  sub_1800F3CC4(a1 + 13);
  v12 = a1[10];
  if ( v12 )
  {
    v13 = (a1[12] - v12) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v13 >= 0x1000 )
    {
      v14 = *(_QWORD *)(v12 - 8);
      v5 = v13 + 39;
      v6 = v12 - v14;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_33;
      v12 = v14;
    }
    j_j__o_free(v12);
    a1[10] = 0LL;
    a1[11] = 0LL;
    a1[12] = 0LL;
  }
  result = sub_1800F3C14(a1 + 7);
  v16 = a1[5];
  if ( v16 < 0x10 )
    goto LABEL_29;
  v17 = a1[2];
  v18 = v16 + 1;
  if ( v18 >= 0x1000 )
  {
    v19 = *(_QWORD *)(v17 - 8);
    v5 = v18 + 39;
    v6 = v17 - v19;
    if ( (unsigned __int64)(v6 - 8) <= 0x1F )
    {
      v17 = v19;
      goto LABEL_28;
    }
LABEL_33:
    o__invalid_parameter_noinfo_noreturn(v6, v5);
    JUMPOUT(0x1800F1E33LL);
  }
LABEL_28:
  result = j_j__o_free(v17);
LABEL_29:
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  v20 = (volatile signed __int32 *)a1[1];
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  }
  return result;
}
