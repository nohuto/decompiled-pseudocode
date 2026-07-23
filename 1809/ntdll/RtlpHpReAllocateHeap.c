/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18001556C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegSizeInternal @ 0x180016158 (RtlpHpSegSizeInternal.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapReallocateEvent @ 0x180105F78 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, char *a3, unsigned __int64 a4, _QWORD *a5, _WORD *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  _DWORD *SharedData; // rcx
  __int64 v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // rax
  char *v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  bool v41; // zf
  int v42; // r10d
  char *v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+30h] [rbp-40h]
  _QWORD v46[6]; // [rsp+40h] [rbp-30h] BYREF
  int v47; // [rsp+B0h] [rbp+40h]
  int v48; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v49; // [rsp+C8h] [rbp+58h]

  v49 = a4;
  v6 = a4;
  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( !dword_18015F3E8 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = v10;
    if ( (v10 || (v11 = qword_1801634C8) != 0) && a4 > v11 )
    {
      v40 = *(_QWORD *)(a1 + 56);
      if ( v40 )
        RtlpLogHeapFailure(20, a1, 0, v40, v6, v10);
      return 0LL;
    }
  }
  memset(v46, 0, 0x28uLL);
  v12 = -1LL;
  v45 = v6;
  v46[3] = v6;
  if ( (_WORD)a3 )
  {
    v13 = 0;
  }
  else
  {
    v38 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((unsigned __int64)&a3[-qword_180166948] >> 20));
    if ( !v38 )
      goto LABEL_71;
    v13 = v38 - 1;
  }
  if ( v13 == 2 )
  {
LABEL_71:
    v17 = RtlpHpLargeAllocSize(a1, a3, v7, &v46[2]);
    goto LABEL_10;
  }
  v14 = 192LL * v13;
  v15 = RtlpHpSegDescriptorValidate(v14 + a1 + 256, (unsigned __int64)a3);
  if ( !v15 )
  {
    v18 = -1LL;
    goto LABEL_11;
  }
  v17 = RtlpHpSegSizeInternal((int)v14 + (int)a1 + 256, v15, (_DWORD)a3, v16, (__int64)&v46[2]);
LABEL_10:
  v6 = v46[3];
  v18 = v17;
  v45 = v46[3];
LABEL_11:
  v46[0] = v18;
  if ( v18 == -1LL )
    return v12;
  v47 = v7 & 0x10000000;
  v19 = v7 & 0x10000000 | 8;
  if ( !LODWORD(v46[2]) )
    v19 = v7 & 0x10000000;
  v20 = v18 + 16;
  if ( (v19 & 0x10000000) == 0 )
    v20 = v18;
  if ( (v19 & 0x20000F08) != 0 )
    v20 = ((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v21 = 1LL;
  if ( v20 )
    v21 = v20;
  if ( LODWORD(v46[2]) )
  {
    v33 = (__int64)&a3[v18 + 16];
    if ( (v19 & 0x10000000) == 0 )
      v33 = (__int64)&a3[v18];
    v22 = 16 * *(unsigned __int8 *)(((v33 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v21 += v22;
  }
  else
  {
    v22 = 0;
  }
  v46[1] = v21;
  v23 = v6 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v23 = v6;
  if ( (LODWORD(v46[2]) != 0 ? 8 : 0) != 0 )
    v23 = ((v23 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v24 = 1LL;
  if ( v23 )
    v24 = v23;
  v46[4] = v22 + v24;
  v25 = v49;
  if ( v46[4] < v49 )
    return v12;
  v26 = 0LL;
  if ( a6 )
  {
    v34 = RtlpHpSizeHeapInternal(a1, a3, v7, &v48);
    if ( v34 == -1 )
    {
      v26 = -1LL;
    }
    else
    {
      if ( a5 )
        *a5 = v34;
      if ( v48 )
      {
        v35 = &a3[v34];
        v36 = v35 + 16;
        if ( !v47 )
          v36 = v35;
        v26 = (unsigned __int64)(v36 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v26 )
        {
          v37 = *(_WORD *)v26;
LABEL_59:
          *a6 = v37;
          goto LABEL_32;
        }
      }
      else
      {
        v26 = 0LL;
      }
    }
    v37 = 0;
    goto LABEL_59;
  }
  if ( a5 )
    *a5 = v18;
LABEL_32:
  if ( v18 == v25 )
  {
    v12 = (__int64)a3;
LABEL_44:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v31 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v31 = 2147353472LL;
    if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v12 )
      RtlpLogHeapReallocateEvent(a1, v12, (_DWORD)a3, v46[0], v46[3], 3);
    return v12;
  }
  v48 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v26 || (v26 = RtlpHpExtrasGet(a1, a3, v7, 0LL)) != 0) && v26 != -1LL )
      {
        v41 = (*(_BYTE *)(v26 + 2) & 0xF) == 0;
        v42 = *(_BYTE *)(v26 + 2) & 0xF;
        v48 = v42;
        if ( !v41 && (int)RtlpCallInterceptRoutine(v42, a1, (_DWORD)a3, 5, v26 + 16) < 0 )
          return v12;
      }
    }
  }
  v27 = v7 & 0x12000003 | 0x1000000;
  if ( (_WORD)a3 )
  {
    v28 = 0;
  }
  else
  {
    v39 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((unsigned __int64)&a3[-qword_180166948] >> 20));
    if ( !v39 )
      goto LABEL_82;
    v28 = v39 - 1;
  }
  if ( v28 != 2 )
  {
    v29 = RtlpHpSegReAlloc(a1 + 192LL * v28 + 256, v27, a3, (__int64)v46);
    goto LABEL_39;
  }
LABEL_82:
  v29 = RtlpHpLargeReAlloc(a1, v27, a3, v46);
LABEL_39:
  v12 = v29;
  if ( v48 )
  {
    v43 = a3;
    if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v43 = (char *)v29;
    v44 = RtlpHpExtrasGet(a1, v43, v7, 0LL);
    RtlpCallInterceptRoutine(v48, a1, (_DWORD)v43, 6, v44 + 16);
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (v7 & 2) != 0 && v45 > v18 )
      memset((void *)(v12 + v18), 0, v45 - v18);
    if ( v47 )
    {
      *(_QWORD *)(v45 + v12) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v45 + v12 + 8) = 0xABABABABABABABABuLL;
    }
    goto LABEL_44;
  }
  return v12;
}
