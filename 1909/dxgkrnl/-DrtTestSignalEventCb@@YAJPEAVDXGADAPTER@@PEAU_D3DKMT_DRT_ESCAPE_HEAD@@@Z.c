/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0238C58
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C02247D0 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkSignalEventCB @ 0x1C022B0D0 (DxgkSignalEventCB.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned int HostProcess; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v16; // [rsp+38h] [rbp-40h]
  _QWORD v17[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_DWORD *)a2 + 1) >= 0x18u )
  {
    v17[2] = 0LL;
    Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
    if ( a1 )
    {
      if ( Current )
      {
        if ( *((_BYTE *)a1 + 185) )
        {
          v7 = *((_DWORD *)a1 + 1052);
          HostProcess = DXGPROCESS::GetHostProcess(Current);
          LODWORD(v16) = *((_DWORD *)a2 + 1);
          v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                 (struct DXGADAPTER *)((char *)a1 + 4144),
                 HostProcess,
                 v7,
                 0,
                 0,
                 D3DKMT_ESCAPE_DRT_TEST,
                 0,
                 v16,
                 (unsigned __int8 *)a2);
          v13 = v9;
          if ( v9 < 0 )
          {
            v14 = WdLogNewEntry5_WdError(v11, v10, v12);
            *(_QWORD *)(v14 + 24) = v13;
            WdLogEvent5_WdError(v14);
          }
          return (unsigned int)v13;
        }
        v17[0] = *((_QWORD *)Current + 9);
        if ( v17[0] )
        {
          v17[1] = *((_QWORD *)a2 + 2);
          LODWORD(v13) = DxgkSignalEventCB((__int64)v17, v5, v6);
          return (unsigned int)v13;
        }
      }
    }
  }
  return 3221225485LL;
}
