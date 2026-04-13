/*
 * XREFs of ?get_CreativeId@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18005DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_CreativeId(
        HSTRING *this,
        HSTRING *a2)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsDuplicateString(this[15], a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
