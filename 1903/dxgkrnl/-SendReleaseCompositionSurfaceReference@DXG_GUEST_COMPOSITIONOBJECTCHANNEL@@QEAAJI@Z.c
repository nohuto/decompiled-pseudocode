/*
 * XREFs of ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1C0266FE8
 * Callers:
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02931FC (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h] BYREF
  int v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+44h] [rbp-1Ch]
  _DWORD v17[4]; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 1);
  v16 = 0;
  v17[3] = a2;
  v17[0] = 1886220131;
  v13 = 1886220131;
  v17[1] = -1073741823;
  v17[2] = 3;
  v14 = -1073741823;
  v15 = 4;
  v12 = 16;
  v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v2 + 32LL))(
         v2,
         v17,
         16LL,
         &v13,
         &v12);
  v7 = v3;
  if ( v3 >= 0 )
  {
    if ( v12 == 16 )
    {
      if ( v15 == 4 )
      {
        LODWORD(v7) = v14;
        return (unsigned int)v7;
      }
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      v10 = v15;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      v10 = v12;
    }
    *(_QWORD *)(v9 + 24) = v10;
    *(_QWORD *)(v9 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v9);
    LODWORD(v7) = -1073741823;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
