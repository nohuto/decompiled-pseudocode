/*
 * XREFs of HotKeyToWindow @ 0x1C02402E0
 * Callers:
 *     DWP_SetHotKey @ 0x1C0034FC4 (DWP_SetHotKey.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyToWindow(int a1)
{
  __int64 i; // rdx

  for ( i = gpHotKeyList; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 8) == a1 )
      break;
  }
  return *(_QWORD *)i & -(__int64)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)i + 40LL) + 31LL) & 0x10) != 0);
}
