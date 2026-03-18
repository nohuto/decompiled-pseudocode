/*
 * XREFs of FsRtlNotifyUpdateBuffer @ 0x1406C2F94
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlOemToUnicodeN @ 0x140712100 (RtlOemToUnicodeN.c)
 */

char __fastcall FsRtlNotifyUpdateBuffer(__int64 a1, int a2, PCCH *a3, PCCH *a4, PCCH *a5, char a6, int a7)
{
  __int64 v10; // rdi
  ULONG v11; // edx
  unsigned __int16 v12; // ax
  const void **v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r8
  ULONG v17; // ecx
  __int64 v18; // rdi
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  LODWORD(v10) = 0;
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
      v17 = BytesInUnicodeString[0];
      *(_WORD *)(BytesInUnicodeString[0] + a1 + 12) = 92;
      LODWORD(v10) = v17 + 2;
      if ( *(_WORD *)a3 )
      {
        RtlOemToUnicodeN(
          (PWCH)((unsigned int)v10 + a1 + 12),
          *(_DWORD *)(a1 + 8),
          BytesInUnicodeString,
          a4[1],
          *(unsigned __int16 *)a4);
        if ( a5 )
        {
          v18 = BytesInUnicodeString[0] + (unsigned int)v10;
          *(_WORD *)(v18 + a1 + 12) = 58;
          RtlOemToUnicodeN(
            (PWCH)(a1 + (unsigned int)v18 + 14LL),
            *(_DWORD *)(a1 + 8),
            BytesInUnicodeString,
            a5[1],
            *(unsigned __int16 *)a5);
        }
        return 1;
      }
    }
    v13 = (const void **)a5;
    v14 = a1 + 12;
    goto LABEL_5;
  }
  if ( v12 )
  {
    memmove((void *)(a1 + 12), a3[1], v12);
    v16 = *(unsigned __int16 *)a3;
    if ( *(unsigned int *)(a1 + 8) < (unsigned __int64)(v16 + 2) )
      return 0;
    *(_WORD *)(v16 + a1 + 12) = 92;
    LODWORD(v10) = *(unsigned __int16 *)a3 + 2;
  }
  memmove((void *)((unsigned int)v10 + a1 + 12), a4[1], *(unsigned __int16 *)a4);
  v13 = (const void **)a5;
  if ( a5 )
  {
    v10 = *(unsigned __int16 *)a4 + (unsigned int)v10;
    *(_WORD *)(v10 + a1 + 12) = 58;
    v14 = a1 + 14;
LABEL_5:
    memmove((void *)((unsigned int)v10 + v14), v13[1], *(unsigned __int16 *)v13);
  }
  return 1;
}
