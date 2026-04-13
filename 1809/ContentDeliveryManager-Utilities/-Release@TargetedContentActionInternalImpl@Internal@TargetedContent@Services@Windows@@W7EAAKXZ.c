/*
 * XREFs of ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x18001DF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::Release(
        __int64 a1)
{
  return ContentManagement::PhoneShellNamespaceHelper::Release((ContentManagement::PhoneShellNamespaceHelper *)(a1 - 8));
}
