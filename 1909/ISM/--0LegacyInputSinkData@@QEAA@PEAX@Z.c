/*
 * XREFs of ??0LegacyInputSinkData@@QEAA@PEAX@Z @ 0x1800018A0
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F110 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     ExceptionSafeNtDuplicateCompositionInputSink @ 0x180001A60 (ExceptionSafeNtDuplicateCompositionInputSink.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180066EC8 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
LegacyInputSinkData *__fastcall LegacyInputSinkData::LegacyInputSinkData(LegacyInputSinkData *this, void *a2)
{
  __int64 v4; // rbp
  int v5; // eax
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 224) = 0;
  *((_BYTE *)this + 280) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_BYTE *)this + 344) = 0;
  v4 = *(_QWORD *)this;
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v4);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  v5 = ExceptionSafeNtDuplicateCompositionInputSink(a2, this);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
      (const char *)(unsigned int)v5,
      -2);
    JUMPOUT(0x18003E042LL);
  }
  return this;
}
