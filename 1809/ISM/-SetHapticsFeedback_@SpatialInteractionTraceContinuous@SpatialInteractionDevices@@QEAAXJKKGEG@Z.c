/*
 * XREFs of ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x18012320C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___ @ 0x18012865C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--_ScopeExitFn__lambda_f890.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800AE148 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SetHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  int *v9; // [rsp+58h] [rbp-31h]
  __int64 v10; // [rsp+60h] [rbp-29h]
  int *v11; // [rsp+68h] [rbp-21h]
  __int64 v12; // [rsp+70h] [rbp-19h]
  int *v13; // [rsp+78h] [rbp-11h]
  __int64 v14; // [rsp+80h] [rbp-9h]
  char *v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  char *v17; // [rsp+98h] [rbp+Fh]
  __int64 v18; // [rsp+A0h] [rbp+17h]
  char *v19; // [rsp+A8h] [rbp+1Fh]
  __int64 v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+E0h] [rbp+57h] BYREF
  int v22; // [rsp+E8h] [rbp+5Fh] BYREF
  int v23; // [rsp+F0h] [rbp+67h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v7 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v10 = 4LL;
    v9 = &v21;
    v11 = &v22;
    v13 = &v23;
    v15 = &a5;
    v17 = &a6;
    v19 = &a7;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 2LL;
    v18 = 1LL;
    v20 = 2LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18016DF4F, 0LL, 0LL, 8u, &pData);
  }
}
