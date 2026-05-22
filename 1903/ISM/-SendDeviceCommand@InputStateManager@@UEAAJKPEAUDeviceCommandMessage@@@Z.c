/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180029C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        unsigned int a2,
        struct DeviceCommandMessage *a3)
{
  __int64 ***v6; // rdi
  __int64 **j; // rbx
  __int64 v9; // rax
  unsigned int *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 *i; // rax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  if ( a2 )
  {
    v9 = 0xCBF29CE484222325uLL;
    v10 = &v19;
    v11 = 4LL;
    do
    {
      v12 = *(unsigned __int8 *)v10;
      v10 = (unsigned int *)((char *)v10 + 1);
      v9 = 0x100000001B3LL * (v12 ^ v9);
      --v11;
    }
    while ( v11 );
    v13 = *((_QWORD *)this + 14);
    v14 = v9 & *((_QWORD *)this + 17);
    v15 = (__int64 *)*((_QWORD *)this + 12);
    v16 = 2 * v14;
    for ( i = *(__int64 **)(v13 + 8 * v16); ; i = (__int64 *)*i )
    {
      v18 = *(__int64 **)(v13 + 8 * v16) == v15 ? (__int64)v15 : **(_QWORD **)(v13 + 8 * v16 + 8);
      if ( i == (__int64 *)v18 )
        break;
      if ( *((_DWORD *)i + 4) == a2 )
        goto LABEL_16;
    }
    i = v15;
LABEL_16:
    if ( i != v15 )
      (*(void (__fastcall **)(__int64, _QWORD, struct DeviceCommandMessage *))(*(_QWORD *)i[3] + 24LL))(i[3], a2, a3);
  }
  else
  {
    v6 = (__int64 ***)*((_QWORD *)this + 12);
    for ( j = *v6; j != (__int64 **)v6; j = (__int64 **)*j )
      (*(void (__fastcall **)(__int64 *, _QWORD, struct DeviceCommandMessage *))(*j[3] + 24))(
        j[3],
        *((unsigned int *)j + 4),
        a3);
  }
  return 0LL;
}
