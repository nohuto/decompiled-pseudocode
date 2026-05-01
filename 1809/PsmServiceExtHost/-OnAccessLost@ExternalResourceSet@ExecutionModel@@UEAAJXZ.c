/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180062F40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180006BEC (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(ExecutionModel::ExternalResourceSet *this)
{
  if ( (*((_BYTE *)this + 1472) & 2) != 0 )
    return 1LL;
  ExecutionModel::ExternalResourceSet::QueueMessage((__int64)this, 2);
  return 0LL;
}
