/*
 * XREFs of SdbQueryDataExTagID @ 0x140723C24
 * Callers:
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int DWORDTag; // r12d
  const wchar_t *v8; // rbx
  __int64 v11; // rax
  size_t v12; // r15
  wchar_t *v13; // rax
  wchar_t *Str1; // r14
  wchar_t *v15; // rax
  wchar_t *v16; // rbp
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v21; // ax
  unsigned int v22; // r14d
  unsigned int v23; // ebx
  size_t v25; // r14
  __int64 v26; // rax
  wchar_t *P; // [rsp+30h] [rbp-48h]
  __int64 Src; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  Src = a3;
  DWORDTag = 0;
  v8 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
    return 87;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( aPolicy[v11] );
  v12 = (int)v11 + 1;
  v13 = (wchar_t *)AslAlloc(a1, 2 * v12);
  P = v13;
  if ( !v13 )
  {
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v13;
  while ( 1 )
  {
    v15 = wcschr(v8, 0x5Cu);
    v16 = v15;
    if ( v15 )
    {
      v25 = v15 - v8;
      if ( RtlStringCchCopyNW(P, v12, v8, v25) < 0 )
      {
LABEL_62:
        v23 = 122;
        goto LABEL_33;
      }
      P[v25] = 0;
      v8 = v16 + 1;
      Str1 = P;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v12, v8) < 0 )
        goto LABEL_62;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_45;
  }
  if ( !FirstNamedTag )
  {
LABEL_45:
    v23 = 1168;
    goto LABEL_33;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  else
    AslLogCallPrintf(1LL);
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_54;
    case 1:
      v21 = 24606;
      break;
    case 3:
      v21 = -28667;
      break;
    case 4:
      v21 = 16409;
      break;
    case 11:
      v21 = 20487;
      break;
    default:
      AslLogCallPrintf(1LL);
      v23 = 1358;
      goto LABEL_33;
  }
  v22 = SdbFindFirstTag(a1, a2, v21);
  if ( !v22 )
  {
LABEL_44:
    AslLogCallPrintf(1LL);
    goto LABEL_45;
  }
  switch ( DWORDTag )
  {
    case 1:
      StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v22);
      if ( StringTagPtr )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)StringTagPtr + v26) );
        TagDataSize = 2 * v26 + 2;
        goto LABEL_54;
      }
      goto LABEL_44;
    case 3:
      TagDataSize = SdbGetTagDataSize(a1, v22);
      StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v22);
      if ( StringTagPtr )
        goto LABEL_54;
      goto LABEL_44;
    case 4:
      LODWORD(Src) = SdbReadDWORDTag(a1, v22, 0);
      StringTagPtr = &Src;
      TagDataSize = 4;
      goto LABEL_23;
  }
  Src = SdbReadQWORDTag(a1, v22, 0LL);
  StringTagPtr = &Src;
  TagDataSize = 8;
LABEL_54:
  v23 = 0;
  if ( TagDataSize )
  {
LABEL_23:
    if ( a5 && a6 && *a6 >= TagDataSize )
    {
      memmove(a5, StringTagPtr, *a6);
      v23 = 0;
    }
    else
    {
      v23 = 122;
    }
  }
  if ( a6 )
    *a6 = TagDataSize;
  if ( v29 )
    *v29 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_33:
  ExFreePoolWithTag(P, 0x74705041u);
  return v23;
}
