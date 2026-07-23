/*
 * XREFs of EtwpInitializeCompression @ 0x1403157AC
 * Callers:
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1400E2AA0 (RtlGetCompressionWorkSpaceSize.c)
 *     EtwpFreePlaceholderList @ 0x140132B7C (EtwpFreePlaceholderList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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

  *(_DWORD *)(a1 + 1156) = 5;
  *(_DWORD *)(a1 + 1160) = 3;
  *(_QWORD *)(a1 + 1104) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 1112) = a1;
  *(_QWORD *)(a1 + 1088) = 0LL;
  result = RtlGetCompressionWorkSpaceSize(3u, (PULONG)&NumberOfBytes, &v8);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !(_DWORD)NumberOfBytes
      || (v4 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x5A777445u),
          (*(_QWORD *)(a1 + 1144) = v4) != 0LL) )
    {
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_QWORD *)(a1 + 1200) = EtwpCompressionDpc;
      *(_DWORD *)(a1 + 1176) = 275;
      v5 = 0;
      *(_QWORD *)(a1 + 1208) = a1;
      *(_QWORD *)(a1 + 1232) = 0LL;
      *(_QWORD *)(a1 + 1192) = 0LL;
      *(_QWORD *)(a1 + 1168) = 0LL;
      if ( *(_DWORD *)(a1 + 1156) )
      {
        while ( 1 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), 0x48uLL, 0x42777445u);
          if ( !PoolWithTag )
            break;
          PoolWithTag[11] = 6;
          ++v5;
          *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 1168);
          *(_QWORD *)(a1 + 1168) = PoolWithTag + 8;
          if ( v5 >= *(_DWORD *)(a1 + 1156) )
            goto LABEL_8;
        }
        v3 = -1073741801;
        EtwpFreePlaceholderList(a1);
      }
      else
      {
LABEL_8:
        _InterlockedExchange((volatile __int32 *)(a1 + 1152), 1);
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
