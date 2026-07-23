/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x18008120C
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlAssert @ 0x1800EA560 (RtlAssert.c)
 */

__int64 __fastcall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(_BYTE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v6; // rax
  CHAR *v7; // r9
  ULONG v8; // r8d
  wchar_t **v9; // rsi
  wchar_t *v10; // rcx
  _WORD *v11; // rax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 0x20Cu, (PSTR)"This != NULL");
  if ( !a1[80] )
    goto LABEL_8;
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 && *(_QWORD *)(v2 + 8) )
  {
    v7 = "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v8 = 532;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 && *(_QWORD *)(v3 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v3 + 2) )
    {
      *(_WORD *)v3 = *(_WORD *)a1;
      v4 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v4 )
      {
        v6 = *((_QWORD *)a1 + 7);
LABEL_13:
        *v4 = v6;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v7 = (CHAR *)"rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v8 = 537;
LABEL_18:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v8, v7);
  }
  if ( v2 )
  {
    *(_OWORD *)v2 = *(_OWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 9);
    if ( v4 )
    {
      v6 = *((_QWORD *)a1 + 8);
      goto LABEL_13;
    }
  }
  else
  {
    v9 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL && *v9 )
    {
      v10 = (wchar_t *)*((_QWORD *)a1 + 3);
      if ( *v9 != v10 )
      {
        UnicodeString.Buffer = *v9;
        RtlFreeAnsiString(&UnicodeString);
        v10 = (wchar_t *)*((_QWORD *)a1 + 3);
      }
      *v9 = v10;
    }
    v11 = (_WORD *)*((_QWORD *)a1 + 3);
    if ( v11 )
      *v11 = 0;
  }
LABEL_8:
  memset(a1, 0, 0x58uLL);
  return 0LL;
}
