/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x140761D58
 * Callers:
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x14070E810 (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfExW @ 0x140128D88 (RtlStringCbPrintfExW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r12
  char *PoolWithTag; // rax
  char *v11; // rdi
  int v12; // eax
  size_t v13; // rsi
  char *v14; // rbp
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 88);
    do
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( (v6 & 2) != 0 )
      {
        v16 = -1LL;
        v9 = v4;
        do
          ++v16;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v16) );
        v8 = 2 * v16 + 4;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          return;
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(*v5 + 2 * v7 + 4) );
        v8 = 2 * v7 + 14;
        v9 = v4;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v8 + 74, 0x70696D57u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v8 + 74);
        *(_DWORD *)v11 = v8 + 74;
        *((_DWORD *)v11 + 1) = 3;
        *((_QWORD *)v11 + 1) = 1LL;
        *((_DWORD *)v11 + 11) = 10;
        *(_OWORD *)(v11 + 24) = *a2;
        *((_QWORD *)v11 + 2) = MEMORY[0xFFFFF78000000014];
        v12 = v8 + 2;
        *((_DWORD *)v11 + 14) = 72;
        v13 = v8 - 2;
        *((_DWORD *)v11 + 15) = v12;
        *((_DWORD *)v11 + 12) = 64;
        *((_WORD *)v11 + 32) = 0;
        v14 = &v11[*((unsigned int *)v11 + 14)];
        *(_WORD *)v14 = 0;
        v15 = *(_DWORD *)(a1 + 16);
        if ( (v15 & 2) != 0 )
        {
          *((_WORD *)v14 + 1) = v13;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v14 + 2, v13, *(NTSTRSAFE_PCWSTR *)(*v5 + 8 * v9));
        }
        else if ( (v15 & 1) != 0 )
        {
          LODWORD(v17) = v4 + *(_DWORD *)*v5;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v14 + 2, v13, 0LL, 0LL, 0x200u, L"%ws%d", *v5 + 4LL, v17);
          *((_WORD *)v14 + 1) = v13;
        }
        WmipProcessEvent(v11, 1, 0);
        ExFreePoolWithTag(v11, 0);
        v5 = (_QWORD *)(a1 + 88);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
