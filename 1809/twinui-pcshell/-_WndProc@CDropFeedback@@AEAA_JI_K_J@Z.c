/*
 * XREFs of ?_WndProc@CDropFeedback@@AEAA_JI_K_J@Z @ 0x180370D70
 * Callers:
 *     ?s_WndProc@CDropFeedback@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180370E60 (-s_WndProc@CDropFeedback@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CDropFeedback::_WndProc(CDropFeedback *this, UINT a2, WPARAM a3, LPARAM a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  IRawElementProviderSimple *v8; // r9
  __int64 v9; // rcx

  v4 = 0LL;
  if ( a2 == 6 )
  {
    v9 = *((_QWORD *)this + 19);
    if ( v9 && !(_WORD)a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  }
  else if ( a2 != 16 )
  {
    switch ( a2 )
    {
      case 0x14u:
        return 1LL;
      case 0x3Du:
        if ( (*((_BYTE *)this + 120) & 4) != 0 && a4 == -25 )
        {
          v8 = (IRawElementProviderSimple *)*((_QWORD *)this + 24);
          if ( v8 )
            return UiaReturnRawElementProvider(*((HWND *)this + 8), a3, -25LL, v8);
        }
        break;
      case 0x100u:
        v7 = *((_QWORD *)this + 19);
        if ( v7 )
          (*(void (__fastcall **)(__int64, WPARAM, LPARAM))(*(_QWORD *)v7 + 24LL))(v7, a3, a4);
        break;
      case 0x101u:
        v6 = *((_QWORD *)this + 19);
        if ( v6 )
          (*(void (__fastcall **)(__int64, WPARAM, LPARAM))(*(_QWORD *)v6 + 32LL))(v6, a3, a4);
        break;
      default:
        return DefWindowProcW(*((HWND *)this + 8), a2, a3, a4);
    }
  }
  return v4;
}
