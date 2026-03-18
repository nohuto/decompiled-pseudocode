/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x1406D4770
 * Callers:
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14008E268 (MiIsRetpolineEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     RtlValidateRetpolineRelocation @ 0x14012B244 (RtlValidateRetpolineRelocation.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiFreeImageRetpolineContext @ 0x140644320 (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        char *a1,
        unsigned int a2,
        __int16 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  char *v7; // r15
  PVOID v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // edx
  char *v14; // r13
  __int64 v15; // r12
  unsigned int v16; // r14d
  __int64 **v17; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *v19; // rax
  int v20; // ebx
  __int64 v22; // [rsp+20h] [rbp-58h]
  ULONG v25; // [rsp+90h] [rbp+18h] BYREF

  LOWORD(v25) = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &v25);
  v9 = (__int64)a5;
  if ( v8 )
  {
    v10 = (_DWORD)v8 - (_DWORD)v7;
    *a5 = v10;
    if ( v10 > (unsigned int)v6 )
      goto LABEL_32;
  }
  else
  {
    *a5 = 0;
  }
  if ( v5 + 8 >= v5 && v5 + 8 <= v6 )
  {
    v11 = *(_QWORD *)&v7[v5];
    v12 = HIDWORD(v11) + v5 + 8;
    if ( v12 >= (unsigned int)v5 && v12 <= (unsigned int)v6 )
    {
      if ( (_DWORD)v11 != 1 )
      {
        v20 = -1073741637;
        goto LABEL_33;
      }
      v13 = v5 + 8;
      while ( 1 )
      {
        if ( v13 >= v12 )
        {
          v20 = 0;
          goto LABEL_23;
        }
        if ( (unsigned __int64)v13 + 12 > v12 )
          break;
        v14 = &v7[v13];
        v22 = *(_QWORD *)v14;
        v15 = *((unsigned int *)v14 + 2);
        v16 = v15 + v13 + 12;
        if ( v16 < v13 || v16 > v12 )
          break;
        if ( v22 == 3 )
        {
          v17 = (__int64 **)(v9 + 8);
        }
        else if ( v22 == 4 )
        {
          if ( !MiIsRetpolineEnabled() )
            goto LABEL_29;
          v17 = (__int64 **)(v9 + 16);
        }
        else
        {
          if ( v22 != 5 || !MiIsRetpolineEnabled() )
          {
LABEL_29:
            v17 = 0LL;
            goto LABEL_17;
          }
          v17 = (__int64 **)(v9 + 24);
        }
LABEL_17:
        if ( v17 )
        {
          if ( *v17 )
            break;
          PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v15 + 12, 0x7252694Du);
          *v17 = PoolWithTag;
          if ( !PoolWithTag )
          {
            v20 = -1073741670;
            goto LABEL_33;
          }
          memmove(PoolWithTag, v14, v15 + 12);
          v19 = *v17;
          *v19 = v22;
          *((_DWORD *)v19 + 2) = v15;
          v20 = RtlValidateRetpolineRelocation(*v17, a2, &v25);
          if ( v20 < 0 )
            goto LABEL_23;
          *(_DWORD *)(v9 + 4) += v25;
          v13 = v16;
          v7 = a1;
        }
        else
        {
          v13 = v16;
        }
      }
    }
LABEL_32:
    v20 = -1073741701;
    goto LABEL_33;
  }
  v20 = -1073741701;
LABEL_23:
  if ( v20 < 0 )
LABEL_33:
    MiFreeImageRetpolineContext((_QWORD *)v9);
  return (unsigned int)v20;
}
