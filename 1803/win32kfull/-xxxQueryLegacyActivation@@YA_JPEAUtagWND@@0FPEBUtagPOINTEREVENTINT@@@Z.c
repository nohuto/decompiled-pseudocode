/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BA1F4
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        __int64 *BugCheckParameter2,
        HWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 result; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  HWND v13; // r8
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  bool v16; // cc
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[2] + 424) + 104LL) )
    return 3LL;
  v8 = *(_QWORD *)(gptiCurrent + 748LL);
  v9 = *(_QWORD *)(gptiCurrent + 760LL);
  v10 = *(_DWORD *)(gptiCurrent + 756LL);
  *(_QWORD *)(gptiCurrent + 760LL) = *((_QWORD *)a4 + 5);
  v11 = BugCheckParameter2[5];
  v12 = *((_QWORD *)a4 + 5);
  v19 = v12;
  v18 = v8;
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(v12, (__int64)BugCheckParameter2);
    PhysicalToLogicalDPIPoint(&v19, &v19, 0LL, &DPITransformationMonitor);
    LODWORD(v12) = v19;
  }
  *(_DWORD *)(gptiCurrent + 748LL) = v12;
  *(_DWORD *)(gptiCurrent + 752LL) = HIDWORD(v19);
  if ( a2 )
    v13 = *a2;
  else
    v13 = 0LL;
  _InterlockedAdd(&glSendMessage, 1u);
  v14 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x21u, v13, a3 | 0x2460000LL, 0, 0, 0LL, 1, 1);
  v15 = v18;
  *(_QWORD *)(gptiCurrent + 760LL) = v9;
  v16 = (unsigned __int64)(v14 - 3) <= 1;
  result = 3LL;
  if ( !v16 )
    result = 1LL;
  *(_QWORD *)(gptiCurrent + 748LL) = v15;
  *(_DWORD *)(gptiCurrent + 756LL) = v10;
  return result;
}
