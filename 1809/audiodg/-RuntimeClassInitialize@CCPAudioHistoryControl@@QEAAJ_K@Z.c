/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJ_K@Z @ 0x14005435C
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEA_K@Z @ 0x140053BA0 (--$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEA_K@Details@WRL@Microso.c)
 * Callees:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400122F4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14002FDD4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCPAudioHistoryControl::RuntimeClassInitialize(CCPAudioHistoryControl *this, void *a2)
{
  _DWORD *v4; // rax
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rsi
  SIZE_T dwNumberOfBytesToMap; // rbp
  char *v10; // rax
  char *v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x188uLL);
  if ( !v4 )
  {
    v6 = 33LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
             v5);
  }
  v8 = (unsigned int)v4[85];
  dwNumberOfBytesToMap = (unsigned int)v4[89];
  if ( (_DWORD)v8 )
  {
    *((_DWORD *)this + 8) = v4[87];
    *((_DWORD *)this + 9) = *((unsigned __int16 *)v4 + 190);
    *((_DWORD *)this + 10) = v4[93];
    *((_DWORD *)this + 11) = v4[82];
    UnmapViewOfFile(v4);
    v10 = (char *)MapViewOfFile(a2, 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
    v11 = v10;
    if ( !v10 )
    {
      v6 = 48LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
               v5);
    }
    AERTLockMemory(v10, dwNumberOfBytesToMap);
    *((_QWORD *)this + 3) = v11;
    *((_QWORD *)this + 2) = &v11[v8];
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
