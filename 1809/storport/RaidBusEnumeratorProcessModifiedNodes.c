/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C0017BB8
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0017760 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0023448 (RaidBusEnumeratorProcessNewUnit.c)
 *     McTemplateK0zqjqq @ 0x1C00262F0 (McTemplateK0zqjqq.c)
 *     WPP_SF_qqddds @ 0x1C003C0D4 (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 *v4; // r12
  __int64 *v5; // r14
  int v6; // ebp
  int v7; // r15d
  unsigned int v9; // ebx
  int v10; // eax
  char *p_Flags; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned __int8 v14; // al

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v10 = *((_DWORD *)v5 + 18);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          p_Flags = (char *)&stru_1C0055A88.MatchAllKeyword + 4;
        }
        else
        {
          p_Flags = (char *)&stru_1C0055A88.Flags;
          if ( v10 != 2 )
            p_Flags = (char *)&stru_1C0055A88.Level;
        }
      }
      else
      {
        p_Flags = (char *)&stru_1C0055A88.MatchAnyKeyword;
      }
      WPP_SF_qqddds(
        WPP_GLOBAL_Control->AttachedDevice,
        *((unsigned __int8 *)v5 - 14),
        *((unsigned __int8 *)v5 - 15),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 15),
        *((_BYTE *)v5 - 14),
        *((_BYTE *)v5 - 13),
        (__int64)p_Flags);
    }
    v12 = *((_DWORD *)v5 + 18);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit(a1, v5 - 2);
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v13 = *(v5 - 1);
      v14 = *(_BYTE *)(v13 + 448);
      if ( (v14 & 4) != 0 )
      {
        v14 &= ~4u;
        *(_BYTE *)(v13 + 448) = v14;
      }
      v9 = (v14 >> 1) & 1;
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4514) && (v6 || v7) && (byte_1C00617E5 & 8) != 0 )
    McTemplateK0zqjqq(*(_DWORD *)(v3 + 56), a2, a3, *(_QWORD *)(v3 + 4864), *(_DWORD *)(v3 + 56), v3 + 5256, v6, v7);
  return v9;
}
