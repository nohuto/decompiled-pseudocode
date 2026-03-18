/*
 * XREFs of ValidateHbwnd @ 0x1C01035E0
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015B5A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015B95C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015BA74 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016A4C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v4 = (char *)qword_1C0210758 + (unsigned int)(unsigned __int16)a1 * dword_1C0210760,
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v9,
          a2,
          a3),
        v7 = a1 >> 16,
        (_WORD)v7 != *((_WORD *)v4 + 13))
    && (_WORD)v7 != 0xFFFF
    && ((_WORD)v7 || !PsGetCurrentProcessWow64Process(v5))
    || v4[24] != 23
    || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v9,
          a2,
          v6),
        (result = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v4 - (char *)qword_1C0210758) >> 5))) == 0)
    || (v4[25] & 1) != 0 )
  {
    UserSetLastError(1400LL, a2);
    return 0LL;
  }
  return result;
}
