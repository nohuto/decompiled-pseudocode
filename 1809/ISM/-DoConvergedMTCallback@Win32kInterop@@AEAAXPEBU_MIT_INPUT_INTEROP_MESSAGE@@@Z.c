/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800822EC (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_K0KK@Z @ 0x180081568 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800817C4 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800838E4 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x180084654 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z.c)
 *     ?InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x1800846C8 (-InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  unsigned int v2; // edi
  const struct _MIT_INPUT_INTEROP_MESSAGE *v3; // r10
  char *v5; // rbx
  char *v6; // rdx
  char *v7; // [rsp+20h] [rbp-E0h] BYREF
  const struct _MIT_INPUT_INTEROP_MESSAGE *v8; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall **v10)(); // [rsp+48h] [rbp-B8h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall ***v12)(); // [rsp+80h] [rbp-80h]
  _QWORD v13[9]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v14[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v15; // [rsp+E8h] [rbp-18h]
  __int64 v16; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  unsigned int v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+2D0h] [rbp+1D0h]

  v2 = 0;
  v8 = a2;
  v3 = a2;
  if ( !*(_DWORD *)a2 )
  {
    InputTraceLogging::ISM::ReceivePointerFrame(
      *((_QWORD *)a2 + 13),
      *((_QWORD *)a2 + 1),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 5));
    v3 = v8;
  }
  if ( *(_DWORD *)v3 || *((_DWORD *)v3 + 6) == 4 || ((1LL << gdwDeviceFamily) & 0x1C000) == 0 )
  {
    ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v3, 0LL);
  }
  else
  {
    v5 = (char *)v3 + 8;
    v7 = (char *)v3 + 8;
    memset_0(v14, 0, 0x640uLL);
    v15 = 1600;
    InitializeInputInfoWithPointerInfo((const struct tagPOINTER_INFO_UNION *)(v5 + 16), (struct InputInfo *)v14);
    v6 = v7;
    v17 = *((_QWORD *)v7 + 27);
    v18 = *((_DWORD *)v7 + 3);
    v19 = *((_DWORD *)v7 + 2);
    v16 = *(_QWORD *)v7;
    if ( v18 )
    {
      while ( 1 )
      {
        InitializeInputInfoPointerWithPointerInfo(
          v2,
          (const struct tagPOINTER_INFO_UNION *)&v6[224 * v2 + 16],
          (struct InputInfo *)v14);
        if ( ++v2 >= v18 )
          break;
        v6 = v7;
      }
    }
    *(_QWORD *)&v9 = &v7;
    *((_QWORD *)&v9 + 1) = &v8;
    InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)v14);
    v10 = off_18013C9F0;
    v12 = &v10;
    v13[0] = off_18013C968;
    v13[1] = &v7;
    v13[7] = v13;
    v11 = v9;
    Win32kInterop::DeliverToContextualProcessing((__int64)this, (__int64)v14, (__int64)v13, (__int64)&v10);
  }
}
