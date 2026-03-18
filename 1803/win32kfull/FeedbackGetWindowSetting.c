/*
 * XREFs of FeedbackGetWindowSetting @ 0x1C01A82B0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01A74D4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01A7A84 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01A7B30 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1C01F0620 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00EECA0 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // edi
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  __int64 result; // rax
  unsigned __int8 v12; // cf
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v8 = a1;
  if ( !a1 )
    return 0LL;
  v9 = 0x10000 << a2;
  while ( 1 )
  {
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Feedback::GetStore((__int64)v13, v8), 8));
    if ( (v9 & v10) != 0 )
      break;
    if ( (a3 & 1) == 0 || (unsigned int)IsTopLevelWindow(v8) )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)(v8 + 80);
    if ( !v8 )
      return 0LL;
  }
  v12 = _bittest(&v10, a2);
  result = 1LL;
  LOBYTE(v4) = v12;
  *a4 = v4;
  return result;
}
