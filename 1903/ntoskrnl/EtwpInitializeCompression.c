/*
 * XREFs of EtwpInitializeCompression @ 0x140333E10
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x140107B00 (RtlGetCompressionWorkSpaceSize.c)
 *     EtwpFreePlaceholderList @ 0x140108F34 (EtwpFreePlaceholderList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  PVOID v4; // rax
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  ULONG v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1188) = 5;
  *(_DWORD *)(a1 + 1192) = 3;
  *(_QWORD *)(a1 + 1136) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 1144) = a1;
  *(_QWORD *)(a1 + 1120) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, (PULONG)&NumberOfBytes, &v8);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !(_DWORD)NumberOfBytes
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x5A777445u),
          (*(_QWORD *)(a1 + 1176) = v4) != 0LL) )
    {
      *(_QWORD *)(a1 + 1160) = 0LL;
      *(_QWORD *)(a1 + 1232) = EtwpCompressionDpc;
      *(_DWORD *)(a1 + 1208) = 275;
      v5 = 0;
      *(_QWORD *)(a1 + 1240) = a1;
      *(_QWORD *)(a1 + 1264) = 0LL;
      *(_QWORD *)(a1 + 1224) = 0LL;
      *(_QWORD *)(a1 + 1200) = 0LL;
      if ( *(_DWORD *)(a1 + 1188) )
      {
        while ( 1 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), 0x48uLL, 0x42777445u);
          if ( !PoolWithTag )
            break;
          PoolWithTag[11] = 6;
          ++v5;
          *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 1200);
          *(_QWORD *)(a1 + 1200) = PoolWithTag + 8;
          if ( v5 >= *(_DWORD *)(a1 + 1188) )
            goto LABEL_8;
        }
        v3 = -1073741801;
        EtwpFreePlaceholderList(a1);
      }
      else
      {
LABEL_8:
        _InterlockedExchange((volatile __int32 *)(a1 + 1184), 1);
      }
      return v3;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
