/*
 * XREFs of PbmReportAppInteractivityChange @ 0x180023CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020EE4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180026B20 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(void *a1, const wchar_t *a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  int v8; // ecx
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10[5]; // [rsp+34h] [rbp-14h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    v8 = RpcClientProcessSessionId(a1, v10, &v9);
    if ( v8 )
    {
      result = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return CApplicationManager::ProcessInteractivityNotification((__int64)g_ApplicationManager, a2, a3, a4, v9);
    }
  }
  return result;
}
