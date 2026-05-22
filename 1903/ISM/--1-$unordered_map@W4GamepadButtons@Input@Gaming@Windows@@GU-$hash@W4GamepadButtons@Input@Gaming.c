/*
 * XREFs of ??1?$unordered_map@W4GamepadButtons@Input@Gaming@Windows@@GU?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@@std@@QEAA@XZ @ 0x18002B468
 * Callers:
 *     _dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x18003E0F0 (_dynamic_atexit_destructor_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void std::unordered_map<enum Windows::Gaming::Input::GamepadButtons,unsigned short>::~unordered_map<enum Windows::Gaming::Input::GamepadButtons,unsigned short>()
{
  _QWORD *v0; // r8
  void *v1; // rcx
  _QWORD *v2; // rbx

  if ( qword_1801E1518 )
  {
    std::_Deallocate<16,0>(
      (void *)qword_1801E1518,
      (const struct std::nothrow_t *)((*((_QWORD *)&xmmword_1801E1520 + 1) - qword_1801E1518) & 0xFFFFFFFFFFFFFFF8uLL));
    qword_1801E1518 = 0LL;
    xmmword_1801E1520 = 0LL;
  }
  v0 = *(_QWORD **)qword_1801E1508;
  *(_QWORD *)qword_1801E1508 = qword_1801E1508;
  *(_QWORD *)(qword_1801E1508 + 8) = qword_1801E1508;
  qword_1801E1510 = 0LL;
  v1 = (void *)qword_1801E1508;
  if ( v0 != (_QWORD *)qword_1801E1508 )
  {
    do
    {
      v2 = (_QWORD *)*v0;
      std::_Deallocate<16,0>(v0, (const struct std::nothrow_t *)0x18);
      v1 = (void *)qword_1801E1508;
      v0 = v2;
    }
    while ( v2 != (_QWORD *)qword_1801E1508 );
  }
  std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x18);
}
