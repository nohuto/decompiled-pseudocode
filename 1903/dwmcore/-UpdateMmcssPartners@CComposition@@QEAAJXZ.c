/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800D08CC
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180098680 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800D07FC (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // edi
  signed int v8; // eax
  __int64 v9; // rcx
  int v10; // edi

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x309u, 0LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x30Bu, 0LL);
  if ( !v4 || v4 >= 0 && v7 < 0 )
    v4 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9));
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x30Du, 0LL);
  if ( !v4 || v4 >= 0 && v10 < 0 )
    return (unsigned int)v10;
  return (unsigned int)v4;
}
