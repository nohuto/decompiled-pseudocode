/*
 * XREFs of ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z @ 0x1C02327D8
 * Callers:
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C025C8D0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int *a2,
        void **a3)
{
  __int64 v3; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  signed __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  void *v18; // [rsp+48h] [rbp-28h]
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 1);
  v15 = 24;
  v18 = 0LL;
  v19[0] = 0xC0000001706D6F63uLL;
  v16 = 0xC0000001706D6F63uLL;
  v19[1] = 1LL;
  v17 = 2LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, signed __int64 *, unsigned int *))(*(_QWORD *)v3 + 32LL))(
         v3,
         v19,
         16LL,
         &v16,
         &v15);
  v10 = v6;
  if ( v6 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  if ( v15 != 24 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = v15;
LABEL_5:
    *(_QWORD *)(v12 + 24) = v13;
    *(_QWORD *)(v12 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v12);
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  if ( (_DWORD)v17 != 2 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = (int)v17;
    goto LABEL_5;
  }
  LODWORD(v10) = HIDWORD(v16);
  if ( v16 >= 0 )
  {
    *a2 = HIDWORD(v17);
    *a3 = v18;
  }
  return (unsigned int)v10;
}
