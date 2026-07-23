/*
 * XREFs of RtlpHpFreeHeap @ 0x180040830
 * Callers:
 *     RtlpHpReallocMove @ 0x180045F38 (RtlpHpReallocMove.c)
 *     RtlpHpMetadataFree @ 0x18004F730 (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpSizeHeap @ 0x180040320 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSizeHeapInternal @ 0x180046C60 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x180046D10 (RtlpHpExtrasGet.c)
 *     RtlpLfhBucketUsageUpdate @ 0x1800488A4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE14 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180103550 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  int v6; // r15d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  _WORD *v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 DescriptorValidateSafe; // rbx
  char v19; // dl
  unsigned int v20; // ebp
  char v21; // dl
  unsigned __int8 v22; // dl
  char v23; // cl
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int64 v26; // rdx
  _DWORD *SharedData; // rcx
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int16 v35; // ax
  char v36; // al
  __int64 v37; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v8 = a3 | a1[5] & 0x11000001;
  v9 = 0;
  v10 = a1[55];
  if ( v10 )
    LOBYTE(v9) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = a5;
  v12 = v8 | 1;
  v13 = 0LL;
  if ( !v9 )
    v12 = v8;
  if ( a5 )
  {
    v13 = RtlpHpExtrasGet(a1, a2, v12);
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v35 = 0;
    else
      v35 = *(_WORD *)v13;
    *v11 = v35;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v12, 0LL);
  }
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      if ( (v13 || (v13 = RtlpHpExtrasGet(a1, a2, v12)) != 0) && v13 != -1 )
      {
        v36 = *(_BYTE *)(v13 + 2);
        if ( (v36 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v36 & 0xF, (_DWORD)a1, a2, 3, v13 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) == 0 || RtlpHpSizeHeap((__int64)a1, a2, v12) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v14 = 0;
    }
    else
    {
      v32 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_180166A68) >> 20));
      if ( !v32 || (v14 = v32 - 1, v14 == 2) )
      {
        v20 = RtlpHpLargeFree(a1, a2, v12) != 0;
        if ( RtlGetCurrentServiceSessionId() )
          v33 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v33 = 2147353472LL;
        if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v20 )
          RtlpLogHeapFreeEvent(a1, a2, 3LL);
        return v20;
      }
    }
    v15 = 48LL * v14;
    v16 = (__int64)&a1[v15 + 64];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&a1[v15 + 64], a2);
    }
    else
    {
      v17 = a2 & *(_QWORD *)v16;
      if ( (v16 ^ RtlpHpHeapGlobals ^ v17 ^ *(_QWORD *)(v17 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v17 + 32 * ((unsigned __int64)(unsigned int)(a2 - v17) >> *(_BYTE *)(v16 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v19 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v19 & 1) != 0 )
      {
        v20 = 1;
        if ( (v19 & 2) != 0 )
        {
          v22 = v19 & 0xC;
          if ( v22 >= 8u || (((1 << *(_BYTE *)(v16 + 8)) - 1) & a2) == 0 )
          {
LABEL_21:
            v23 = *(_BYTE *)(v16 + 8);
            v24 = DescriptorValidateSafe & *(_QWORD *)v16;
            if ( a2 <= v24 + ((DescriptorValidateSafe - v24) >> 5 << v23) )
            {
              RtlpHpSegPageRangeShrink(v16, DescriptorValidateSafe, 0, v12);
              if ( RtlGetCurrentServiceSessionId() )
                v34 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v34 = 2147353472LL;
              if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v16 + 56), a2, 3LL);
            }
            else
            {
              v25 = v22 == 8;
              v26 = v24 + ((DescriptorValidateSafe - v24) >> 5 << v23);
              if ( v25 )
              {
                v20 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v16 + 24), v26, a2, v12);
              }
              else
              {
                v20 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v16 + 32), v26, a2, v12, (unsigned int *)&v37);
                if ( v20 )
                {
                  v30 = *(_QWORD *)(v16 + 24);
                  if ( (unsigned int)v37 <= (unsigned int)*(unsigned __int16 *)(v30 + 60) - 16 )
                  {
                    v31 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v37 + 15) >> 4];
                    if ( (*(_QWORD *)(v30 + 8 * v31 + 128) & 1) != 0 )
                      RtlpLfhBucketUsageUpdate(v30, v31, 0LL);
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v28 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v28 = 2147353472LL;
              if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( v20 )
                {
                  LOBYTE(v6) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
                  RtlpLogHeapFreeEvent(*(_QWORD *)(v16 + 56), a2, (unsigned int)(v6 + 2));
                }
              }
            }
            return v20;
          }
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v21 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v21 & 3) == 3 )
          {
            v22 = v21 & 0xC;
            if ( v22 >= 8u )
              goto LABEL_21;
          }
        }
      }
    }
    RtlpLogHeapFailure(9, *(_QWORD *)(v16 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
  return 0LL;
}
