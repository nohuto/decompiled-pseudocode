/*
 * XREFs of ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D558C
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4500 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4DB0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D59E0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800D3D28 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3D50 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800D4310 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z @ 0x1800D65C8 (-PushBack@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAXPEAUAlpcSectionListEntry@AlpcPort@@@Z.c)
 */

__int64 __fastcall AlpcPort::FillSectionListEntryPool(AlpcPort *this, unsigned __int64 a2)
{
  HANDLE *v4; // rax
  HANDLE *v5; // r14
  void *v6; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v8; // rax
  __int64 v9; // rdx
  wil::details::in1diag0 *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  unsigned int LastError; // ebx

  if ( *((_QWORD *)this + 10) >= a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = (HANDLE *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
    {
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
      v4[6] = 0LL;
      *((_DWORD *)v4 + 14) = 0;
      *v4 = &AlpcPort::AlpcSectionListEntry::`vftable';
      v4[8] = 0LL;
      v4[9] = 0LL;
      v4[10] = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      break;
    v6 = (void *)*((_QWORD *)this + 7);
    CurrentProcess = GetCurrentProcess();
    v8 = GetCurrentProcess();
    if ( !DuplicateHandle(v8, v6, CurrentProcess, v5 + 8, 0, 0, 2u) )
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v10, v9, v11, v12);
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)v5, 1);
      return LastError;
    }
    v5[10] = this;
    NtList<AlpcPort::AlpcSectionListEntry>::PushBack((char *)this + 64, v5);
    if ( *((_QWORD *)this + 10) >= a2 )
      return 0LL;
  }
  LastError = -2147024882;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
  return LastError;
}
