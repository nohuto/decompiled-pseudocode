/*
 * XREFs of ??$_Setp@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@U?$integral_constant@_N$0A@@1@@Z @ 0x1801DD1A0
 * Callers:
 *     ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1801DD220 (--$reset@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<DDAScreenCapture>::_Setp<DDAScreenCapture>(
        DDAScreenCapture **a1,
        DDAScreenCapture *a2)
{
  _DWORD *result; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[4] = -2LL;
  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count<DDAScreenCapture>::`vftable';
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = (DDAScreenCapture *)result;
  }
  catch ( ... )
  {
    if ( a2 )
      DDAScreenCapture::`scalar deleting destructor'(a2, (unsigned int)v5);
    throw;
  }
  return result;
}
