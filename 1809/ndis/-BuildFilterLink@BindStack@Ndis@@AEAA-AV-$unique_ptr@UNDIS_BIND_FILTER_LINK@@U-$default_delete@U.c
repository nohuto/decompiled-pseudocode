/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BF960
 * Callers:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C00BF898 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 * Callees:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C001A4EC (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00BFA08 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00C0424 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00EC5AC (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Ndis::BindStack::BuildFilterLink(
        void *a1,
        NDIS_BIND_LINK_BASE **a2,
        __int64 a3,
        int a4)
{
  volatile signed __int32 *v6; // rbx
  NDIS_BIND_LINK_BASE *v7; // rdi
  NDIS_BIND_LINK_BASE *v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetFilterDriver(&P, a3, 0LL);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(&v9);
    v7 = v9;
    if ( v9 )
    {
      if ( &v9[1] != (NDIS_BIND_LINK_BASE *)&P )
        KRef<NDIS_BIND_FILTER_DRIVER>::reset(&v9[1], v6);
      *(_DWORD *)&v7[1].BindState.AllowBindDespiteMandatory = a4;
      *a2 = v7;
    }
    else
    {
      *a2 = 0LL;
    }
    if ( _InterlockedExchangeAdd(v6 + 16, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
