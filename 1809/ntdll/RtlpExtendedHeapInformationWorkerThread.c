/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x18007B040 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18007B470 (RtlpHpTagQueryTags.c)
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  int Tags; // eax
  int HeapInformation; // edi
  __int64 v4; // rax
  unsigned __int64 *v5; // r14
  _QWORD **v6; // r15
  __int64 v7; // r9
  int v8; // esi
  _QWORD v9[2]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v10[6]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v11[14]; // [rsp+98h] [rbp-19h] BYREF

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 0x10000000:
      v9[1] = -1LL;
      v9[0] = 1LL;
      WORD1(v9[0]) = *(_WORD *)(a1 + 80);
      Tags = RtlSetHeapInformation(0LL, 5, (__int64)v9, 0x10uLL);
      HeapInformation = Tags;
LABEL_3:
      *(_DWORD *)(a1 + 28) = Tags;
      goto LABEL_22;
    case 0x40000000:
      v4 = *(_QWORD *)(a1 + 8);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled() )
        *(_DWORD *)(a1 + 88) |= 1u;
      HeapInformation = 0;
      goto LABEL_22;
    default:
      v4 = 0x10000LL;
      break;
  }
  v5 = (unsigned __int64 *)(a1 + 56);
  v6 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *v5, (_QWORD *)(a1 + 32), v7);
      goto LABEL_3;
    }
    if ( v8 == 0x20000000 )
    {
      memset(v10, 0, 0x28uLL);
      *(_DWORD *)(a1 + 28) = 0;
      v10[2] = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v10[0]) = 2;
      v10[1] = -1LL;
      v10[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v10, 0x28uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
      if ( (v10[4] & 0x100LL) != 0 )
        *(_DWORD *)(a1 + 88) |= 1u;
    }
    else
    {
      memset(v11, 0, 0x58uLL);
      v11[1] = *(_QWORD *)(a1 + 16);
      v11[0] = -1LL;
      v11[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v11[2]) = v8;
      v11[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v11, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 48) )
    NtUnmapViewOfSection();
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
