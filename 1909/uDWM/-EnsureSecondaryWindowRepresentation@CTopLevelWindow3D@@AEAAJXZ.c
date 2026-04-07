/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18000D82C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000CA3C (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800110E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  void *v4; // [rsp+20h] [rbp-18h]
  void *v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( !*((_QWORD *)this + 42) )
  {
    LODWORD(v4) = 100;
    v2 = CSecondaryWindowRepresentation::Create(
           160,
           (int)this + 280,
           *((_QWORD *)this + 41),
           0,
           v4,
           (__int64)this + 336);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x285u, v5);
  }
  return v1;
}
