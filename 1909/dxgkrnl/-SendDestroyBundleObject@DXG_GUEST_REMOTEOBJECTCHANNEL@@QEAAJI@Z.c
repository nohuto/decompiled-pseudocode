/*
 * XREFs of ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1C0265478
 * Callers:
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02931EC (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+3Ch] [rbp-24h]
  int v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+44h] [rbp-1Ch]
  _DWORD v23[4]; // [rsp+48h] [rbp-18h] BYREF

  v2 = a2;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, v6);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v8;
  }
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdWarning(v9);
    return (unsigned int)v8;
  }
  v10 = *((_QWORD *)this + 1);
  v22 = 0;
  v23[2] = 3;
  v23[0] = 1869901170;
  v19 = 1869901170;
  v23[1] = -1073741823;
  v20 = -1073741823;
  v21 = 4;
  v18 = 16;
  v23[3] = v2;
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v10 + 32LL))(
          v10,
          v23,
          16LL,
          &v19,
          &v18);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v9 + 24) = v8;
    goto LABEL_7;
  }
  if ( v18 == 16 )
  {
    if ( v21 == 4 )
    {
      LODWORD(v8) = v20;
      return (unsigned int)v8;
    }
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    v16 = v21;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    v16 = v18;
  }
  *(_QWORD *)(v15 + 24) = v16;
  *(_QWORD *)(v15 + 32) = -1073741823LL;
  WdLogEvent5_WdWarning(v15);
  LODWORD(v8) = -1073741823;
  return (unsigned int)v8;
}
