/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180031780
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BC10 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BC20 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BC30 (-QueryInterface@CAudioStream@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, CAudioStream **a3)
{
  CAudioStream *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rax

  v4 = this;
  v5 = *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 == *(_QWORD *)&a2->Data1 )
    v5 = *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4 - *(_QWORD *)a2->Data4;
  if ( !v5 )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
LABEL_14:
    *a3 = v4;
    return 0LL;
  }
  v6 = *(_QWORD *)&GUID_dafb0152_6a78_488a_b685_6dd5845a8db9.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_dafb0152_6a78_488a_b685_6dd5845a8db9.Data1 == *(_QWORD *)&a2->Data1 )
    v6 = *(_QWORD *)GUID_dafb0152_6a78_488a_b685_6dd5845a8db9.Data4 - *(_QWORD *)a2->Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    v4 = (CAudioStream *)((char *)v4 + 8);
    goto LABEL_14;
  }
  v7 = (char *)this + 24;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v8 )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (CAudioStream *)v7;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  return 0LL;
}
