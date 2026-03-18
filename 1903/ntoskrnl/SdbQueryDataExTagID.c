/*
 * XREFs of SdbQueryDataExTagID @ 0x140921C40
 * Callers:
 *     SdbQueryDataEx @ 0x140921B9C (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140153F64 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140153FE8 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x14070BF64 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14070C490 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x14074B614 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 *     SdbFindFirstNamedTag @ 0x1409240FC (SdbFindFirstNamedTag.c)
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
  unsigned int v11; // ebx
  __int64 v12; // rax
  size_t v13; // r15
  wchar_t *v14; // rax
  wchar_t *Str1; // r14
  wchar_t *v16; // rax
  wchar_t *v17; // rbp
  size_t v18; // r14
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v23; // ax
  unsigned int v24; // r14d
  __int64 v25; // rax
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  QWORDTag = a3;
  DWORDTag = 0;
  v8 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
    return 87;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( aPolicy[v12] );
  v13 = (int)v12 + 1;
  v14 = (wchar_t *)AslAlloc(a1, 2 * v13);
  pszDest = v14;
  if ( !v14 )
  {
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v14;
  while ( 1 )
  {
    v16 = wcschr(v8, 0x5Cu);
    v17 = v16;
    if ( v16 )
    {
      v18 = v16 - v8;
      if ( RtlStringCchCopyNW(pszDest, v13, v8, v18) < 0 )
      {
LABEL_58:
        v11 = 122;
        goto LABEL_59;
      }
      pszDest[v18] = 0;
      v8 = v17 + 1;
      Str1 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v13, v8) < 0 )
        goto LABEL_58;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_19;
  }
  if ( !FirstNamedTag )
  {
LABEL_19:
    v11 = 1168;
    goto LABEL_59;
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
LABEL_39:
      v11 = 0;
      if ( !TagDataSize )
        goto LABEL_52;
      goto LABEL_40;
    case 1:
      v23 = 24606;
      break;
    case 3:
      v23 = -28667;
      break;
    case 4:
      v23 = 16409;
      break;
    case 11:
      v23 = 20487;
      break;
    default:
      AslLogCallPrintf(1LL);
      v11 = 1358;
      goto LABEL_59;
  }
  v24 = SdbFindFirstTag(a1, a2, v23);
  if ( !v24 )
  {
LABEL_34:
    AslLogCallPrintf(1LL);
    goto LABEL_19;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v24);
    if ( !StringTagPtr )
      goto LABEL_34;
    v25 = -1LL;
    do
      ++v25;
    while ( *((_WORD *)StringTagPtr + v25) );
    TagDataSize = 2 * v25 + 2;
    goto LABEL_39;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v24);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v24);
    if ( !StringTagPtr )
      goto LABEL_34;
    goto LABEL_39;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v24, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_39;
  }
  LODWORD(QWORDTag) = SdbReadDWORDTag(a1, v24, 0);
  StringTagPtr = &QWORDTag;
  TagDataSize = 4;
LABEL_40:
  if ( a5 && a6 && *a6 >= TagDataSize )
  {
    memmove(a5, StringTagPtr, *a6);
    v11 = 0;
  }
  else
  {
    v11 = 122;
  }
LABEL_52:
  if ( a6 )
    *a6 = TagDataSize;
  if ( v29 )
    *v29 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_59:
  ExFreePoolWithTag(pszDest, 0x74705041u);
  return v11;
}
