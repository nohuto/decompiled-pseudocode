/*
 * XREFs of CmpBuildAdminInformation @ 0x1406F76B4
 * Callers:
 *     CmpCheckAdminAccess @ 0x1406F75E4 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x14000AB40 (RtlSidHashInitialize.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     RtlCopySidAndAttributesArray @ 0x14061CB00 (RtlCopySidAndAttributesArray.c)
 *     CmpEffectiveTokenForSubject @ 0x1406A4468 (CmpEffectiveTokenForSubject.c)
 *     RtlCopyLuidAndAttributesArray @ 0x1406F7950 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1, __int64 *a2)
{
  void *v2; // rax
  NTSTATUS v3; // eax
  struct _LOOKASIDE_LIST_EX *v4; // r9
  unsigned int **v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // r13d
  int v11; // edi
  __int64 v12; // r15
  PSE_EXPORTS v13; // r14
  ULONG v14; // ebx
  unsigned int v15; // r13d
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // edi
  char *TransientPoolWithTag; // rax
  char *v20; // r15
  ULONG *v21; // rdi
  ULONG v22; // edx
  __int64 v23; // rbx
  ULONG v24; // ecx
  __int64 v26; // rdx
  __int64 v27; // r13
  _SID_AND_ATTRIBUTES *v28; // r15
  PSID RemainingSidArea; // [rsp+40h] [rbp-30h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-28h]
  _SID_AND_ATTRIBUTES Src[2]; // [rsp+50h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+C0h] [rbp+50h] BYREF
  NTSTATUS v34; // [rsp+C8h] [rbp+58h]

  TokenInformation = 0LL;
  v2 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
  v3 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v5 = (unsigned int **)TokenInformation;
  v6 = v3;
  v34 = v3;
  if ( v3 >= 0 )
  {
    v7 = 0;
    v8 = -1;
    v9 = -1;
    v10 = **(_DWORD **)TokenInformation;
    v11 = 16 * v10;
    if ( v10 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v13 = SeExports;
      do
      {
        Sid2 = *(PSID *)v12;
        RemainingSidArea = Sid2;
        v11 += RtlLengthSid(Sid2);
        if ( v8 == -1 && RtlEqualSid(v13->SeAliasAdminsSid, Sid2) )
        {
          v8 = v7;
        }
        else if ( v9 == -1 && (*(_BYTE *)(v12 + 8) & 0x60) == 0x60 )
        {
          v9 = v7;
        }
        ++v7;
        v12 += 16LL;
      }
      while ( v7 < v10 );
      v5 = (unsigned int **)TokenInformation;
    }
    v14 = 0;
    if ( v8 == -1 )
    {
      v14 = 1;
      Src[0].Attributes = 7;
      Src[0].Sid = SeExports->SeAliasAdminsSid;
    }
    if ( v9 == -1 )
    {
      v26 = v14++;
      Src[v26].Sid = SeExports->SeHighMandatorySid;
      Src[v26].Attributes = 96;
    }
    if ( v14 )
    {
      v27 = v14;
      v28 = Src;
      v11 += 16 * v14;
      do
      {
        v11 += RtlLengthSid(v28->Sid);
        ++v28;
        --v27;
      }
      while ( v27 );
    }
    v15 = (v11 + 7) & 0xFFFFFFF8;
    v16 = 12 * *v5[2];
    v17 = v16 + v15 + 920 - 12;
    if ( !v16 )
      v17 = v15 + 920;
    v18 = v17;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v17, 0x20204D43u, v4);
    v20 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v18);
      v21 = (ULONG *)(v20 + 88);
      *((_QWORD *)v20 + 3) = v5[3];
      *((_DWORD *)v20 + 8) = *((_DWORD *)v5 + 8);
      *((_DWORD *)v20 + 9) = *((_DWORD *)v5 + 9);
      *((_DWORD *)v20 + 10) = *((_DWORD *)v5 + 10);
      *((_DWORD *)v20 + 11) = *((_DWORD *)v5 + 11) & 0xFFFF9FFF | 0x2000;
      v22 = v14 + **v5;
      *((_QWORD *)v20 + 12) = v20 + 360;
      *((_DWORD *)v20 + 22) = v22;
      RtlCopySidAndAttributesArray(
        **v5,
        *((PSID_AND_ATTRIBUTES *)*v5 + 1),
        v15 - 16 * v22,
        (PSID_AND_ATTRIBUTES)(v20 + 360),
        &v20[16 * v22 + 360],
        &RemainingSidArea,
        (PULONG)&TokenInformation);
      if ( v8 != -1 )
        *(_DWORD *)(*((_QWORD *)v20 + 12) + 16LL * v8 + 8) = 7;
      if ( v9 != -1 )
        *(_DWORD *)(*((_QWORD *)v20 + 12) + 16LL * v9 + 8) = 96;
      if ( v14 )
        RtlCopySidAndAttributesArray(
          v14,
          Src,
          (ULONG)TokenInformation,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v20 + 12) + 16LL * **v5),
          RemainingSidArea,
          &RemainingSidArea,
          (PULONG)&TokenInformation);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v20 + 12), *v21, (PSID_AND_ATTRIBUTES_HASH)(v20 + 88));
      *(_QWORD *)v20 = v21;
      v23 = *((_QWORD *)v20 + 12) + v15;
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 8) = 0LL;
      *((_QWORD *)v20 + 1) = v23;
      v23 += 272LL;
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 8) = 0LL;
      *((_QWORD *)v20 + 7) = 0LL;
      *((_QWORD *)v20 + 8) = v23;
      v23 += 272LL;
      v24 = *v5[2];
      *(_DWORD *)v23 = v24;
      RtlCopyLuidAndAttributesArray(v24, (PLUID_AND_ATTRIBUTES)(v5[2] + 1), (PLUID_AND_ATTRIBUTES)(v23 + 4));
      *((_QWORD *)v20 + 2) = v23;
      v6 = v34;
      *a1 = v20;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
