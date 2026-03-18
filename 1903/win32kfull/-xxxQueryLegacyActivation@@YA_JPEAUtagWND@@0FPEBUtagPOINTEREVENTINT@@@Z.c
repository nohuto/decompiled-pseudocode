/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01F2BDC
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     GetDPITransformationMonitor @ 0x1C01E6E50 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        __int64 *BugCheckParameter2,
        struct tagWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  HWND v11; // r8
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  unsigned __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2[2] + 424) + 112LL) )
    return 3LL;
  v7 = *(_QWORD *)(gptiCurrent + 756LL);
  v8 = *(_QWORD *)(gptiCurrent + 768LL);
  v19 = *(_DWORD *)(gptiCurrent + 764LL);
  *(_QWORD *)(gptiCurrent + 768LL) = *((_QWORD *)a4 + 5);
  v9 = BugCheckParameter2[5];
  v10 = *((_QWORD *)a4 + 5);
  v20 = v10;
  v18 = v7;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(v10, (__int64)BugCheckParameter2);
    PhysicalToLogicalDPIPoint(&v20, &v20, 0LL, &DPITransformationMonitor);
    LODWORD(v10) = v20;
  }
  *(_DWORD *)(gptiCurrent + 756LL) = v10;
  *(_DWORD *)(gptiCurrent + 760LL) = HIDWORD(v20);
  v11 = a2 ? *(HWND *)a2 : 0LL;
  _InterlockedAdd(&glSendMessage, 1u);
  v12 = xxxSendTransformableMessageTimeout(
          BugCheckParameter2,
          0x21u,
          v11,
          (struct _LARGE_STRING *)(a3 | 0x2460000LL),
          0,
          0,
          0LL,
          1u,
          1);
  v13 = v18;
  *(_QWORD *)(gptiCurrent + 768LL) = v8;
  v14 = v19;
  *(_QWORD *)(gptiCurrent + 756LL) = v13;
  *(_DWORD *)(gptiCurrent + 764LL) = v14;
  v15 = v12 - 3;
  result = 1LL;
  if ( v15 <= 1 )
    return 3LL;
  return result;
}
