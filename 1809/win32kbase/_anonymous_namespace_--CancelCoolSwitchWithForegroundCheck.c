/*
 * XREFs of _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C006FC8C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00313C0 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 */

char __fastcall anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(char a1, char a2, __int64 *a3)
{
  char v5; // bl
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v11) = a1;
  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x14u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v11 = 0;
  if ( (int)IsEditionCancelCoolSwitchSupported() >= 0 )
    EditionCancelCoolSwitch(&v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x15u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( !v11 )
    return 1;
  if ( a2 )
    return 1;
  v8 = *((_DWORD *)a3 + 2);
  v9 = *a3;
  v10 = v8;
  if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v9, v6, 0) )
    return 1;
  return v5;
}
