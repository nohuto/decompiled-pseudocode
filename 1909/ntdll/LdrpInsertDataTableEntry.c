/*
 * XREFs of LdrpInsertDataTableEntry @ 0x18002A63C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x18002952C (LdrpHashUnicodeString.c)
 */

void __fastcall LdrpInsertDataTableEntry(__int64 a1)
{
  int v2; // eax
  char *v3; // rcx
  char *v4; // rax
  char **v5; // rdx
  bool v6; // zf
  __int64 *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 264);
    if ( !v2 )
    {
      v2 = LdrpHashUnicodeString((_UNICODE_STRING *)(a1 + 88));
      *(_DWORD *)(a1 + 264) = v2;
    }
    v3 = (char *)(a1 + 112);
    v4 = (char *)&LdrpHashTable + 16 * (v2 & 0x1F);
    v5 = (char **)*((_QWORD *)v4 + 1);
    if ( *v5 == v4 )
    {
      v6 = a1 == LdrpImageEntry;
      *(_QWORD *)v3 = v4;
      *(_QWORD *)(a1 + 120) = v5;
      *v5 = v3;
      *((_QWORD *)v4 + 1) = v3;
      if ( v6 )
      {
        v10 = qword_1801653D0;
        if ( *(__int64 **)(qword_1801653D0 + 8) == &qword_1801653D0 )
        {
          *(_QWORD *)a1 = qword_1801653D0;
          *(_QWORD *)(a1 + 8) = &qword_1801653D0;
          v11 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(v10 + 8) = a1;
          v12 = qword_1801653E0;
          qword_1801653D0 = a1;
          if ( *(__int64 **)(qword_1801653E0 + 8) == &qword_1801653E0 )
          {
            *v11 = qword_1801653E0;
            *(_QWORD *)(a1 + 24) = &qword_1801653E0;
            *(_QWORD *)(v12 + 8) = v11;
            qword_1801653E0 = a1 + 16;
            goto LABEL_9;
          }
        }
      }
      else
      {
        v7 = (__int64 *)qword_1801653D8;
        if ( *(__int64 **)qword_1801653D8 == &qword_1801653D0 )
        {
          *(_QWORD *)a1 = &qword_1801653D0;
          v8 = (_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = v7;
          *v7 = a1;
          v9 = (_QWORD *)qword_1801653E8;
          qword_1801653D8 = a1;
          if ( *(__int64 **)qword_1801653E8 == &qword_1801653E0 )
          {
            *v8 = &qword_1801653E0;
            *(_QWORD *)(a1 + 24) = v9;
            *v9 = v8;
            qword_1801653E8 = a1 + 16;
LABEL_9:
            *(_DWORD *)(a1 + 104) |= 0x40u;
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
