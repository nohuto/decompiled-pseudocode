/*
 * XREFs of SdbpCheckPackageAttributes @ 0x1408E8200
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpCheckUptoVersion @ 0x1407206D0 (SdbpCheckUptoVersion.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbpCheckFromVersion @ 0x1408EA358 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x1408EA398 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        ULONGLONG pullResult)
{
  unsigned int v6; // ebx
  int v9; // ebp
  unsigned __int64 v10; // rsi
  ULONGLONG *v11; // r15
  unsigned int FirstTag; // r10d
  ULONGLONG v13; // rax
  ULONGLONG v14; // r9
  char *v15; // r11
  ULONGLONG v16; // rdi
  ULONGLONG v17; // rdx
  unsigned __int16 v18; // ax
  WCHAR *StringTagPtr; // rax
  int v20; // eax
  unsigned __int64 QWORDTag; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(ULONGLONG **)(pullResult + 88);
  *a1 = 0;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_1404065B8 + v10));
    if ( FirstTag )
      break;
LABEL_35:
    v10 += 4LL;
    if ( v10 >= 0x28 )
    {
      *a1 = v9;
      return 1;
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  if ( v13 )
  {
    v15 = (char *)&unk_1404065B8;
    do
    {
      v16 = 0LL;
      if ( v14 < v13 )
      {
        if ( ULongLongMult(v11[1], v14, &pullResult) < 0 || (v17 = v11[5], v17 + pullResult < v17) )
          v16 = 0LL;
        else
          v16 = v17 + pullResult;
      }
      if ( *(_WORD *)v16 == *(_WORD *)&v15[v10 + 2] )
        break;
      v13 = v11[2];
      ++v14;
      v16 = 0LL;
    }
    while ( v14 < v13 );
    if ( v16 )
    {
      v18 = *(_WORD *)&v15[v10];
      if ( v18 == 16453 )
      {
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v6;
        v20 = DWORDTag == *(_DWORD *)(v16 + 8);
        goto LABEL_32;
      }
      if ( v18 != 20500 )
      {
        if ( v18 == 20501 )
          goto LABEL_26;
        if ( v18 == 20502 )
        {
LABEL_24:
          QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( QWORDTag == -1LL )
            return v6;
          v20 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v16 + 8));
LABEL_32:
          if ( !v9 || (v9 = 1, !v20) )
            v9 = 0;
          goto LABEL_35;
        }
        if ( v18 != 20503 )
        {
          if ( v18 != 20504 )
          {
            if ( v18 != 20505 )
            {
              if ( v18 <= 0x6028u )
                return v6;
              if ( v18 > 0x602Bu )
                return v6;
              StringTagPtr = (WCHAR *)SdbGetStringTagPtr(*(_QWORD *)(a2 + 8), FirstTag);
              if ( !StringTagPtr )
                return v6;
              v20 = AslStringPatternMatchW(StringTagPtr, *(WCHAR **)(v16 + 8));
              goto LABEL_32;
            }
            goto LABEL_24;
          }
LABEL_26:
          v22 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( v22 == -1 )
            return v6;
          v20 = SdbpCheckFromVersion(v22, *(_QWORD *)(v16 + 8));
          goto LABEL_32;
        }
      }
      v23 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
      if ( v23 == -1 )
        return v6;
      v20 = SdbpCheckVersion(v23, *(_QWORD *)(v16 + 8));
      goto LABEL_32;
    }
  }
  AslLogCallPrintf(1LL);
  return v6;
}
