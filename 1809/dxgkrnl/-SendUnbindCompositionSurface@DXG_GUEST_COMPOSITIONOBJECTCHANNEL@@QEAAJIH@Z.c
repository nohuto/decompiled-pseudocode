/*
 * XREFs of ?SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIH@Z @ 0x1C0232DF4
 * Callers:
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C025D4B0 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        unsigned int a3)
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
  unsigned __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  unsigned __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  __int64 v19; // [rsp+58h] [rbp-18h]

  v3 = *((_QWORD *)this + 1);
  v18 = a2;
  v16 = 0xC0000001706D6F63uLL;
  v14 = 0xC0000001706D6F63uLL;
  v19 = a3;
  v17 = 7;
  v15 = 8LL;
  v13 = 16;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64, unsigned __int64 *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         &v16,
         24LL,
         &v14,
         &v13);
  v8 = v4;
  if ( v4 >= 0 )
  {
    if ( v13 == 16 )
    {
      if ( (_DWORD)v15 == 8 )
      {
        LODWORD(v8) = HIDWORD(v14);
        return (unsigned int)v8;
      }
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      v11 = (int)v15;
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
