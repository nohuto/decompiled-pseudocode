/*
 * XREFs of CmpBuildAdminInformation @ 0x1407F34F0
 * Callers:
 *     CmpCheckAdminAccess @ 0x1407F3984 (CmpCheckAdminAccess.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x1400CC4C0 (RtlSidHashInitialize.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     CmpEffectiveTokenForSubject @ 0x1406B3374 (CmpEffectiveTokenForSubject.c)
 *     RtlCopyLuidAndAttributesArray @ 0x140894F70 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1, __int64 *a2)
{
  void *v2; // rax
  NTSTATUS v3; // eax
  unsigned int **v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r13d
  int v10; // edi
  __int64 v11; // r15
  PSE_EXPORTS v12; // r14
  ULONG v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r13
  _SID_AND_ATTRIBUTES *v16; // r15
  unsigned int v17; // r13d
  int v18; // r8d
  unsigned int v19; // eax
  size_t v20; // rdi
  char *TransientPoolWithTag; // rax
  char *v22; // r15
  ULONG *v23; // rdi
  ULONG v24; // edx
  __int64 v25; // rbx
  ULONG v26; // ecx
  PSID RemainingSidArea; // [rsp+40h] [rbp-30h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-28h]
  _SID_AND_ATTRIBUTES Src[2]; // [rsp+50h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+C0h] [rbp+50h] BYREF
  NTSTATUS v33; // [rsp+C8h] [rbp+58h]

  TokenInformation = 0LL;
  v2 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
  v3 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v4 = (unsigned int **)TokenInformation;
  v5 = v3;
  v33 = v3;
  if ( v3 >= 0 )
  {
    v6 = 0;
    v7 = -1;
    v8 = -1;
    v9 = **(_DWORD **)TokenInformation;
    v10 = 16 * v9;
    if ( v9 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v12 = SeExports;
      do
      {
        Sid2 = *(PSID *)v11;
        RemainingSidArea = Sid2;
        v10 += RtlLengthSid(Sid2);
        if ( v7 == -1 && RtlEqualSid(v12->SeAliasAdminsSid, Sid2) )
        {
          v7 = v6;
        }
        else if ( v8 == -1 && (*(_BYTE *)(v11 + 8) & 0x60) == 0x60 )
        {
          v8 = v6;
        }
        ++v6;
        v11 += 16LL;
      }
      while ( v6 < v9 );
      v4 = (unsigned int **)TokenInformation;
    }
    v13 = 0;
    if ( v7 == -1 )
    {
      v13 = 1;
      Src[0].Attributes = 7;
      Src[0].Sid = SeExports->SeAliasAdminsSid;
    }
    if ( v8 == -1 )
    {
      v14 = v13++;
      Src[v14].Sid = SeExports->SeHighMandatorySid;
      Src[v14].Attributes = 96;
    }
    if ( v13 )
    {
      v15 = v13;
      v16 = Src;
      v10 += 16 * v13;
      do
      {
        v10 += RtlLengthSid(v16->Sid);
        ++v16;
        --v15;
      }
      while ( v15 );
    }
    v17 = (v10 + 7) & 0xFFFFFFF8;
    v18 = 12 * *v4[2];
    v19 = v18 + v17 + 920 - 12;
    if ( !v18 )
      v19 = v17 + 920;
    v20 = v19;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v19, 0x20204D43u);
    v22 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v20);
      v23 = (ULONG *)(v22 + 88);
      *((_QWORD *)v22 + 3) = v4[3];
      *((_DWORD *)v22 + 8) = *((_DWORD *)v4 + 8);
      *((_DWORD *)v22 + 9) = *((_DWORD *)v4 + 9);
      *((_DWORD *)v22 + 10) = *((_DWORD *)v4 + 10);
      *((_DWORD *)v22 + 11) = *((_DWORD *)v4 + 11) & 0xFFFF9FFF | 0x2000;
      v24 = v13 + **v4;
      *((_QWORD *)v22 + 12) = v22 + 360;
      *((_DWORD *)v22 + 22) = v24;
      RtlCopySidAndAttributesArray(
        **v4,
        *((PSID_AND_ATTRIBUTES *)*v4 + 1),
        v17 - 16 * v24,
        (PSID_AND_ATTRIBUTES)(v22 + 360),
        &v22[16 * v24 + 360],
        &RemainingSidArea,
        (PULONG)&TokenInformation);
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * v7 + 8) = 7;
      if ( v8 != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * v8 + 8) = 96;
      if ( v13 )
        RtlCopySidAndAttributesArray(
          v13,
          Src,
          (ULONG)TokenInformation,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v22 + 12) + 16LL * **v4),
          RemainingSidArea,
          &RemainingSidArea,
          (PULONG)&TokenInformation);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v22 + 12), *v23, (PSID_AND_ATTRIBUTES_HASH)(v22 + 88));
      *(_QWORD *)v22 = v23;
      v25 = *((_QWORD *)v22 + 12) + v17;
      *(_DWORD *)v25 = 0;
      *(_QWORD *)(v25 + 8) = 0LL;
      *((_QWORD *)v22 + 1) = v25;
      v25 += 272LL;
      *(_DWORD *)v25 = 0;
      *(_QWORD *)(v25 + 8) = 0LL;
      *((_QWORD *)v22 + 7) = 0LL;
      *((_QWORD *)v22 + 8) = v25;
      v25 += 272LL;
      v26 = *v4[2];
      *(_DWORD *)v25 = v26;
      RtlCopyLuidAndAttributesArray(v26, (PLUID_AND_ATTRIBUTES)(v4[2] + 1), (PLUID_AND_ATTRIBUTES)(v25 + 4));
      *((_QWORD *)v22 + 2) = v25;
      v5 = v33;
      *a1 = v22;
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
