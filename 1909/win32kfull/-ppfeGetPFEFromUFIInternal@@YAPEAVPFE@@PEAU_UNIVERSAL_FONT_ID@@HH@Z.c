/*
 * XREFs of ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C009398C
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0093830 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C027901C (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 * Callees:
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1C0093A88 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0093ABC (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFIInternal(struct _UNIVERSAL_FONT_ID *a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v7; // rbp
  struct _FONTHASH **v8; // rax
  struct _HASHBUCKET *v9; // rax
  _QWORD *i; // rsi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edx
  struct _KTHREAD *v14; // rcx
  int v15; // eax
  int v16; // ecx
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = -1;
  v7 = 0LL;
  if ( a2 )
    v8 = gpPFTPrivate;
  else
    v8 = gpPFTPublic;
  if ( v8 )
  {
    v18[0] = v8 + 2;
    v18[1] = v8[2];
    v9 = FHOBJ::pbktSearch((FHOBJ *)v18, 0LL, 0LL, a1, 0);
    if ( v9 )
    {
      for ( i = (_QWORD *)*((_QWORD *)v9 + 1); i; i = (_QWORD *)*i )
      {
        v11 = i[1];
        v12 = *(_DWORD *)a1;
        v19 = v11;
        if ( *(_DWORD *)(v11 + 84) == v12
          && *(_DWORD *)(v11 + 88) == *((_DWORD *)a1 + 1)
          && (!a3 || (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v19)) )
        {
          v13 = *(_DWORD *)(v11 + 12);
          if ( (v13 & 2) == 0 )
          {
            v14 = *(struct _KTHREAD **)(v11 + 96);
            if ( !v14 || (v15 = 0, v14 == KeGetCurrentThread()) )
              v15 = 2;
            v16 = v15 + 1;
            if ( (v13 & 8) != 0 )
              v16 = v15;
            if ( v16 > v4 )
            {
              v7 = i[1];
              v4 = v16;
            }
          }
        }
      }
      return (struct PFE *)v7;
    }
  }
  return (struct PFE *)v3;
}
