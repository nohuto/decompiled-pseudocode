/*
 * XREFs of ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D4868
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00D46A4 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(const struct tagINPUT_MESSAGE_SOURCE *a1)
{
  unsigned int v1; // ecx
  int v3; // eax

  if ( (unsigned __int64)a1 <= 0x79 )
    return 0LL;
  if ( *(_DWORD *)a1 != 2 )
  {
    if ( ((*(_DWORD *)a1 - 18) & 0xFFFFFFEF) != 0 )
      return 0;
LABEL_7:
    v3 = *((_DWORD *)a1 + 1);
    v1 = 1;
    if ( (unsigned int)(v3 - 1) <= 1 )
      return v1;
    return 0;
  }
  if ( *((_DWORD *)a1 + 1) != 4 )
    goto LABEL_7;
  return 1LL;
}
