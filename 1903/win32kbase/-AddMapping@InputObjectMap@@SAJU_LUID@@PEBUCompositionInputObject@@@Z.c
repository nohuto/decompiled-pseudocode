/*
 * XREFs of ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C7D14
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C0116860 (NtUserAddVisualIdentifier.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0038380 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?DeallocateBucket@InputObjectMap@@CAXPEAX0@Z @ 0x1C01A1670 (-DeallocateBucket@InputObjectMap@@CAXPEAX0@Z.c)
 *     ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x1C01C8060 (-AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z @ 0x1C01C808C (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::AddMapping(struct _LUID a1, struct _EX_PUSH_LOCK *Object)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  char *Bucket; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // edi
  __int64 v11; // r10
  _QWORD *v12; // r15
  _QWORD *v13; // r9
  __int64 v14; // rdx
  PVOID v15; // rcx
  struct _LUID *PoolWithTag; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v22; // [rsp+70h] [rbp+50h]
  __int64 v23; // [rsp+70h] [rbp+50h]
  __int64 v24; // [rsp+78h] [rbp+58h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v24, Object);
  v4 = 0;
  if ( !InputObjectMap::FindEntry(a1) )
  {
    v5 = 2 * ((unsigned int)dword_1C02187CC >> 5);
    if ( InputObjectMap::s_hashTable >= (unsigned int)v5 )
    {
      if ( (unsigned int)v5 < 4 )
        v5 = 4LL;
      Bucket = (char *)InputObjectMap::AllocateBucket(8LL * (unsigned int)v5, 0LL);
      if ( Bucket )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          v7 = -1;
          do
          {
            ++v7;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v7);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v8 = (unsigned int)v5;
        if ( Bucket > &Bucket[8 * v5] )
          v8 = 0LL;
        if ( v8 )
          memset64(Bucket, (unsigned __int64)&InputObjectMap::s_hashTable + 1, v8);
        v9 = dword_1C02187CC;
        v10 = 0;
        v11 = -1LL << (dword_1C02187CC & 0x1F);
        if ( (dword_1C02187CC & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v12 = qword_1C02187D0;
            while ( 1 )
            {
              v13 = (_QWORD *)v12[v10];
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              v12[v10] = *v13;
              v22 = v11 & v13[1];
              v14 = (37
                   * (BYTE6(v22)
                    + 37
                    * (BYTE5(v22)
                     + 37
                     * (BYTE4(v22)
                      + 37
                      * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                   + HIBYTE(v22)) & (unsigned int)(v5 - 1);
              *v13 = *(_QWORD *)&Bucket[8 * v14];
              *(_QWORD *)&Bucket[8 * v14] = v13;
            }
            v9 = dword_1C02187CC;
            ++v10;
          }
          while ( v10 < (unsigned int)dword_1C02187CC >> 5 );
        }
        v15 = qword_1C02187D0;
        qword_1C02187D0 = Bucket;
        dword_1C02187CC = (32 * v5) | v9 & 0x1F;
        if ( v15 )
          InputObjectMap::DeallocateBucket(v15, 0LL);
      }
      else if ( (dword_1C02187CC & 0xFFFFFFE0) == 0 )
      {
LABEL_26:
        v4 = -1073741670;
        goto LABEL_28;
      }
    }
    PoolWithTag = (struct _LUID *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x766E6355u);
    if ( PoolWithTag )
    {
      ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
      PoolWithTag[2] = a1;
      PoolWithTag[3] = (struct _LUID)Object;
      v17 = HIBYTE(a1.HighPart)
          + 37
          * (BYTE2(a1.HighPart)
           + 37
           * (BYTE1(a1.HighPart)
            + 37
            * (LOBYTE(a1.HighPart)
             + 37
             * (HIBYTE(a1.LowPart)
              + 37 * (BYTE2(a1.LowPart) + 37 * (BYTE1(a1.LowPart) + 37 * (LOBYTE(a1.LowPart) + 11623883LL)))))));
      PoolWithTag[1] = (struct _LUID)v17;
      v23 = v17 & (-1LL << (dword_1C02187CC & 0x1F));
      v18 = qword_1C02187D0;
      v19 = (HIBYTE(v23)
           + 37
           * (BYTE6(v23)
            + 37
            * (BYTE5(v23)
             + 37
             * (BYTE4(v23)
              + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))) & (((unsigned int)dword_1C02187CC >> 5) - 1);
      *PoolWithTag = *(struct _LUID *)((char *)qword_1C02187D0 + 8 * v19);
      v18[v19] = PoolWithTag;
      ++InputObjectMap::s_hashTable;
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v4 = -1073741811;
LABEL_28:
  ExReleasePushLockExclusiveEx(v24, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
