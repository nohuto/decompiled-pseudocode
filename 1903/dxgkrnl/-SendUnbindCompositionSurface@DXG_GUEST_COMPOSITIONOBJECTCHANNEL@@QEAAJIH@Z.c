/*
 * XREFs of ?SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIH@Z @ 0x1C02672A8
 * Callers:
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C0293628 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  int v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  _DWORD v18[6]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 1);
  v18[5] = 0;
  v17 = 0;
  v18[3] = a2;
  v18[0] = 1886220131;
  v14 = 1886220131;
  v18[4] = a3;
  v18[1] = -1073741823;
  v18[2] = 7;
  v15 = -1073741823;
  v16 = 8;
  v13 = 16;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         v18,
         24LL,
         &v14,
         &v13);
  v8 = v4;
  if ( v4 >= 0 )
  {
    if ( v13 == 16 )
    {
      if ( v16 == 8 )
      {
        LODWORD(v8) = v15;
        return (unsigned int)v8;
      }
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      v11 = v16;
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      v11 = v13;
    }
    *(_QWORD *)(v10 + 24) = v11;
    *(_QWORD *)(v10 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v10);
    LODWORD(v8) = -1073741823;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v8;
}
