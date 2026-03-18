/*
 * XREFs of ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0132600
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01326A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rbx
  DMMVIDPNPRESENTPATH *v5; // rcx
  int v6; // r10d
  char *v7; // rdx
  DMMVIDPNTOPOLOGY *v8; // r9
  char *v9; // r9
  char *v10; // rax
  _QWORD *v12; // rax

  v3 = a2;
  v5 = 0LL;
  v6 = 32;
  v7 = (char *)this + 24;
  v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v8 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v9 = (char *)v8 - 8;
    if ( v9 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v9 + 11) + 24LL) == (_DWORD)v3 && *((_DWORD *)v9 + 26) < v6 )
        {
          v5 = (DMMVIDPNPRESENTPATH *)v9;
          v6 = *((_DWORD *)v9 + 26);
        }
        v10 = (char *)*((_QWORD *)v9 + 1);
        v9 = v10 - 8;
        if ( v10 == v7 )
          v9 = 0LL;
      }
      while ( v9 );
      if ( v5 )
        return DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v5, a3);
    }
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdError(v5, v7, a3);
  v12[3] = v3;
  v12[5] = -1071774919LL;
  v12[4] = this;
  WdLogEvent5_WdError(v12);
  return 3223192377LL;
}
