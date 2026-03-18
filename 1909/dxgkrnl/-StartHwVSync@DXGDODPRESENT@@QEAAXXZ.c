/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C027E8D0
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015A5A8 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C013C374 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v5 = *((_DWORD *)this + 32);
  v13 = 2;
  if ( v5 < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v6 + 24) = 3944LL;
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 32);
  }
  v7 = v5 + 1;
  *((_DWORD *)this + 32) = v7;
  if ( v7 == 1 )
  {
    LOBYTE(v4) = 1;
    if ( (int)DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)this[11] + 2), DXGK_INTERRUPT_DISPLAYONLY_VSYNC, v4) < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 3951LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
