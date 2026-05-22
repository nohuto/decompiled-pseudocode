/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x1800328B0
 * Callers:
 *     _dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180136D80 (_dynamic_atexit_destructor_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::~_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>()
{
  void *v0; // rcx
  const struct std::nothrow_t *v1; // rdx
  __int64 v2; // r8
  void **v3; // r8
  void *v4; // rcx
  void **v5; // rbx

  v0 = (void *)qword_180193CA8;
  if ( qword_180193CA8 )
  {
    v1 = (const struct std::nothrow_t *)((*((_QWORD *)&xmmword_180193CB0 + 1) - qword_180193CA8) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v1 >= 0x1000 )
    {
      v2 = *(_QWORD *)(qword_180193CA8 - 8);
      v1 = (const struct std::nothrow_t *)((char *)v1 + 39);
      if ( (unsigned __int64)(qword_180193CA8 - v2 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(qword_180193CA8 - v2, v1);
        JUMPOUT(0x180032969LL);
      }
      v0 = *(void **)(qword_180193CA8 - 8);
    }
    operator delete(v0, v1);
    qword_180193CA8 = 0LL;
    xmmword_180193CB0 = 0LL;
  }
  v3 = *(void ***)qword_180193C98;
  *(_QWORD *)qword_180193C98 = qword_180193C98;
  *((_QWORD *)qword_180193C98 + 1) = qword_180193C98;
  qword_180193CA0 = 0LL;
  v4 = qword_180193C98;
  if ( v3 != qword_180193C98 )
  {
    do
    {
      v5 = (void **)*v3;
      operator delete(v3, (const struct std::nothrow_t *)0x18);
      v4 = qword_180193C98;
      v3 = v5;
    }
    while ( v5 != qword_180193C98 );
  }
  operator delete(v4, (const struct std::nothrow_t *)0x18);
}
