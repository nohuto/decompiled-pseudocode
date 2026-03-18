/*
 * XREFs of ValidateHbwnd @ 0x1C00E0270
 * Callers:
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0131148 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // rcx
  char *v3; // rbx
  __int64 result; // rax

  v1 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = a1 >> 16,
        v3 = (char *)qword_1C01CBA58 + (unsigned int)(v1 * dword_1C01CBA60),
        (_WORD)v2 != *((_WORD *)v3 + 13))
    && (_WORD)v2 != 0xFFFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process(v2))
    || v3[24] != 23
    || (result = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v3 - (_BYTE *)qword_1C01CBA58) >> 5))) == 0
    || (v3[25] & 1) != 0 )
  {
    UserSetLastError(1400LL);
    return 0LL;
  }
  return result;
}
