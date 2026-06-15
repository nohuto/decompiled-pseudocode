/*
 * XREFs of ?get_Status@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAW4SendCommandStatus@234@@Z @ 0x14004C620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::get_Status(
        Windows::Media::Devices::ModuleCommandResult *this,
        enum Windows::Media::Devices::SendCommandStatus *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return result;
}
