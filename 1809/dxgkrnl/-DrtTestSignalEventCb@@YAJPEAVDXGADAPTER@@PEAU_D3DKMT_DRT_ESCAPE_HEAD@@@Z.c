/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0206C1C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01F4430 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkSignalEventCB @ 0x1C01FA8F0 (DxgkSignalEventCB.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  UINT v5; // ebx
  UINT HostProcess; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  if ( *((_DWORD *)a2 + 1) >= 0x18u )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    if ( a1 )
    {
      if ( Current )
      {
        if ( *((_BYTE *)a1 + 185) )
        {
          v5 = *((_DWORD *)a1 + 1054);
          HostProcess = DXGPROCESS::GetHostProcess(Current);
          LODWORD(v12) = *((_DWORD *)a2 + 1);
          v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                 (struct DXGADAPTER *)((char *)a1 + 4152),
                 HostProcess,
                 v5,
                 0,
                 0,
                 D3DKMT_ESCAPE_DRT_TEST,
                 0,
                 v12,
                 (unsigned __int8 *)a2);
          v9 = v7;
          if ( v7 < 0 )
          {
            v10 = WdLogNewEntry5_WdError(v8);
            *(_QWORD *)(v10 + 24) = v9;
            WdLogEvent5_WdError(v10);
          }
          return (unsigned int)v9;
        }
        v13 = *((_QWORD *)Current + 9);
        if ( v13 )
        {
          v14 = *((_QWORD *)a2 + 2);
          LODWORD(v9) = DxgkSignalEventCB((__int64)&v13);
          return (unsigned int)v9;
        }
      }
    }
  }
  return 3221225485LL;
}
