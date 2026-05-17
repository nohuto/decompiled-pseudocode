/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x18003C454
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180039F7C (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18003BA10 (RtlpMuiRegDupLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x18003C1E4 (RtlpSetProcUserMachineLangList.c)
 *     LdrpCreateLangFallbackList @ 0x18003C40C (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18004C4C0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18004CAB0 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18003C4E4 (_SafeAllocBlob.c)
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
