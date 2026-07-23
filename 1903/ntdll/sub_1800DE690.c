/*
 * XREFs of sub_1800DE690 @ 0x1800DE690
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     sub_180025E00 @ 0x180025E00 (sub_180025E00.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D59C0 (RtlComputePrivatizedDllName_U.c)
 */

__int64 __fastcall sub_1800DE690(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  _UNICODE_STRING *p_LocalName; // rbx
  SIZE_T v7; // r8
  __int64 *v8; // r14
  __int64 v9; // rcx
  size_t Length; // r8
  PWCH Buffer; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&RealName.Length = 0LL;
  RealName.Buffer = 0LL;
  *(_QWORD *)&LocalName.Length = 0LL;
  LocalName.Buffer = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( LocalName.Buffer && sub_180025E00((int)&LocalName, 1) )
    {
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || !sub_180025E00((int)&RealName, 1) )
        goto LABEL_18;
      p_LocalName = &RealName;
    }
    v7 = p_LocalName->Length + 2LL;
    *a2 = 0;
    if ( v7 > 0xFFFE )
    {
      v5 = -1073741562;
      goto LABEL_19;
    }
    v8 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v7 > *((_QWORD *)a2 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v7) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_19;
    }
    v9 = *v8;
    Length = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v12 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v8;
    memmove((void *)(v9 + 2 * v12), Buffer, Length);
    v13 = (unsigned __int16)(*a2 + p_LocalName->Length);
    *a2 = v13;
    a2[1] = v13 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v13 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  v5 = -1073741811;
LABEL_19:
  RtlFreeUnicodeString(&RealName);
  RtlFreeUnicodeString(&LocalName);
  return (unsigned int)v5;
}
