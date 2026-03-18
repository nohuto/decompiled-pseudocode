/*
 * XREFs of ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074558
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x1800D8AA0 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetPresentStatistics(
        CRenderTargetManager *this,
        unsigned int *a2,
        bool *a3,
        struct DXGI_FRAME_STATISTICS_DWM *a4,
        struct _UNSIGNED_RATIO *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r15
  struct DXGI_FRAME_STATISTICS_DWM *v8; // rbp
  _QWORD *v11; // r14
  char v12; // bl
  signed int v13; // eax
  bool *v14; // rcx
  int v15; // ebp
  __int64 result; // rax
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  signed int v18; // eax
  __int64 v19; // rcx
  int v20; // ebx

  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  *a3 = 0;
  v8 = a4;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_30;
  do
  {
    if ( (unsigned int)v5 >= *a2 )
      break;
    v11 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v7);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 80LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v11 + 248LL))(v11) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 256LL))(v11);
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, struct _UNSIGNED_RATIO *))(v11[8] + 112LL))(
              v11 + 8,
              (__int64)v8 + 32 * (unsigned int)v5,
              &a5[v5]);
      v15 = v13;
      if ( v12 )
      {
        v14 = a3;
        *a3 = v13 == 142213121;
      }
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, &dword_1802BE438, 2u, v13, 0x3BEu, 0LL);
      if ( !v6 || v6 >= 0 && v15 < 0 )
        v6 = v15;
      v8 = a4;
      v5 = (unsigned int)(v5 + 1);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < *((_DWORD *)this + 12) );
  if ( !(_DWORD)v5 )
  {
LABEL_30:
    if ( *a2 )
    {
      PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
      if ( PrimaryRenderTargetNoRef )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*((_QWORD *)PrimaryRenderTargetNoRef + 8) + 112LL))(
                (__int64)PrimaryRenderTargetNoRef + 64,
                v8,
                a5);
        v20 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802BE438, 2u, v18, 0x3CBu, 0LL);
        if ( !v6 || v6 >= 0 && v20 < 0 )
          v6 = v20;
        LODWORD(v5) = 1;
      }
    }
  }
  result = (unsigned int)v6;
  *a2 = v5;
  return result;
}
