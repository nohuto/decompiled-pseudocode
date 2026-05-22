/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EE2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5; // eax
  char v6; // al
  bool v7; // cf
  __int16 v8; // ax
  int v9; // r8d
  __int16 v10; // ax
  int v11; // r8d
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // r9
  char *v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a2 & 2) == 0 )
  {
    v2 = -2147024809;
    v3 = 178LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = *((_DWORD *)a2 + 133);
  if ( (*((_BYTE *)a2 + 522) & 1) != 0 )
  {
    *((_DWORD *)a2 + 16) = v5;
    *((_DWORD *)a2 + 17) = *((_DWORD *)a2 + 134);
    *((_DWORD *)this + 10) = *((_DWORD *)a2 + 16);
    *((_DWORD *)this + 11) = *((_DWORD *)a2 + 17);
  }
  else
  {
    *((_DWORD *)this + 12) = v5;
    *((_DWORD *)this + 13) = *((_DWORD *)a2 + 134);
  }
  v6 = *((_BYTE *)a2 + 1584);
  *((_BYTE *)this + 60) = v6;
  v7 = v6 != 0;
  v8 = *((_WORD *)a2 + 262);
  v9 = v7 ? 32 : 16;
  if ( (v8 & 1) != 0 )
  {
    *((_DWORD *)this + 14) |= v9;
  }
  else if ( (v8 & 2) != 0 )
  {
    *((_DWORD *)this + 14) &= ~v9;
  }
  v10 = *((_WORD *)a2 + 262);
  v11 = *((_BYTE *)this + 60) != 0 ? 16 : 32;
  if ( (v10 & 4) != 0 )
  {
    *((_DWORD *)this + 14) |= v11;
  }
  else if ( (v10 & 8) != 0 )
  {
    *((_DWORD *)this + 14) &= ~v11;
  }
  v12 = *((_WORD *)a2 + 262);
  if ( (v12 & 0x10) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x40u;
  }
  else if ( (v12 & 0x20) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x40u;
  }
  v13 = *((_WORD *)a2 + 262);
  if ( (v13 & 0x40) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x80u;
  }
  else if ( (v13 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x80u;
  }
  v14 = *((_WORD *)a2 + 262);
  if ( (v14 & 0x100) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x100u;
  }
  else if ( (v14 & 0x200) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x100u;
  }
  v15 = *((_QWORD *)this + 137);
  v17 = (char *)this + 40;
  if ( v15 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct InputInfo *))(*(_QWORD *)v15 + 24LL))(
           *((_QWORD *)this + 137),
           v17,
           a2);
    if ( v2 < 0 )
    {
      v3 = 210LL;
      goto LABEL_3;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(char *, char *, struct InputInfo *))(*((_QWORD *)this - 1) + 24LL))(
           (char *)this - 8,
           v17,
           a2);
    if ( v2 < 0 )
    {
      v3 = 214LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
