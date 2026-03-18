/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C00EF660 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ValidateHbwnd @ 0x1C00E0270 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C013B8C0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C0163D9C (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C0164240 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  __int64 *Blink; // rdi
  __int64 v6; // rsi
  unsigned __int16 v7; // bx
  __int64 ThreadPointerData; // r14
  __int64 v10; // rcx
  HWND v12; // rbp
  unsigned __int64 *v13; // rbx
  int v14; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int16 v19; // r9
  HWND *v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF

  v22 = (HWND)this;
  Blink = (__int64 *)WPP_MAIN_CB.Queue.ListEntry.Blink;
  v6 = a4;
  v7 = a3;
  if ( (_WORD)a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)Blink,
                        (struct tagTHREADINFO *)((char *)a2 + 1080),
                        v7,
                        0LL,
                        0LL,
                        &v22);
  if ( !ThreadPointerData )
  {
    LODWORD(v20) = v7;
    WPP_RECORDER_SF_d(Blink[1], 2u, 0xBu, 0x138u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, v20);
LABEL_5:
    v10 = 87LL;
LABEL_6:
    UserSetLastError(v10);
    return 0LL;
  }
  v12 = v22;
  if ( !ValidateHbwnd((unsigned __int64)v22) && !ValidateHwndEx(v12, 1, 0) )
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 0xBu, 0x139u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_5;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v12) )
  {
    WPP_RECORDER_SF_(Blink[1], 2u, 4u, 0x13Au, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v10 = 232LL;
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v13 = v21;
  }
  else
  {
    v13 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v6, 0x78697355u);
    if ( !v13 )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_L(Blink[1], v18, 11, 315, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids, v6);
      goto LABEL_5;
    }
  }
  v23 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (CTouchProcessor *)Blink,
                             ThreadPointerData,
                             v6,
                             v13,
                             &v23);
  if ( !PointerDataQPCTimeList )
  {
    v16 = Blink[1];
    if ( !v23 )
    {
      WPP_RECORDER_SF_(v16, 2u, 0xBu, 0x13Cu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v17 = 232LL;
LABEL_23:
      UserSetLastError(v17);
      goto LABEL_24;
    }
    v19 = 317;
LABEL_22:
    WPP_RECORDER_SF_(v16, 2u, 0xBu, v19, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v17 = 87LL;
    goto LABEL_23;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v12, v6, (_DWORD)v13, v14, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    v16 = Blink[1];
    v19 = 318;
    goto LABEL_22;
  }
LABEL_24:
  if ( v13 != v21 )
    Win32FreePool((__int64)v13);
  return PointerDataQPCTimeList;
}
