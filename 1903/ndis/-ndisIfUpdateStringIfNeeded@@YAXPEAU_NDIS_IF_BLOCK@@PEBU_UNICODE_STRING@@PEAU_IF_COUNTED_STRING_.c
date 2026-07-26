/*
 * XREFs of ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063C58
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003F544 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

int __fastcall ndisIfUpdateStringIfNeeded(const wchar_t *a1, const void **a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _UNKNOWN **v10; // rax
  size_t v11; // r8
  unsigned __int16 v12; // ax
  _DWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (LODWORD(v10) = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2), (_DWORD)v10) )
  {
    if ( ndisIsValidIfStringParts(a1, v5) )
    {
      memmove(a3 + 1, a2[1], v11);
      v12 = *(_WORD *)a2;
      v14[1] = 0;
      *a3 = v12;
      v17 = a5;
      v14[0] = a4;
      v15 = a3;
      v16 = 516;
      LODWORD(v10) = ndisNsiNotifyClientInterfaceChange(a1, 0LL, v14);
    }
    else
    {
      v10 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LODWORD(v10) = WPP_RECORDER_SF_Z(
                         *((_QWORD *)WPP_GLOBAL_Control + 8),
                         3u,
                         0x16u,
                         0xB4u,
                         (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                         (unsigned __int16 *)a2);
    }
  }
  return (int)v10;
}
