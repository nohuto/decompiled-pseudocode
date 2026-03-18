/*
 * XREFs of WmipIncludeStaticNames @ 0x1408F052C
 * Callers:
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400EDE70 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     WmipFindGEByGuid @ 0x1405C0B60 (WmipFindGEByGuid.c)
 *     WmipReferenceEntry @ 0x140695CE4 (WmipReferenceEntry.c)
 *     WmipInsertStaticNames @ 0x140696404 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1406965EC (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x140696B78 (WmipUnreferenceEntry.c)
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
  __int64 v15; // r12
  const wchar_t *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rax
  unsigned int v21; // r14d
  unsigned int v22; // r14d
  unsigned int *v23; // rax
  unsigned int v24; // r15d
  _WORD *v25; // r14
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+34h] [rbp-54h]
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
            v30 = v14;
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
                v29 = v21;
                if ( v19 <= ~v21 )
                {
                  v22 = v19 + v21;
                  v23 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v22, 0x70696D57u);
                  v13 = v23;
                  if ( v23 )
                  {
                    memmove(v23, v3, *v3);
                    v24 = v19 - 2;
                    *v13 = v22;
                    v13[12] = v29;
                    v25 = (_WORD *)((char *)v13 + v29);
                    v26 = *(_DWORD *)(v4 + 16);
                    if ( (v26 & 2) != 0 )
                    {
                      *v25 = v24;
                      RtlStringCbCopyW(v25 + 1, v24, v16);
                    }
                    else
                    {
                      if ( (v26 & 0x20000) != 0 )
                        v13[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", (unsigned int)(**(_DWORD **)(v4 + 88) + v30));
                      RtlStringCbCopyW(v25 + 1, v24, v16);
                      RtlStringCbCatW(v25 + 1, v24, pszDest);
                      do
                        ++v17;
                      while ( v25[v17 + 1] );
                      *v25 = 2 * (v17 + 1);
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
  v27 = v3[11];
  if ( (v27 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v27 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
LABEL_41:
  if ( v4 )
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v4);
  return v3;
}
