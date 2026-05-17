/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x18001564C
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     InitializeUserOrMachineLangList @ 0x180007D24 (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegDupLanguageList @ 0x180012DAC (RtlpMuiRegDupLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800151CC (RtlpSetProcUserMachineLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180015604 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800156DC (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = 4;
  if ( a1 >= 1 )
    v5 = a1;
  result = SafeAllocBlob(64, v5, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v5;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
