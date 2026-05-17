/*
 * XREFs of RtlpHpFreeHeap @ 0x180018FF0
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpReallocMove @ 0x18010CA98 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  int v6; // r15d
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  _WORD *v12; // r14
  unsigned int v13; // esi
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 DescriptorValidateSafe; // rbx
  char v20; // dl
  unsigned int v21; // r14d
  char v22; // dl
  unsigned __int8 v23; // dl
  char v24; // cl
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  _DWORD *SharedData; // rcx
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int16 v38; // ax
  char v39; // al
  __int16 v40; // [rsp+62h] [rbp+Ah]
  unsigned int v41; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v9 = a3 | a1[5] & 0x11000001;
  v10 = 0;
  v11 = a1[55];
  if ( v11 )
    LOBYTE(v10) = v11 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v12 = a5;
  v13 = v9 | 1;
  v14 = 0LL;
  if ( !v10 )
    v13 = v9;
  if ( a5 )
  {
    v14 = RtlpHpExtrasGet(a1, a2, v13, a4);
    if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v38 = 0;
    else
      v38 = *(_WORD *)v14;
    *v12 = v38;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v13, 0LL);
  }
  if ( (v13 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      if ( (v14 || (v14 = RtlpHpExtrasGet(a1, a2, v13, a4)) != 0) && v14 != -1 )
      {
        v39 = *(_BYTE *)(v14 + 2);
        if ( (v39 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v39 & 0xF, (_DWORD)a1, a2, 3, v14 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) == 0 || RtlpHpSizeHeap((__int64)a1, a2, v13) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v15 = 0;
    }
    else
    {
      v35 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((a2 - qword_180166948) >> 20));
      if ( !v35 || (v15 = v35 - 1, v15 == 2) )
      {
        v21 = RtlpHpLargeFree(a1, a2, v13) != 0;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v36 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v36 = 2147353472LL;
        if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v21 )
          RtlpLogHeapFreeEvent(a1, a2, 3LL);
        return v21;
      }
    }
    v16 = 48LL * v15;
    v17 = (unsigned __int64)&a1[v16 + 64];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&a1[v16 + 64], a2);
    }
    else
    {
      v18 = a2 & *(_QWORD *)v17;
      if ( (v17 ^ RtlpHpHeapGlobals ^ v18 ^ *(_QWORD *)(v18 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v18 + 32 * ((unsigned __int64)(unsigned int)(a2 - v18) >> *(_BYTE *)(v17 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v20 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v20 & 1) != 0 )
      {
        v21 = 1;
        if ( (v20 & 2) != 0 )
        {
          v23 = v20 & 0xC;
          if ( v23 >= 8u || (((1 << *(_BYTE *)(v17 + 8)) - 1) & a2) == 0 )
          {
LABEL_21:
            v24 = *(_BYTE *)(v17 + 8);
            v25 = DescriptorValidateSafe & *(_QWORD *)v17;
            if ( a2 <= v25 + ((DescriptorValidateSafe - v25) >> 5 << v24) )
            {
              RtlpHpSegPageRangeShrink(v17, DescriptorValidateSafe, 0LL, v13);
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v37 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v37 = 2147353472LL;
              if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v17 + 56), a2, 3LL);
            }
            else
            {
              v26 = v23 == 8;
              v27 = v25 + ((DescriptorValidateSafe - v25) >> 5 << v24);
              if ( v26 )
              {
                v21 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v17 + 24), v27, a2, v13);
              }
              else
              {
                v21 = RtlpHpVsContextFree(*(_QWORD *)(v17 + 32), v27, a2, v13, (__int64)&v41);
                if ( v21 )
                {
                  v31 = *(_QWORD *)(v17 + 24);
                  if ( v41 <= (unsigned int)*(unsigned __int16 *)(v31 + 60) - 16 )
                  {
                    v32 = RtlpLfhBucketIndexMap[(unsigned __int64)(v41 + 15) >> 4];
                    if ( (*(_QWORD *)(v31 + 8 * v32 + 128) & 1) != 0 )
                    {
                      do
                      {
                        v40 = WORD1(*(_QWORD *)(v31 + 8 * v32 + 128));
                        v34 = *(_QWORD *)(v31 + 8 * v32 + 128);
                        a5 = (_WORD *)v34;
                        v33 = v34;
                        if ( (v34 & 1) == 0 )
                          break;
                        if ( WORD1(a5) > 1u )
                        {
                          WORD1(a5) = v40 - 1;
                          v34 = (signed __int64)a5;
                        }
                      }
                      while ( v33 != _InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v31 + 8 * v32 + 128),
                                       v34,
                                       v33) );
                    }
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v29 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v29 = 2147353472LL;
              if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( v21 )
                {
                  LOBYTE(v6) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v17 + 56), a2, (unsigned int)(v6 + 2));
                }
              }
            }
            return v21;
          }
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v22 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v22 & 3) == 3 )
          {
            v23 = v22 & 0xC;
            if ( v23 >= 8u )
              goto LABEL_21;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v17 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
  return 0LL;
}
