/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801A6C40
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A5740 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801928F4 (--1-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z @ 0x1801ECA54 (-ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned __int8 v5; // cl
  char v6; // al
  char v7; // cl
  int ManipulationManager; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      v4 = -2147024809;
      v12 = 1026;
LABEL_4:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, v12);
      goto LABEL_14;
    }
    v5 = *((_BYTE *)this + 440);
    v6 = v5 | 2;
    v7 = v5 >> 1;
  }
  else
  {
    v7 = *((_BYTE *)this + 440);
    v6 = v7 | 1;
  }
  *((_BYTE *)this + 440) = v6;
  if ( (v7 & 1) != 0 )
    goto LABEL_13;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &v13);
  v4 = ManipulationManager;
  if ( ManipulationManager >= 0 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v4 = CManipulationManager::ScheduleDeferredWorkOnRenderThread(v13, v10, this);
    if ( v4 < 0 )
    {
      (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 16LL))(this);
      v12 = 1045;
      goto LABEL_4;
    }
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, ManipulationManager, 0x407u);
LABEL_14:
  Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>((__int64 *)&v13);
  return (unsigned int)v4;
}
