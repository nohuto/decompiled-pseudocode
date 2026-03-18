/*
 * XREFs of ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01064D4
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0105DD4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C010600C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01061E8 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeRightHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  __int64 result; // rax
  _DWORD *v4; // rcx

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = Win32AllocPoolZInit(0x18uLL, 0x7A645052u);
  *((_QWORD *)this + 3) = v2;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 280;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 30;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInit(
                                               8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL),
                                               0x7A645052u);
  v4 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v4 )
  {
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return 3221225495LL;
  }
  *v4 = 0;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 14400;
  *(_DWORD *)this = 1;
  return result;
}
