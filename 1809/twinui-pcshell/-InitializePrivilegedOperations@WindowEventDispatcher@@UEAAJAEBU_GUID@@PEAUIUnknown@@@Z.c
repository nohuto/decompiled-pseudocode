/*
 * XREFs of ?InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180229020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowEventDispatcher::InitializePrivilegedOperations(
        WindowEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  __int64 v6; // rcx
  GUID *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 96;
    v6 = *((_QWORD *)this + 12);
    *(_QWORD *)v5 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v6 + 16LL))(v6, a2, 0LL);
    v7 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
LABEL_19:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(a3, v7, v5);
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v8 )
  {
    v5 = (char *)this + 104;
    v9 = *((_QWORD *)this + 13);
    *(_QWORD *)v5 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, a2, 0LL);
    v7 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v10 )
  {
    v5 = (char *)this + 112;
    v11 = *((_QWORD *)this + 14);
    *(_QWORD *)v5 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, a2, 0LL);
    v7 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
    goto LABEL_19;
  }
  return 0LL;
}
