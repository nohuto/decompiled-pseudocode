/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180053870
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x180054590 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800526E4 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18005290C (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  DWORD TickCount; // esi
  unsigned __int16 v5; // r11
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // r9
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  InputETW::InputStateManager::OnInputReport(a2);
  InputTraceLogging::ISM::ReceiveInput(a2);
  TickCount = GetTickCount();
  if ( (*(_DWORD *)a2 & 2) != 0 )
    v5 = *((_WORD *)a2 + 262);
  else
    v5 = 0;
  v6 = 1LL;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    v7 = 3;
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v7 = 1;
  }
  else if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v7 = 2;
  }
  else if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v7 = 10;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v7 = 12;
  }
  else
  {
    v7 = (*(_DWORD *)a2 & 0x100) != 0 ? 3 : 0;
  }
  v8 = 0xFFFFFFFFLL;
  v9 = ((*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 45)) == 0 )
    v9 = (*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 517) )
  {
    v9 &= ~1u;
  }
  else if ( (*(_BYTE *)a2 & 0xC4) != 0 )
  {
    v8 = *((unsigned int *)this + 47);
  }
  else
  {
    v8 = 0LL;
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( *(_DWORD *)a2 == 64 )
    {
      LOBYTE(v6) = *((_BYTE *)a2 + 585) == 0;
    }
    else if ( (*(_DWORD *)a2 & 0x62600) == 0 || (v10 = *((_DWORD *)a2 + 130), v10 != 8) && (unsigned int)(v10 - 4) > 2 )
    {
LABEL_29:
      MITUpdateInputGlobals(TickCount, v7, v5, v8, v9);
      goto LABEL_30;
    }
    if ( (_BYTE)v6 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_30:
  v11 = *((_QWORD *)this + 9);
  if ( v11 == *((_QWORD *)this + 10) )
  {
LABEL_33:
    v12 = -2147467259;
    v13 = 398LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  while ( *(_DWORD *)v11 != *((_DWORD *)a2 + 1) )
  {
    v11 += 16LL;
    if ( v11 == *((_QWORD *)this + 10) )
      goto LABEL_33;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, __int64, __int64))(**(_QWORD **)(v11 + 8) + 48LL))(
          *(_QWORD *)(v11 + 8),
          a2,
          v6,
          v8);
  if ( v12 < 0 )
  {
    v13 = 391LL;
    goto LABEL_34;
  }
  return 0LL;
}
