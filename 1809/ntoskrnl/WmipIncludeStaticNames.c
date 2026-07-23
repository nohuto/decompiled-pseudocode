/*
 * XREFs of WmipIncludeStaticNames @ 0x1408B4998
 * Callers:
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     WmipInsertStaticNames @ 0x14059E964 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14059EB44 (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x1406137A0 (WmipFindGEByGuid.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 */

unsigned int *__fastcall WmipIncludeStaticNames(unsigned int *Src, unsigned int a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  volatile signed __int64 *GEByGuid; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int *PoolWithTag; // rax
  unsigned int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  const wchar_t *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rax
  unsigned int v21; // r12d
  unsigned int *v22; // rax
  _WORD *v23; // r14
  unsigned int v24; // r15d
  int v25; // eax
  unsigned int v26; // eax
  int v28; // [rsp+30h] [rbp-58h]
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  v3 = Src;
  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    GEByGuid = WmipFindGEByGuid((_QWORD *)Src + 3, 0);
    if ( GEByGuid )
    {
      v6 = v3[1];
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      for ( i = *((_QWORD *)GEByGuid + 7); (volatile signed __int64 *)i != GEByGuid + 7; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          WmipReferenceEntry(i);
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          if ( (v3[11] & 1) != 0 )
          {
            if ( a2 + 3 >= a2 )
            {
              v9 = (a2 + 3) & 0xFFFFFFFC;
              v10 = WmipStaticInstanceNameSize(v4);
              if ( v10 <= ~v9 )
              {
                v11 = v10 + v9;
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v11, 0x70696D57u);
                v13 = PoolWithTag;
                if ( PoolWithTag )
                {
                  memmove(PoolWithTag, v3, *v3);
                  WmipInsertStaticNames(v13, v11, v4);
LABEL_34:
                  v3 = v13;
                  goto LABEL_41;
                }
              }
            }
          }
          else
          {
            v14 = v3[13];
            v28 = v14;
            if ( (unsigned int)v14 < *(_DWORD *)(v4 + 72) )
            {
              v15 = *(_QWORD *)(v4 + 88);
              if ( (v8 & 2) != 0 )
              {
                v16 = *(const wchar_t **)(v15 + 8 * v14);
                v17 = -1LL;
                v18 = -1LL;
                do
                  ++v18;
                while ( v16[v18] );
                v19 = 2 * v18 + 4;
              }
              else
              {
                v16 = (const wchar_t *)(v15 + 4);
                v17 = -1LL;
                v20 = -1LL;
                do
                  ++v20;
                while ( v16[v20] );
                v19 = 2 * v20 + 16;
              }
              if ( a2 + 1 >= a2 )
              {
                v21 = (a2 + 1) & 0xFFFFFFFE;
                if ( v19 <= ~v21 )
                {
                  v22 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v21 + v19, 0x70696D57u);
                  v13 = v22;
                  if ( v22 )
                  {
                    memmove(v22, v3, *v3);
                    *v13 = v21 + v19;
                    v23 = (_WORD *)((char *)v13 + v21);
                    v13[12] = v21;
                    v24 = v19 - 2;
                    v25 = *(_DWORD *)(v4 + 16);
                    if ( (v25 & 2) != 0 )
                    {
                      *v23 = v24;
                      RtlStringCbCopyW(v23 + 1, v24, v16);
                    }
                    else
                    {
                      if ( (v25 & 0x20000) != 0 )
                        v13[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", (unsigned int)(**(_DWORD **)(v4 + 88) + v28));
                      RtlStringCbCopyW(v23 + 1, v24, v16);
                      RtlStringCbCatW(v23 + 1, v24, pszDest);
                      do
                        ++v17;
                      while ( v23[v17 + 1] );
                      *v23 = 2 * (v17 + 1);
                    }
                    goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v26 = v3[11];
  if ( (v26 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v26 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
LABEL_41:
  if ( v4 )
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v4);
  return v3;
}
