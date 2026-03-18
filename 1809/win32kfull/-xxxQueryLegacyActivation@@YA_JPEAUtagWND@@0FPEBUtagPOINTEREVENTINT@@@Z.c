/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01DCF38
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     GetDPITransformationMonitor @ 0x1C01D2240 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        __int64 *BugCheckParameter2,
        struct tagWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[2] + 432) + 104LL) )
    return 3LL;
  v7 = *(_QWORD *)(gptiCurrent + 764LL);
  v8 = *(_QWORD *)(gptiCurrent + 776LL);
  v9 = *(_DWORD *)(gptiCurrent + 772LL);
  *(_QWORD *)(gptiCurrent + 776LL) = *((_QWORD *)a4 + 5);
  v10 = BugCheckParameter2[5];
  v11 = *((_QWORD *)a4 + 5);
  v19 = v11;
  v18 = v7;
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(v11, (__int64)BugCheckParameter2);
    PhysicalToLogicalDPIPoint(&v19, &v19, 0LL, &DPITransformationMonitor);
    LODWORD(v11) = v19;
  }
  *(_DWORD *)(gptiCurrent + 764LL) = v11;
  *(_DWORD *)(gptiCurrent + 768LL) = HIDWORD(v19);
  v12 = a2 ? *(_QWORD *)a2 : 0LL;
  _InterlockedAdd(&glSendMessage, 1u);
  v13 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x21u, v12, a3 | 0x2460000LL, 0, 0, 0LL, 1, 1);
  v14 = v18;
  *(_QWORD *)(gptiCurrent + 776LL) = v8;
  v15 = v13 - 3;
  result = 1LL;
  *(_QWORD *)(gptiCurrent + 764LL) = v14;
  *(_DWORD *)(gptiCurrent + 772LL) = v9;
  if ( v15 <= 1 )
    return 3LL;
  return result;
}
