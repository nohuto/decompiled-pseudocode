/*
 * XREFs of ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0038708
 * Callers:
 *     CitLastInputUpdate @ 0x1C00389C0 (CitLastInputUpdate.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0038A30 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C7E14 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00366AC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00388B4 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int v4; // esi
  struct _CIT_IMPACT_CONTEXT *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax

  LODWORD(v2) = a2;
  if ( a1 == 32 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
      MEMORY[0xFFFFF780000002E4] = a2;
  }
  if ( qword_1C0215810 )
  {
    if ( a2 < dword_1C0215818 )
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = qword_1C0215810;
    dword_1C0215818 = v2;
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0215810 + 216), v2);
    if ( !v4 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v5 + 192), v2);
    v6 = *((_QWORD *)v5 + 15);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 920);
      if ( (unsigned int)(v2 - *(_DWORD *)(v7 + 84)) > 0x3E8 )
      {
        *(_DWORD *)(v7 + 84) = v2;
        *(_WORD *)(v7 + 90) = 0;
        CitpStatIncrement((unsigned __int16 *)v5 + 70, 1);
        PsUpdateComponentPower(**((_QWORD **)v5 + 15), 9LL);
      }
      if ( (a1 & *(_WORD *)(v7 + 90)) == 0 )
      {
        switch ( a1 )
        {
          case 1u:
            PsUpdateComponentPower(**((_QWORD **)v5 + 15), 13LL);
            v8 = 142LL;
            break;
          case 2u:
            PsUpdateComponentPower(**((_QWORD **)v5 + 15), 14LL);
            v8 = 144LL;
            break;
          case 4u:
            v8 = 148LL;
            break;
          case 8u:
            v8 = 150LL;
            break;
          case 0x10u:
            v8 = 146LL;
            break;
          case 0x80u:
            v8 = 152LL;
            break;
          case 0x100u:
            v8 = 154LL;
            break;
          default:
            return;
        }
        CitpStatIncrement((unsigned __int16 *)((char *)v5 + v8), 1);
        *(_WORD *)(v7 + 90) |= a1;
      }
    }
  }
}
