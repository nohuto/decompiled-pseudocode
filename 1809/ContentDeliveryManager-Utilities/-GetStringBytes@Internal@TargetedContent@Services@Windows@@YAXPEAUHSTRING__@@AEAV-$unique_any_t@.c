/*
 * XREFs of ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006CF10
 * Callers:
 *     ?DefaultBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006CFD0 (-DefaultBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$un.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072608 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006C3E0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetStringBytes(HSTRING a1, void **a2, _DWORD *a3)
{
  PCWSTR StringRawBuffer; // rdi
  void *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  void *v9; // rbx
  void *v10; // rsi
  DWORD LastError; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  rsize_t SourceSize; // [rsp+60h] [rbp+18h] BYREF
  void *v15; // [rsp+68h] [rbp+20h]

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, (UINT32 *)&SourceSize);
  LODWORD(SourceSize) = 2 * SourceSize + 2;
  v6 = CoTaskMemAlloc((unsigned int)SourceSize);
  v9 = v6;
  v15 = v6;
  if ( !v6 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0xE3, v7, v8);
    JUMPOUT(0x18006CFC6LL);
  }
  memcpy_s(v6, (unsigned int)SourceSize, StringRawBuffer, (unsigned int)SourceSize);
  v10 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v10);
    SetLastError(LastError);
  }
  *a2 = v9;
  result = (unsigned int)SourceSize;
  *a3 = SourceSize;
  return result;
}
