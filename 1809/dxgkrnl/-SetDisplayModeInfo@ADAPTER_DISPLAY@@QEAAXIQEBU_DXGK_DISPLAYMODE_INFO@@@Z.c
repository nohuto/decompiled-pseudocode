/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0013450
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq @ 0x1C0013308 (McTemplateK0pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0248E88 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  PERESOURCE *v9; // rax
  __int64 v10; // rdi
  PERESOURCE *v11; // rcx
  int v12; // eax
  PERESOURCE *v13; // rcx
  int v14; // eax
  DXGDODPRESENT *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+50h] [rbp-38h]
  int v26; // [rsp+58h] [rbp-30h]
  int v27; // [rsp+60h] [rbp-28h]
  int v28; // [rsp+68h] [rbp-20h]
  int v29; // [rsp+70h] [rbp-18h]
  int v30; // [rsp+78h] [rbp-10h]

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 5124LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v18 + 24) = 5125LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = this[14];
  v10 = 470 * v4;
  *(_OWORD *)((char *)&v9[v10 + 126] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v9[v10 + 128] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v9[v10 + 130] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v9[v10 + 132] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v11 = this[14];
  v12 = HIDWORD(v11[470 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v11[v10 + 79]) = *(_DWORD *)a3 + v12;
    v13 = this[14];
    v14 = *((_DWORD *)a3 + 1) + LODWORD(v13[v10 + 79]);
  }
  else
  {
    HIDWORD(v11[v10 + 79]) = *((_DWORD *)a3 + 1) + v12;
    v13 = this[14];
    v14 = *(_DWORD *)a3 + LODWORD(v13[v10 + 79]);
  }
  LODWORD(v13[v10 + 80]) = v14;
  v15 = (DXGDODPRESENT *)this[33];
  if ( v15 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v15, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v10 + 126] + 4));
  v16 = bTracingEnabled == 0;
  LODWORD(this[14][v10 + 138]) = -1;
  HIDWORD(this[14][v10 + 138]) = -1;
  if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
  {
    v30 = *((_DWORD *)a3 + 12);
    v29 = *((_DWORD *)a3 + 11);
    v28 = *((_BYTE *)a3 + 36) & 1;
    v27 = *((_DWORD *)a3 + 8);
    v26 = *((_DWORD *)a3 + 7);
    v25 = *((_DWORD *)a3 + 6);
    v24 = *((_DWORD *)a3 + 5);
    v23 = *((_DWORD *)a3 + 4);
    v22 = *((_DWORD *)a3 + 2);
    v21 = *((_DWORD *)a3 + 1);
    v20 = *(_DWORD *)a3;
    v19 = v4;
    McTemplateK0pqqqqqqqqqqqq(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v8,
      this,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}
