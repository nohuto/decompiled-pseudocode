/*
 * XREFs of ndisMIndicateWoLPatternReject @ 0x1C0073600
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C0035178 (ndisGetCombinedPMConfig.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C00775C0 (ndisUpdateWmiPMParamsForPatterns.c)
 */

void __fastcall ndisMIndicateWoLPatternReject(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v5; // edx
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  void **v13; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v5 = **(_DWORD **)(a2 + 48);
    v6 = *(_BYTE *)(a1 + 32);
    if ( v6 > 6u || v6 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
      v7 = 968LL;
    else
      v7 = 960LL;
    v8 = (__int64 **)(v7 + a1);
    v9 = *v8;
    if ( *v8 )
    {
      do
      {
        v10 = v9;
        if ( *((_DWORD *)v9 + 10) == v5 )
          break;
        v8 = (__int64 **)v9;
        v10 = 0LL;
        v9 = (__int64 *)*v9;
      }
      while ( v9 );
      if ( v10 )
      {
        *v8 = (__int64 *)*v9;
        *(_DWORD *)(a2 + 96) = 0;
        v11 = v10 + 1;
        if ( v11 )
        {
          do
          {
            v12 = v11;
            v11 = (_QWORD *)*v11;
            v13 = (void **)(v12 - 1);
            if ( v13[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v13, 0);
            ++*(_DWORD *)(a2 + 96);
          }
          while ( v11 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForPatterns(a1);
            ndisGetCombinedPMConfig(a1, a1 + 1120);
          }
        }
      }
    }
  }
}
