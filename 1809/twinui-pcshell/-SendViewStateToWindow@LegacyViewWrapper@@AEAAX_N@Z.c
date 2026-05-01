/*
 * XREFs of ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x18023C6A4
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18023C860 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x18023CA70 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::SendViewStateToWindow(LegacyViewWrapper *this, unsigned __int8 a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( (*((_BYTE *)this + 472) & 0x10) == 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(*((_QWORD *)this + 22) + 472LL)
                                                                                           + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 472LL),
        v3,
        1LL,
        *((unsigned __int16 *)this + 114) | ((unsigned __int64)*((unsigned __int16 *)this + 116) << 16),
        *((unsigned __int16 *)this + 118) | (unsigned __int64)(a2 << 17));
  }
}
