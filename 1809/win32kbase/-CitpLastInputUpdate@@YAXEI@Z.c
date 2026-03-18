/*
 * XREFs of ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0035E94
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0185230 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitLastInputUpdate @ 0x1C0185490 (CitLastInputUpdate.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0036030 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int8 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rax

  LODWORD(v2) = a2;
  if ( a1 != 32 && a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
    MEMORY[0xFFFFF780000002E4] = a2;
  if ( qword_1C01D0CF0 )
  {
    if ( a2 < dword_1C01D0CF8 )
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = qword_1C01D0CF0;
    dword_1C01D0CF8 = v2;
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C01D0CF0 + 212), v2);
    if ( a1 != 32 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v4 + 188), v2);
    v5 = *((_QWORD *)v4 + 15);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 928);
      if ( (unsigned int)(v2 - *(_DWORD *)(v6 + 84)) > 0x3E8 )
      {
        *(_DWORD *)(v6 + 84) = v2;
        *(_BYTE *)(v6 + 90) = 0;
        CitpStatIncrement((unsigned __int16 *)v4 + 70, 1);
        PsUpdateComponentPower(**((_QWORD **)v4 + 15), 9LL);
      }
      if ( (a1 & *(_BYTE *)(v6 + 90)) == 0 )
      {
        switch ( a1 )
        {
          case 1u:
            PsUpdateComponentPower(**((_QWORD **)v4 + 15), 13LL);
            v7 = 142LL;
            break;
          case 2u:
            PsUpdateComponentPower(**((_QWORD **)v4 + 15), 14LL);
            v7 = 144LL;
            break;
          case 4u:
            v7 = 148LL;
            break;
          case 8u:
            v7 = 150LL;
            break;
          case 0x10u:
            v7 = 146LL;
            break;
          case 0x80u:
            v7 = 152LL;
            break;
          default:
            return;
        }
        CitpStatIncrement((unsigned __int16 *)((char *)v4 + v7), 1);
        *(_BYTE *)(v6 + 90) |= a1;
      }
    }
  }
}
