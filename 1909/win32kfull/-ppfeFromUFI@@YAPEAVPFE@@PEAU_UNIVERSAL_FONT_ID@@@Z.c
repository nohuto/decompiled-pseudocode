/*
 * XREFs of ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A0488
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1C0093A88 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0093ABC (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

struct PFE *__fastcall ppfeFromUFI(struct _UNIVERSAL_FONT_ID *a1)
{
  __int64 v2; // rsi
  struct _HASHBUCKET *v3; // rax
  _QWORD *i; // rdi
  _DWORD *v5; // rbx
  int v6; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  v8[0] = gpPFTPublic + 2;
  v2 = 0LL;
  v8[1] = gpPFTPublic[2];
  v3 = FHOBJ::pbktSearch((FHOBJ *)v8, 0LL, 0LL, a1, 0);
  if ( v3 )
  {
    for ( i = (_QWORD *)*((_QWORD *)v3 + 1); i; i = (_QWORD *)*i )
    {
      v5 = (_DWORD *)i[1];
      v6 = *(_DWORD *)a1;
      v9 = v5;
      if ( v5[21] == v6
        && v5[22] == *((_DWORD *)a1 + 1)
        && (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v9)
        && (v5[3] & 2) == 0 )
      {
        return (struct PFE *)i[1];
      }
    }
  }
  return (struct PFE *)v2;
}
