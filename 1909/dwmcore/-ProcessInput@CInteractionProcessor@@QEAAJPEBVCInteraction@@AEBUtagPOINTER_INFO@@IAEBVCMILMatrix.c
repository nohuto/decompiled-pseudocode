/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180230A4C
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801D5F70 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x18023BDE0 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800A9C54 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022DAF8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18023097C (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x180231B38 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct CInteraction *a2,
        const struct tagPOINTER_INFO *a3,
        int a4,
        const struct CMILMatrix *a5,
        struct IManipulationResource *a6,
        bool *a7)
{
  int v10; // edx
  __int64 v11; // r10
  unsigned int started; // esi
  __int64 v13; // rdx
  __int64 v14; // r10
  void *v15; // r11
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  __int64 v30; // [rsp+30h] [rbp-A1h] BYREF
  CInteractionProcessor *v31; // [rsp+38h] [rbp-99h] BYREF
  __int64 v32; // [rsp+40h] [rbp-91h] BYREF
  __int64 v33; // [rsp+48h] [rbp-89h] BYREF
  __int64 v34; // [rsp+50h] [rbp-81h] BYREF
  __int64 v35; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-71h] BYREF
  __int64 *v37; // [rsp+80h] [rbp-51h]
  int v38; // [rsp+88h] [rbp-49h]
  int v39; // [rsp+8Ch] [rbp-45h]
  CInteractionProcessor **v40; // [rsp+90h] [rbp-41h]
  int v41; // [rsp+98h] [rbp-39h]
  int v42; // [rsp+9Ch] [rbp-35h]
  __int64 *v43; // [rsp+A0h] [rbp-31h]
  int v44; // [rsp+A8h] [rbp-29h]
  int v45; // [rsp+ACh] [rbp-25h]
  __int64 *v46; // [rsp+B0h] [rbp-21h]
  int v47; // [rsp+B8h] [rbp-19h]
  int v48; // [rsp+BCh] [rbp-15h]
  __int64 *v49; // [rsp+C0h] [rbp-11h]
  int v50; // [rsp+C8h] [rbp-9h]
  int v51; // [rsp+CCh] [rbp-5h]
  __int64 *v52; // [rsp+D0h] [rbp-1h]
  int v53; // [rsp+D8h] [rbp+7h]
  int v54; // [rsp+DCh] [rbp+Bh]

  if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v37 = &v30;
    v40 = &v31;
    v32 = *(_QWORD *)this;
    v43 = &v32;
    v33 = *((_QWORD *)this + 20);
    v46 = &v33;
    v34 = *((_QWORD *)this + 40);
    v49 = &v34;
    v35 = *((_QWORD *)this + 60);
    v52 = &v35;
    v30 = v11;
    v38 = v10 + 6;
    v31 = this;
    v41 = v10 + 6;
    v44 = v10 + 6;
    v47 = v10 + 6;
    v50 = v10 + 6;
    v53 = v10 + 6;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DCBE6, 0LL, 0LL, v10 + 6, &pData);
  }
  started = 0;
  *a7 = 0;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
  *((_DWORD *)this + 198) = a4;
  *((_QWORD *)this + 100) = *((_QWORD *)a3 + 2);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 210, (float *)a5) )
  {
    *(_OWORD *)v14 = *(_OWORD *)v13;
    *(_OWORD *)(v14 + 16) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v14 + 32) = *(_OWORD *)(v13 + 32);
    *(_OWORD *)(v14 + 48) = *(_OWORD *)(v13 + 48);
    *(_DWORD *)(v14 + 64) = *(_DWORD *)(v13 + 64);
    anonymous_namespace_::DecomposeMatrix(
      v14,
      v15,
      (__int64)this + 908,
      (__int64)this + 976,
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v16 = *((_DWORD *)this + 243);
    v17 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v18 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v17;
    v19 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v18;
    *(_OWORD *)((char *)this + 1228) = v19;
    *((_DWORD *)this + 311) = v16;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v20, v21) )
    {
      v23 = *((_DWORD *)this + 243);
      v24 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v22 = *(_OWORD *)((char *)this + 908);
      v25 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v22 + 16) = v24;
      v26 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v22 + 32) = v25;
      *(_OWORD *)(v22 + 48) = v26;
      *(_DWORD *)(v22 + 64) = v23;
    }
    *a7 = 1;
  }
  if ( !*((_DWORD *)this + 196) )
  {
    v27 = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0LL, a6, v27);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (int *)this + 196,
                               (__int64)a3,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
  }
  return started;
}
