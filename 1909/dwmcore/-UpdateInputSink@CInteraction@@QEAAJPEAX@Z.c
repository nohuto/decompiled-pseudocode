/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800AC894
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800ABE50 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800AC82C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800AC920 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800ACB20 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800ACB70 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rsi
  void *v4; // rdi
  CInputSinkStruct *v5; // rax
  CInputSinkStruct *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 96);
  v4 = a2;
  if ( !a2 )
  {
    SAFE_DELETE<CInputSinkStruct>((char *)this + 96);
    goto LABEL_8;
  }
  v5 = *v3;
  if ( *v3 )
    goto LABEL_5;
  v6 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v7);
  v5 = CInputSinkStruct::CInputSinkStruct(v6);
  *v3 = v5;
  if ( v5 )
  {
LABEL_5:
    v9 = CInputSinkStruct::ReplaceInputHandle(v5, v4);
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2FFu, 0LL);
    v4 = 0LL;
LABEL_8:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_13;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x2FBu, 0LL);
LABEL_13:
  if ( v4 )
    NtCloseCompositionInputSink(v4);
  SAFE_DELETE<CInputSinkStruct>(v3);
  return (unsigned int)v2;
}
