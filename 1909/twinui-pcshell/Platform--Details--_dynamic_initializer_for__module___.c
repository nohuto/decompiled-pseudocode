/*
 * XREFs of Platform::Details::_dynamic_initializer_for__module___ @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@SAAEAVInProcModule@Details@Platform@@XZ @ 0x18008DBD4 (-Create@-$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@SAAEAVInProcModule@Details@P.c)
 */

struct Platform::Details::InProcModule *Platform::Details::_dynamic_initializer_for__module___()
{
  struct Platform::Details::InProcModule *result; // rax

  result = (struct Platform::Details::InProcModule *)Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create();
  Platform::Details::module_ = result;
  return result;
}
