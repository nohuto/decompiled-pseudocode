/*
 * XREFs of InitLoadResources @ 0x1C0054BBC
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     SetDpiDepSysMet @ 0x1C0054DD0 (SetDpiDepSysMet.c)
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 *     ClearLogicalCursorPos @ 0x1C012DD50 (ClearLogicalCursorPos.c)
 */

void *__fastcall InitLoadResources(int a1)
{
  unsigned __int16 v2; // dx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned __int16 v5; // cx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  void *result; // rax
  unsigned __int64 v11; // xmm0_8
  void *v12; // rcx
  __int64 v13; // rdx

  v2 = *((_WORD *)gpsi + 3499);
  v3 = 48;
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( v2 >= 0x120u )
        v4 = v2 < 0x180u ? 96 : 128;
      else
        v4 = 64LL;
    }
    else
    {
      v4 = 48LL;
    }
  }
  else
  {
    v4 = 32LL;
  }
  SetDpiDepSysMet(7LL, v4);
  v5 = *((_WORD *)gpsi + 3499);
  if ( v5 >= 0x90u )
  {
    if ( v5 >= 0xC0u )
    {
      if ( v5 >= 0x120u )
        v3 = v5 < 0x180u ? 96 : 128;
      else
        v3 = 64;
    }
  }
  else
  {
    v3 = 32;
  }
  SetDpiDepSysMet(8LL, v3);
  *((_DWORD *)gpsi + 608) = 32;
  *((_DWORD *)gpsi + 609) = 32;
  *((_DWORD *)gpsi + 606) = 32;
  *((_DWORD *)gpsi + 607) = 32;
  *((_DWORD *)gpsi + 621) = *((_DWORD *)gpsi + 606) / 2;
  *((_DWORD *)gpsi + 622) = *((_DWORD *)gpsi + 607) / 2;
  v6 = EngMulDiv(*((_DWORD *)gpsi + 606), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(5LL, v6);
  v7 = EngMulDiv(*((_DWORD *)gpsi + 607), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(6LL, v7);
  v8 = EngMulDiv(*((_DWORD *)gpsi + 621), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(20LL, v8);
  v9 = EngMulDiv(*((_DWORD *)gpsi + 622), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(21LL, v9);
  *((_DWORD *)gpsi + 492) = 0;
  *((_DWORD *)gpsi + 479) = 1;
  *((_DWORD *)gpsi + 480) = 1;
  *((_DWORD *)gpsi + 519) = 2;
  *((_DWORD *)gpsi + 520) = 2;
  *((_DWORD *)gpsi + 481) = 3;
  result = gpsi;
  *((_DWORD *)gpsi + 482) = 3;
  if ( !a1 && (!gbRemoteSession || gbFirstInteractiveSession) )
  {
    v11 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 40LL) + 28LL), 8).m128i_u64[0];
    *((_DWORD *)gpsi + 1240) = (int)v11 / 2;
    v12 = gpsi;
    v13 = (unsigned int)(SHIDWORD(v11) >> 31);
    LODWORD(v13) = SHIDWORD(v11) % 2;
    *((_DWORD *)gpsi + 1241) = SHIDWORD(v11) / 2;
    return (void *)ClearLogicalCursorPos(v12, v13);
  }
  return result;
}
