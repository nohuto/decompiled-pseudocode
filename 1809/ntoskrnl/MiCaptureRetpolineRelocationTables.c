/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x140854B34
 * Callers:
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlValidateRetpolineRelocation @ 0x1402F7670 (RtlValidateRetpolineRelocation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiFreeImageRetpolineContext @ 0x140651FC4 (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        __int16 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char *v7; // r15
  PVOID v8; // rax
  __int64 v9; // rdi
  UINT v10; // r14d
  int v11; // ebx
  unsigned int v12; // eax
  UINT v13; // esi
  char *v14; // r13
  __int64 v15; // r12
  __int64 **v16; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  UINT puResult; // [rsp+90h] [rbp+18h] BYREF

  LOWORD(puResult) = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &puResult);
  v9 = (__int64)a5;
  if ( v8 )
  {
    v12 = (_DWORD)v8 - (_DWORD)v7;
    *a5 = v12;
    if ( v12 > (unsigned int)v6 )
      goto LABEL_10;
  }
  else
  {
    *a5 = 0;
  }
  if ( v5 + 8 >= v5 && v5 + 8 <= v6 )
  {
    v20[0] = *(_QWORD *)&v7[v5];
    v10 = HIDWORD(v20[0]) + v5 + 8;
    if ( v10 >= (unsigned int)v5 && v10 <= (unsigned int)v6 )
    {
      if ( LODWORD(v20[0]) != 1 )
      {
        v11 = -1073741637;
LABEL_35:
        MiFreeImageRetpolineContext((_QWORD *)v9);
        return (unsigned int)v11;
      }
      v13 = v5 + 8;
      while ( 1 )
      {
        if ( v13 >= v10 )
        {
          v11 = 0;
          goto LABEL_34;
        }
        if ( (unsigned __int64)v13 + 12 > v10 )
          break;
        v14 = &v7[v13];
        v20[1] = v14;
        v21 = *(_QWORD *)v14;
        v15 = *((unsigned int *)v14 + 2);
        if ( RtlUIntAdd(v13, 0xCu, &puResult) < 0 )
          break;
        if ( RtlUIntAdd(puResult, v15, &puResult) < 0 )
          break;
        v13 = puResult;
        if ( puResult > v10 )
          break;
        if ( v21 == 3 )
        {
          v16 = (__int64 **)(v9 + 8);
          goto LABEL_26;
        }
        if ( v21 == 4 )
        {
          if ( !MiIsRetpolineEnabled() )
            goto LABEL_24;
          v16 = (__int64 **)(v9 + 16);
        }
        else
        {
          if ( v21 != 5 || !MiIsRetpolineEnabled() )
          {
LABEL_24:
            v16 = 0LL;
            goto LABEL_26;
          }
          v16 = (__int64 **)(v9 + 24);
        }
LABEL_26:
        if ( v16 )
        {
          if ( *v16 )
            break;
          PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v15 + 12, 0x7252694Du);
          *v16 = PoolWithTag;
          if ( !PoolWithTag )
          {
            v11 = -1073741670;
            goto LABEL_35;
          }
          memmove(PoolWithTag, v14, v15 + 12);
          v18 = *v16;
          *v18 = v21;
          *((_DWORD *)v18 + 2) = v15;
          v11 = RtlValidateRetpolineRelocation(*v16, a2, v20);
          if ( v11 < 0 )
            goto LABEL_34;
          *(_DWORD *)(v9 + 4) += LODWORD(v20[0]);
          v7 = a1;
        }
      }
    }
LABEL_10:
    v11 = -1073741701;
    goto LABEL_35;
  }
  v11 = -1073741701;
LABEL_34:
  if ( v11 < 0 )
    goto LABEL_35;
  return (unsigned int)v11;
}
