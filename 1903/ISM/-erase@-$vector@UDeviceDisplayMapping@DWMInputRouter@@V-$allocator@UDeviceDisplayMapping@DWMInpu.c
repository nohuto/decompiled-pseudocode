/*
 * XREFs of ?erase@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@@2@0@Z @ 0x1800C5C34
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800C2DA0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v7; // rbp
  __int64 *v8; // rsi
  char *v9; // rdi
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 **result; // rax
  char v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 != a4 )
  {
    v7 = *(__int64 **)(a1 + 8);
    v8 = a3;
    if ( a4 != v7 )
    {
      v9 = (char *)(a4 + 1);
      v10 = (char *)((char *)a3 - (char *)a4);
      do
      {
        *(_DWORD *)v8 = *((_DWORD *)v9 - 2);
        v11 = 0LL;
        if ( &v16 != v9 )
        {
          v11 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 0LL;
        }
        v12 = *(_QWORD *)&v10[(_QWORD)v9];
        *(_QWORD *)&v10[(_QWORD)v9] = v11;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v9 += 16;
        v8 += 2;
      }
      while ( v9 - 8 != (char *)v7 );
      v7 = *(__int64 **)(a1 + 8);
    }
    if ( v8 != v7 )
    {
      v13 = v8 + 1;
      do
      {
        v14 = *v13;
        if ( *v13 )
        {
          *v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v13 += 2;
      }
      while ( v13 - 1 != v7 );
    }
    *(_QWORD *)(a1 + 8) = v8;
  }
  result = a2;
  *a2 = a3;
  return (__int64 **)result;
}
