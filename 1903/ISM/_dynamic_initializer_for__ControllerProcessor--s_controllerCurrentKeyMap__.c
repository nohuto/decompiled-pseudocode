/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x1800011D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@W4GamepadButtons@Input@Gaming@Windows@@GU?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@@std@@QEAA@XZ @ 0x1800157C4 (--0-$unordered_map@W4GamepadButtons@Input@Gaming@Windows@@GU-$hash@W4GamepadButtons@Input@Gaming.c)
 */

int dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__()
{
  std::unordered_map<enum Windows::Gaming::Input::GamepadButtons,unsigned short>::unordered_map<enum Windows::Gaming::Input::GamepadButtons,unsigned short>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__);
}
