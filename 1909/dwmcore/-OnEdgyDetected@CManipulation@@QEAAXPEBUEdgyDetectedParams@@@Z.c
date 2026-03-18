/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801E1488
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CGlobalInputManager@@CAJPEAXPEBXH@Z @ 0x180235FD0 (-s_OnReceiveInputThreadMessage@CGlobalInputManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A7828 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CManipulation::OnEdgyDetected(CManipulation *this, const struct EdgyDetectedParams *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-60h]
  _QWORD v10[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+80h] [rbp-18h]

  if ( CNotificationResource::ShouldNotify(this) )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(_OWORD *)(v3 + 16);
    v11[0] = *(_OWORD *)v3;
    v11[1] = v6;
    v12 = *(_QWORD *)(v3 + 48);
    v11[2] = *(_OWORD *)(v3 + 32);
    if ( v5 )
      v7 = *(unsigned int *)(v5 + 68);
    else
      v7 = 0LL;
    v10[0] = v7;
    v10[1] = *(unsigned int *)(v2 + 56);
    LOWORD(v8) = 0;
    CoreUICallSend(v4, v10, 2LL, 12LL, v8, &unk_1802B11A2, (unsigned int)v11, v9);
  }
}
