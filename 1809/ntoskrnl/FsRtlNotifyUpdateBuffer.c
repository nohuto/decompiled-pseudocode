/*
 * XREFs of FsRtlNotifyUpdateBuffer @ 0x1406A2D54
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlOemToUnicodeN @ 0x1406F83B0 (RtlOemToUnicodeN.c)
 */

char __fastcall FsRtlNotifyUpdateBuffer(__int64 a1, int a2, PCCH *a3, PCCH *a4, PCCH *a5, char a6, int a7)
{
  unsigned int v10; // edi
  ULONG v11; // edx
  unsigned __int16 v12; // cx
  bool v13; // zf
  WCHAR *v14; // rcx
  const void **v15; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  ULONG v19; // ecx
  __int64 v20; // rdi
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = a2;
  v11 = a7 - 12;
  if ( a7 == 12 )
    return 0;
  *(_DWORD *)(a1 + 8) = v11;
  v12 = *(_WORD *)a3;
  if ( !a6 )
  {
    if ( v12 )
    {
      RtlOemToUnicodeN((PWCH)(a1 + 12), v11, BytesInUnicodeString, a3[1], v12);
      v19 = BytesInUnicodeString[0];
      *(_WORD *)(BytesInUnicodeString[0] + a1 + 12) = 92;
      v10 = v19 + 2;
      v12 = *(_WORD *)a3;
    }
    v13 = v12 == 0;
    v14 = (WCHAR *)(v10 + a1 + 12);
    if ( !v13 )
    {
      RtlOemToUnicodeN(v14, *(_DWORD *)(a1 + 8), BytesInUnicodeString, a4[1], *(unsigned __int16 *)a4);
      if ( a5 )
      {
        v20 = BytesInUnicodeString[0] + v10;
        *(_WORD *)(v20 + a1 + 12) = 58;
        RtlOemToUnicodeN(
          (PWCH)(a1 + (unsigned int)v20 + 14LL),
          *(_DWORD *)(a1 + 8),
          BytesInUnicodeString,
          a5[1],
          *(unsigned __int16 *)a5);
      }
      return 1;
    }
    v15 = (const void **)a5;
    goto LABEL_7;
  }
  if ( v12 )
  {
    memmove((void *)(a1 + 12), a3[1], v12);
    v17 = *(unsigned __int16 *)a3;
    if ( *(unsigned int *)(a1 + 8) < (unsigned __int64)(v17 + 2) )
      return 0;
    *(_WORD *)(v17 + a1 + 12) = 92;
    v10 = *(unsigned __int16 *)a3 + 2;
  }
  memmove((void *)(v10 + a1 + 12), a4[1], *(unsigned __int16 *)a4);
  v15 = (const void **)a5;
  if ( a5 )
  {
    v18 = *(unsigned __int16 *)a4 + v10;
    *(_WORD *)(v18 + a1 + 12) = 58;
    v14 = (WCHAR *)((unsigned int)v18 + a1 + 14);
LABEL_7:
    memmove(v14, v15[1], *(unsigned __int16 *)v15);
  }
  return 1;
}
