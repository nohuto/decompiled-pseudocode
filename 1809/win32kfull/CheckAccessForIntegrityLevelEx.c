/*
 * XREFs of CheckAccessForIntegrityLevelEx @ 0x1C00F7040
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckAccessForIntegrityLevelEx(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  _BOOL8 result; // rax

  result = 1;
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)a1 <= (unsigned int)a2 )
    {
      if ( (_DWORD)a1 != (_DWORD)a2 )
        return 0;
      v2 = HIDWORD(a1);
      v3 = HIDWORD(a2);
      if ( (_DWORD)v2 != (_DWORD)v3 && (_DWORD)v3 != -1 && (_DWORD)v2 != -1 )
        return 0;
    }
  }
  return result;
}
