/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016A4C0
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0116040 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ValidateHwndEx @ 0x1C0026630 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ValidateHbwnd @ 0x1C01035E0 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0167B70 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C0174BF0 (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C019CE54 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C019D718 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  CTouchProcessor *v5; // rbp
  __int64 v6; // rdi
  __int16 v7; // bx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 ThreadPointerData; // r14
  HWND v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 *v15; // rbx
  __int64 v16; // rdx
  unsigned int PointerDataQPCTimeList; // ebp
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  unsigned __int64 v22[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v23 = (HWND)this;
  v5 = gpTouchProcessor;
  v6 = a4;
  v7 = a3;
  if ( (_WORD)a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v5,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        v7,
                        0LL,
                        0LL,
                        &v23);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v9, 7, 316, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids, v7);
    }
LABEL_25:
    v13 = 87LL;
LABEL_14:
    UserSetLastError(v13, v9);
    return 0LL;
  }
  v12 = v23;
  if ( !ValidateHbwnd((unsigned __int64)v23, v9, v10) && !ValidateHwndEx((__int64)v12, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 7, 317, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    goto LABEL_25;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 4, 318, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    v13 = 232LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v15 = v22;
  }
  else
  {
    v15 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v6, 2020176725LL);
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_L(v20, v9, 7, 319, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids, v6);
      }
      goto LABEL_25;
    }
  }
  v24 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(v5, ThreadPointerData, v6, v15, &v24);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 320, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
      v19 = 232LL;
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 321;
LABEL_31:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, v21, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v12, v6, (_DWORD)v15, v18, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 322;
      goto LABEL_31;
    }
LABEL_32:
    v19 = 87LL;
LABEL_33:
    UserSetLastError(v19, v16);
  }
  if ( v15 != v22 )
    Win32FreePool((__int64)v15);
  return PointerDataQPCTimeList;
}
