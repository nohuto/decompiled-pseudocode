/*
 * XREFs of SdbpCheckMatchingDir @ 0x1408E6F60
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x140723818 (SdbpInitializeSearchDBContext.c)
 *     AslDoesDirectoryExistNtPath @ 0x1408EA820 (AslDoesDirectoryExistNtPath.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *P)
{
  unsigned int *v7; // r12
  int v8; // esi
  unsigned int DoesDirectoryExistNtPath; // ebp
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  _WORD *v12; // r15
  __int64 v13; // r14
  const WCHAR *v14; // rdi
  int *v15; // r13
  WCHAR *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax

  v7 = a1;
  v8 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v12 = (_WORD *)StringTagPtr;
    if ( !StringTagPtr )
      goto LABEL_3;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(StringTagPtr + 2 * v13) );
    v14 = P;
    if ( (*(_DWORD *)P & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext((__int64)P) )
    {
      v15 = (int *)*((_QWORD *)v14 + 9);
      if ( *v15 <= 0 )
      {
LABEL_15:
        v17 = (unsigned __int16)*v12;
        LOWORD(v17) = v17 - 37;
        if ( (unsigned __int16)v17 <= 0x37u )
        {
          v18 = 0x80000000000201LL;
          if ( _bittest64(&v18, v17) )
            *((_DWORD *)v14 + 20) = 1;
        }
      }
      else
      {
        while ( 1 )
        {
          P = 0LL;
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, (__int64)v14, v12, v13, (__int64)&v15[12 * v8 + 2], &P) )
            break;
          v16 = (WCHAR *)P;
          DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(P);
          if ( v16 )
            ExFreePoolWithTag(v16, 0x74705041u);
          if ( DoesDirectoryExistNtPath )
          {
            if ( v8 > 0 )
              *((_DWORD *)v14 + 20) = 1;
LABEL_14:
            v7 = a1;
            goto LABEL_15;
          }
          if ( ++v8 >= *v15 )
            goto LABEL_14;
        }
        AslLogCallPrintf(1LL);
        v7 = a1;
      }
    }
    else
    {
LABEL_3:
      AslLogCallPrintf(1LL);
    }
  }
  result = DoesDirectoryExistNtPath;
  *v7 = DoesDirectoryExistNtPath;
  return result;
}
