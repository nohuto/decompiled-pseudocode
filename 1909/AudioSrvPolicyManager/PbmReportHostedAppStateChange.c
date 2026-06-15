/*
 * XREFs of PbmReportHostedAppStateChange @ 0x180020430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001ECCC (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002326C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(
        void *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        PickerHostContextManager **a5)
{
  PickerHostContextManager **v5; // rbx
  __int64 result; // rax
  int v10; // ecx
  unsigned int v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( !a5 )
    return 2147942487LL;
  v10 = RpcClientProcessSessionId(a1, v11, (unsigned int *)&a5);
  if ( !v10 )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, a3, (unsigned int)a5, a4, v5);
  result = (unsigned __int16)v10 | 0x80070000;
  if ( v10 <= 0 )
    return (unsigned int)v10;
  return result;
}
