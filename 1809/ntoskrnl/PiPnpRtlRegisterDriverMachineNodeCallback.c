/*
 * XREFs of PiPnpRtlRegisterDriverMachineNodeCallback @ 0x1407649F0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegisterMachineNode @ 0x1408F71DC (_PnpCtxRegisterMachineNode.c)
 */

bool __fastcall PiPnpRtlRegisterDriverMachineNodeCallback(const wchar_t *a1, int *a2)
{
  int v4; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  int v9; // r9d
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( !wcsicmp(a1, L"SYSTEM") )
    goto LABEL_2;
  v6 = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  v7 = SysCtxRegOpenKey(v6, 2147483650LL, (__int64)a1, 0, 0x2000000u, (__int64)&Handle);
  v4 = v7;
  if ( v7 == -1073741772 )
  {
LABEL_2:
    v4 = 0;
  }
  else if ( v7 >= 0 )
  {
    v4 = PnpCtxRegisterMachineNode(v8, (_DWORD)a1, 3, v9, (__int64)Handle);
    if ( v4 == 0x40000000 )
      v4 = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  *a2 = v4;
  return v4 >= 0;
}
