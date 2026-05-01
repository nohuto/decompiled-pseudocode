/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180005438
 * Callers:
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x180005704 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 * Callees:
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x180005794 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 *     memset_0 @ 0x180006716 (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  ULONG v3; // ebx
  NTSTATUS InformationToken; // eax
  PVOID v8; // rdi
  PVOID Heap; // rax
  int v10; // eax
  unsigned int v11; // esi
  const UNICODE_STRING *v12; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    if ( is_mul_ok((unsigned int)Size, 0x10uLL) )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * (unsigned int)Size);
      v8 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, (unsigned int)Size);
        v10 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v8, Size, (PULONG)&Size);
        if ( v10 >= 0 )
        {
          if ( *((_DWORD *)v8 + 1) )
          {
            RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
            v11 = 0;
            if ( *((_DWORD *)v8 + 1) )
            {
              while ( 1 )
              {
                v12 = (const UNICODE_STRING *)(*((_QWORD *)v8 + 1) + 40LL * v11);
                if ( v12[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
                  break;
                if ( ++v11 >= *((_DWORD *)v8 + 1) )
                  goto LABEL_18;
              }
              *a2 = 1;
            }
          }
        }
        else
        {
          v3 = RtlNtStatusToDosErrorNoTeb(v10);
        }
        goto LABEL_18;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v3 = 8;
LABEL_18:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
    return v3;
  }
  if ( InformationToken )
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  else
    return 1359;
}
