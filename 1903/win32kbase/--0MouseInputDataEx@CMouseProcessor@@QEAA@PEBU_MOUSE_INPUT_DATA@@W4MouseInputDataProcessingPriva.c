/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00428FC
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0030FB4 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01900B8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01901BC (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0190260 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C00429AC (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C008A928 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  int v11; // [rsp+30h] [rbp-78h] BYREF
  __int128 v12; // [rsp+38h] [rbp-70h]
  __int128 v13; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+70h] [rbp-38h] BYREF

  v11 = 0;
  v12 = 0LL;
  v8 = CMouseProcessor::EventTime::Now(&v15);
  v9 = *(_QWORD *)(v8 + 16);
  v13 = *(_OWORD *)v8;
  *((_QWORD *)&v12 + 1) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v14 = v9;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(a1, a2, &v13, a4, &v11, 0LL);
  *(_DWORD *)(a1 + 88) = a3;
  return a1;
}
