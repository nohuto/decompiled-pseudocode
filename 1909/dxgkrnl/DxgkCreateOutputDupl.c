/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0275990
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C02720DC (-DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0272138 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C02733BC (-IsInLowBox@@YAHXZ.c)
 *     DxgkDestroyOutputDuplInternal @ 0x1C0275C08 (DxgkDestroyOutputDuplInternal.c)
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
  __int64 v11; // rdx
  int v12; // ebx
  _D3DKMT_CREATE_OUTPUTDUPL *v13; // rax
  struct DXGGLOBAL *Global; // rax
  const GUID *v15; // r8
  int v16; // ebx
  const GUID *v17; // r8
  _DWORD *v18; // rdx
  int v19; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v21[4]; // [rsp+38h] [rbp-50h] BYREF
  _D3DKMT_CREATE_OUTPUTDUPL v22; // [rsp+48h] [rbp-40h] BYREF

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
  v19 = v10;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
  {
    if ( (unsigned int)IsInLowBox() )
    {
      v12 = v10 | 2;
      v19 = v12;
      if ( !DoesLowBoxAppHaveOutputDuplCapability() )
      {
        if ( !g_OSTestSigningEnabled || (g_OutputDuplicationTestControl & 1) == 0 )
          return 3221225506LL;
        v19 = v12 | 8;
      }
    }
  }
  v13 = (_D3DKMT_CREATE_OUTPUTDUPL *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATE_OUTPUTDUPL *)MmUserProbeAddress;
  v22 = *v13;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v11);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGGLOBAL *)((char *)Global + 304160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v16 = DxgkCreateOutputDuplInternal(&v22, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v19, v15);
  if ( v16 >= 0 )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 208LL))() )
    {
      v16 = -1073741790;
LABEL_19:
      v21[0] = v22.hAdapter;
      v21[1] = v22.VidPnSourceId;
      v21[2] = 0;
      DxgkDestroyOutputDuplInternal(v21, 1LL);
      goto LABEL_20;
    }
    v19 |= 1u;
    v16 = DxgkCreateOutputDuplInternal(&v22, (struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *)&v19, v17);
    if ( v16 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  if ( v16 >= 0 )
  {
    v18 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = v22.RequiredKeyedMutexCount;
  }
  return (unsigned int)v16;
}
