/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0275270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C02719B4 (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271A10 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0272C94 (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C02754A8 (DxgkDestroyOutputDuplInternal.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  int v9; // eax
  int v10; // ebx
  const GUID *v11; // r8
  int v12; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v13; // rax
  int v14; // ebx
  const GUID *v15; // r8
  _DWORD *v16; // rdx
  int v17; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v18[4]; // [rsp+28h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v19; // [rsp+38h] [rbp-40h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v6);
    *(_QWORD *)(v7 + 24) = 3471LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( (g_OutputDuplicationTestControl & 2) != 0 )
    v9 = 1;
  else
    v9 = (*(__int64 (**)(void))(*((_QWORD *)Current + 12) + 216LL))();
  v10 = (v9 != 0 ? 4 : 0) | (8 * (g_OutputDuplicationTestControl & 1));
  v17 = v10;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v12 = v10 | 2;
      v17 = v12;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v17 = v12 | 8;
      }
    }
  }
  v13 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v19 = *v13;
  v14 = DxgkCreateOutputDuplInternal(&v19, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v17, v11);
  if ( v14 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 208LL))() )
    {
      v14 = -1073741790;
LABEL_19:
      v18[0] = v19.hAdapter;
      v18[1] = v19.VidPnSourceId;
      v18[2] = 0;
      DxgkDestroyOutputDuplInternal(v18, 1LL);
      goto LABEL_20;
    }
    v17 |= 1u;
    v14 = DxgkCreateOutputDuplInternal(&v19, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v17, v15);
    if ( v14 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  if ( v14 >= 0 )
  {
    v16 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = v19.RequiredKeyedMutexCount;
  }
  return (unsigned int)v14;
}
