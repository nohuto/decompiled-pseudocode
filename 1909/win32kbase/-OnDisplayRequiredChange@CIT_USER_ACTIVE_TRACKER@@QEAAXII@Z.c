/*
 * XREFs of ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0065138
 * Callers:
 *     CitDisplayRequestChange @ 0x1C006508C (CitDisplayRequestChange.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C00388EC (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C003892C (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        CIT_USER_ACTIVE_TRACKER *this,
        unsigned int a2,
        int a3)
{
  int v5; // edx

  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  if ( a3 )
  {
    v5 = 1;
LABEL_3:
    CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), v5);
    goto LABEL_4;
  }
  if ( *(_DWORD *)this && (unsigned int)(dword_1C02157E8 + *((_DWORD *)this + 1)) < *((_DWORD *)this + 2) )
  {
    v5 = 0;
    goto LABEL_3;
  }
LABEL_4:
  *(_DWORD *)this = a3;
}
