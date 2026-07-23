/*
 * XREFs of PopRestoreHiberContext @ 0x14056A770
 * Callers:
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 * Callees:
 *     IoNotifyDump @ 0x1401446FC (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x1401447A4 (IoInitializeDumpStack.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x14057DDB8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x14094F81C (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // rdx
  _DWORD *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  int v24; // eax
  char v25; // cl
  unsigned __int64 v26; // rax
  int v27; // eax
  ULONG_PTR v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void (*v32)(void); // rax
  __int64 v33; // rax
  _QWORD v34[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+8h]

  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return result;
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)Number << 7) + 80) = 0LL;
  if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_14043D5C8 = 0;
    v23 = __rdtsc();
    if ( Address )
    {
      v24 = BgLibraryInitialize(Address, 0xFFFFFFFFLL);
      v25 = byte_14043D5C8;
      if ( v24 >= 0 )
        v25 = 1;
      byte_14043D5C8 = v25;
    }
    v26 = __rdtsc();
    qword_140418DA0 += (((unsigned __int64)HIDWORD(v26) << 32) | (unsigned int)v26) - v23;
  }
  if ( !Number )
  {
    v5 = 0LL;
    v6 = *(_QWORD **)(BugCheckParameter3 + 200);
    v35 = __rdtsc();
    if ( v6[11] == v6[69] )
      v5 = v6[72];
    *(_QWORD *)(BugCheckParameter3 + 400) = v5;
    v7 = qword_140418958;
    v8 = *(_DWORD *)(BugCheckParameter3 + 280);
    v9 = *(_QWORD *)(BugCheckParameter3 + 272);
    memset(qword_140418958, 0, 0x40uLL);
    v7[6] = 0;
    *(_QWORD *)v7 = v9;
    v7[2] = v8;
    *((_QWORD *)v7 + 2) = v5;
    *(_BYTE *)(BugCheckParameter3 + 4) = 1;
    IoNotifyDump(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 400) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = v34;
      v34[0] = qword_1404188D8;
      v34[1] = qword_1404188D8;
      v34[2] = 0LL;
      ((void (__fastcall *)(_QWORD))off_1403FF598[0])(0LL);
      v27 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v28 = v27;
      if ( v27 < 0 || PopSimulateHiberBugcheck == 4 )
      {
        PopCheckpointSystemSleep(0x1Cu);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v28, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v29 = __rdtsc();
      v10 = v35;
      qword_140418D80 = (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v35;
      v30 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( *(_QWORD *)(v30 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      PopHiberReadChecksums(BugCheckParameter3);
      v31 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v31 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        PopRequestRead(BugCheckParameter3);
        if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, (__int64)PopDecompressCallback) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 328) )
        {
          _mm_pause();
        }
      }
      PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
      v32 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
      if ( v32 )
        v32();
    }
    else
    {
      v10 = v35;
    }
    IoNotifyDump(3);
    ((void (__fastcall *)(__int64))off_1403FF598[0])(1LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( 1 )
    {
      v11 = *(_DWORD *)(BugCheckParameter3 + 256);
      if ( *(_DWORD *)(BugCheckParameter3 + 16) == v11 )
        break;
      _mm_pause();
    }
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    if ( v11 )
    {
      v17 = *(_QWORD *)(BugCheckParameter3 + 264);
      do
      {
        v18 = v4;
        v19 = (unsigned __int64)v16 << 7;
        qword_140418D60 += *(_QWORD *)(v19 + v17 + 64);
        qword_140418D70 += *(_QWORD *)(v19 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
        qword_140418D98 += *(_QWORD *)(v19 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
        v17 = *(_QWORD *)(BugCheckParameter3 + 264);
        v4 = *(_QWORD *)(v19 + v17 + 64) + *(_QWORD *)(v19 + v17 + 72);
        if ( v4 <= v18 )
          v4 = v18;
        v12 += *(_QWORD *)(v19 + v17 + 88);
        v13 += *(_QWORD *)(v19 + v17 + 96);
        ++v16;
        v14 += *(_QWORD *)(v19 + v17 + 104);
        v15 += *(_QWORD *)(v19 + v17 + 112);
        v11 = *(_DWORD *)(BugCheckParameter3 + 256);
      }
      while ( v16 < v11 );
    }
    v20 = v12 / (v14 + 1);
    v21 = v13 / (v15 + 1);
    if ( v21 > v20 )
    {
      v33 = 100 * (qword_140418D68 * v11 / (v15 + v14 + 1) - v20) / (v21 - v20);
      if ( v33 > 99 )
      {
        dword_140418904 = 99;
        goto LABEL_22;
      }
      dword_140418904 = v33;
      if ( (int)v33 >= 1 )
        goto LABEL_22;
    }
    dword_140418904 = 1;
LABEL_22:
    v22 = __rdtsc();
    qword_140418D88 = (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v10;
    result = (struct _KPRCB *)(qword_140418D88 - qword_140418D80 - v4);
    qword_140418D58 = (__int64)result;
    return result;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
