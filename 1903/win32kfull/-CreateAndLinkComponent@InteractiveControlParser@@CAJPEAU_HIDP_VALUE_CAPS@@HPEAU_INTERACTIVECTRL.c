/*
 * XREFs of ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0258C80
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C025860C (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 * Callees:
 *     ?GetComponentMultiplier@InteractiveControlParser@@SAXPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PEAJ1@Z @ 0x1C02591AC (-GetComponentMultiplier@InteractiveControlParser@@SAXPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PEA.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0259268 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::CreateAndLinkComponent(
        struct _HIDP_VALUE_CAPS *a1,
        int a2,
        struct _INTERACTIVECTRL_CAPABILITIES *a3,
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY **a4)
{
  USAGE UsageMin; // ax
  unsigned int v5; // ebp
  USAGE UsagePage; // cx
  unsigned int v11; // esi
  LONG PhysicalMin; // ecx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdx
  USAGE v16; // cx

  UsageMin = a1->Range.UsageMin;
  v5 = 0;
  *a4 = 0LL;
  UsagePage = a1->UsagePage;
  if ( UsagePage != 1 )
  {
    if ( UsagePage == 9 )
    {
      v11 = 5;
      goto LABEL_21;
    }
    if ( UsagePage == 13 )
    {
      if ( UsageMin == 51 )
      {
        v11 = 7;
        goto LABEL_21;
      }
      if ( UsageMin > 0x47u && UsageMin <= 0x49u )
      {
        v11 = 8;
        goto LABEL_21;
      }
    }
    goto LABEL_46;
  }
  if ( UsageMin < 0x30u )
    goto LABEL_46;
  if ( UsageMin <= 0x35u )
  {
    v11 = 1;
    goto LABEL_21;
  }
  switch ( UsageMin )
  {
    case '6':
      v11 = 2;
      goto LABEL_21;
    case '7':
      v11 = 3;
      goto LABEL_21;
    case '8':
      v11 = 4;
      goto LABEL_21;
  }
  if ( UsageMin != 57 )
  {
LABEL_46:
    *((_DWORD *)a3 + 39) = 1;
    return v5;
  }
  v11 = 6;
LABEL_21:
  if ( a2
    || (PhysicalMin = a1->PhysicalMin, PhysicalMin != a1->PhysicalMax)
    || a1->LogicalMin != a1->LogicalMax
    || PhysicalMin )
  {
    v13 = Win32AllocPoolZInit(136LL, 1819440195LL);
    if ( v13 )
    {
      v14 = (__int64 *)((char *)a3 + 112);
      v15 = *((_QWORD *)a3 + 14);
      if ( *(struct _INTERACTIVECTRL_CAPABILITIES **)(v15 + 8) != (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a3 + 112) )
        __fastfail(3u);
      *(_QWORD *)v13 = v15;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(v15 + 8) = v13;
      *v14 = v13;
      switch ( v11 )
      {
        case 1u:
          *(_DWORD *)(v13 + 96) = 2;
          break;
        case 5u:
          v16 = a1->Range.UsageMin;
          if ( (unsigned __int16)(v16 - 1) <= 4u )
          {
            *(_DWORD *)(v13 + 96) = 4 << (v16 - 1);
            if ( a1->Range.UsageMin == 2 )
            {
              *(_DWORD *)(v13 + 96) = 128;
              *((_DWORD *)a3 + 40) = 1;
            }
          }
          break;
        case 7u:
          if ( a1->UsagePage == 13 && a1->Range.UsageMin == 51 )
            *(_DWORD *)(v13 + 96) = 1;
          break;
        default:
          *(_DWORD *)(v13 + 96) = 0;
          break;
      }
      *(_DWORD *)(v13 + 16) = v11;
      *(_DWORD *)(v13 + 20) = *((_DWORD *)a3 + v11 + 17);
      *(_OWORD *)(v13 + 24) = *(_OWORD *)&a1->UsagePage;
      *(_OWORD *)(v13 + 40) = *(_OWORD *)&a1->HasNull;
      *(_OWORD *)(v13 + 56) = *(_OWORD *)&a1->UnitsExp;
      *(_OWORD *)(v13 + 72) = *(_OWORD *)&a1->PhysicalMin;
      *(_QWORD *)(v13 + 88) = *(_QWORD *)&a1->NotRange.DesignatorIndex;
      ++*((_DWORD *)a3 + v11 + 17);
      ++*((_DWORD *)a3 + 26);
      *(_DWORD *)(v13 + 124) = 1;
      *(_DWORD *)(v13 + 112) = 1;
      *(_DWORD *)(v13 + 108) = 1;
      if ( !a2 )
      {
        InteractiveControlParser::GetComponentMultiplier(
          (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v13,
          (int *)(v13 + 116),
          (int *)(v13 + 120));
        *(_DWORD *)(v13 + 112) = InteractiveControlParser::GetScaledComponentValue(
                                   (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v13,
                                   1);
      }
      if ( *(_DWORD *)(v13 + 16) == 8 && a1->LogicalMin == a1->LogicalMax )
        *(_DWORD *)(v13 + 100) = 1;
      *a4 = (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v13;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
