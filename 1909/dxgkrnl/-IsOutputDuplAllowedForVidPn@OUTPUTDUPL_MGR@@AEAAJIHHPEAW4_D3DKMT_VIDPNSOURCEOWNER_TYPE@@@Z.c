/*
 * XREFs of ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C0273444
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271C2C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
        OUTPUTDUPL_MGR *this,
        unsigned int a2,
        int a3,
        int a4,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE VidPnSourceOwnerType; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v13; // rax

  if ( a3 || (v6 = *(_QWORD *)this) == 0 )
  {
    *a5 = D3DKMT_VIDPNSOURCEOWNER_SHARED;
  }
  else
  {
    v7 = a2;
    v8 = *(_DWORD *)(3968LL * a2 + *(_QWORD *)(v6 + 112) + 700);
    VidPnSourceOwnerType = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v6, a2);
    v11 = VidPnSourceOwnerType;
    *a5 = VidPnSourceOwnerType;
    if ( a4 )
    {
      if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED )
        return 3223192387LL;
    }
    else if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED && (v8 & 1) == 0 )
    {
      v13 = WdLogNewEntry5_WdTrace(a5, v10);
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 32) = v11;
      return 3221225506LL;
    }
  }
  return 0LL;
}
