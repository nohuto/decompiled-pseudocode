/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180054090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        unsigned int a2,
        struct DeviceCommandMessage *a3)
{
  unsigned __int64 v3; // r9
  __int64 ***v7; // rdi
  __int64 **j; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 *i; // rax
  __int64 *v16; // rcx
  unsigned int v18; // [rsp+38h] [rbp+10h]

  v18 = a2;
  v3 = 0LL;
  if ( a2 )
  {
    v9 = 0xCBF29CE484222325uLL;
    do
    {
      v10 = *((unsigned __int8 *)&v18 + v3++);
      v9 = 0x100000001B3LL * (v10 ^ v9);
    }
    while ( v3 < 4 );
    v11 = *((_QWORD *)this + 14);
    v12 = v9 & *((_QWORD *)this + 17);
    v13 = (__int64 *)*((_QWORD *)this + 12);
    v14 = 2 * v12;
    for ( i = *(__int64 **)(v11 + 16 * v12); ; i = (__int64 *)*i )
    {
      v16 = *(__int64 **)(v11 + 8 * v14) == v13 ? (__int64 *)*((_QWORD *)this + 12) : **(__int64 ***)(v11 + 8 * v14 + 8);
      if ( i == v16 )
        break;
      if ( *((_DWORD *)i + 4) == a2 )
        goto LABEL_16;
    }
    i = (__int64 *)*((_QWORD *)this + 12);
LABEL_16:
    if ( i != v13 )
      (*(void (__fastcall **)(__int64, _QWORD, struct DeviceCommandMessage *))(*(_QWORD *)i[3] + 24LL))(i[3], a2, a3);
  }
  else
  {
    v7 = (__int64 ***)*((_QWORD *)this + 12);
    for ( j = *v7; j != (__int64 **)v7; j = (__int64 **)*j )
      (*(void (__fastcall **)(__int64 *, _QWORD, struct DeviceCommandMessage *))(*j[3] + 24))(
        j[3],
        *((unsigned int *)j + 4),
        a3);
  }
  return 0LL;
}
