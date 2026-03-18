/*
 * XREFs of ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HrFindInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  char *v12; // rdi
  char *v13; // rax

  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data4;
  if ( !v5 )
    goto LABEL_26;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
  if ( !v6 )
    goto LABEL_26;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data4;
    if ( v8 )
    {
      v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
        v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
      if ( v11 )
      {
        *a3 = 0LL;
        return 2147500033LL;
      }
      else
      {
        if ( this )
          v12 = (char *)this + 80;
        else
          v12 = 0LL;
        *a3 = v12;
        return 0LL;
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 11);
      if ( v9 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 208LL))(v9) )
      {
        *a3 = (char *)this + 56;
        return 0LL;
      }
      else
      {
        result = 2147500034LL;
        *a3 = 0LL;
      }
    }
  }
  else
  {
LABEL_26:
    v13 = (char *)this + 64;
    if ( !this )
      v13 = 0LL;
    *a3 = v13;
    return 0LL;
  }
  return result;
}
