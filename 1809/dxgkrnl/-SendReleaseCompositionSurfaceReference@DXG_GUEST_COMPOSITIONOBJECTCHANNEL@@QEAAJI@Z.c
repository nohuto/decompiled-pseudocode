/*
 * XREFs of ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1C0232B24
 * Callers:
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C025D058 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v2 = *((_QWORD *)this + 1);
  v12 = 16;
  v17 = a2;
  v15 = 0xC0000001706D6F63uLL;
  v13 = 0xC0000001706D6F63uLL;
  v16 = 3;
  v14 = 4LL;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64, unsigned __int64 *, unsigned int *))(*(_QWORD *)v2 + 32LL))(
         v2,
         &v15,
         16LL,
         &v13,
         &v12);
  v7 = v3;
  if ( v3 >= 0 )
  {
    if ( v12 == 16 )
    {
      if ( (_DWORD)v14 == 4 )
      {
        LODWORD(v7) = HIDWORD(v13);
        return (unsigned int)v7;
      }
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      v10 = (int)v14;
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
