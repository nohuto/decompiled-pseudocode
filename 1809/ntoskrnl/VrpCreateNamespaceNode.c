/*
 * XREFs of VrpCreateNamespaceNode @ 0x14080B03C
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140809AA4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     VrpFindBestMatchNamespaceNode @ 0x14080B6D4 (VrpFindBestMatchNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x14080F3BC (VrpCountPathComponents.c)
 *     VrpGetNextToken @ 0x14080F41C (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14080F500 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpCreateNamespaceNode(__int64 a1, const void **a2, void *a3, const void **a4, int a5, _QWORD *a6)
{
  int v10; // ebx
  int v11; // ebx
  char *PoolWithTag; // rax
  char *v13; // rdi
  PVOID v14; // rax
  void *v15; // rcx
  __int16 v16; // ax
  PVOID v17; // rax
  void *v18; // rcx
  __int16 v19; // ax
  __int64 BestMatchNamespaceNode; // rax
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int16 v25; // ax
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  v11 = a5;
  if ( (a5 & 0xE0000007) != a5 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(a4);
  VrpGetNextToken(a2, &v34, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v34, &String1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x67655256u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x40uLL);
  *((_DWORD *)v13 + 14) = v11;
  v14 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a2 + 1), 0x67655256u);
  *((_QWORD *)v13 + 1) = v14;
  v15 = v14;
  if ( v14
    && (v16 = *(_WORD *)a2,
        *((_WORD *)v13 + 1) = *(_WORD *)a2,
        *(_WORD *)v13 = v16,
        memmove(v15, a2[1], *(unsigned __int16 *)a2),
        v17 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a4 + 1), 0x67655256u),
        *((_QWORD *)v13 + 4) = v17,
        (v18 = v17) != 0LL) )
  {
    v19 = *(_WORD *)a4;
    *((_WORD *)v13 + 12) = *(_WORD *)a4;
    *((_WORD *)v13 + 13) = v19;
    memmove(v18, a4[1], *(unsigned __int16 *)a4);
    *((_WORD *)v13 + 30) = VrpCountPathComponents(v13);
    *((_WORD *)v13 + 31) = VrpCountPathComponents(v13 + 24);
    VrpGetNextToken(a2, &v34, &String1);
    if ( !String1.Length )
      goto LABEL_26;
    BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a1, v13, &v31);
    v21 = BestMatchNamespaceNode;
    if ( BestMatchNamespaceNode )
    {
      v22 = *(_DWORD *)(BestMatchNamespaceNode + 56);
      if ( (v22 & 4) == 0 )
      {
        v23 = v31;
        *((_DWORD *)v13 + 14) |= v22 & 2;
        v24 = 0LL;
        v34 = 0LL;
        if ( v23 )
        {
          do
          {
            VrpGetNextToken(v13, &v34, &String1);
            --v23;
          }
          while ( v23 );
          v24 = v34;
        }
        v25 = *(_WORD *)v13;
        Source.Buffer = (wchar_t *)(*((_QWORD *)v13 + 1) + 2 * v24);
        Source.Length = v25 - 2 * v24;
        Source.MaximumLength = Source.Length;
        v10 = VrpBuildKeyPath((PCUNICODE_STRING)(v21 + 24), &Source, (PUNICODE_STRING)(v13 + 40));
        if ( v10 < 0 )
          goto LABEL_19;
LABEL_26:
        if ( a3 )
          ObfReferenceObjectWithTag(a3, 0x67655256u);
        else
          a3 = 0LL;
        v29 = a6;
        v10 = 0;
        *((_QWORD *)v13 + 2) = a3;
        *v29 = v13;
        return (unsigned int)v10;
      }
    }
    v10 = -1073741811;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_19:
  v26 = (void *)*((_QWORD *)v13 + 1);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x67655256u);
  v27 = (void *)*((_QWORD *)v13 + 4);
  if ( v27 )
    ExFreePoolWithTag(v27, 0x67655256u);
  v28 = (void *)*((_QWORD *)v13 + 6);
  if ( v28 )
    ExFreePoolWithTag(v28, 0x67655256u);
  ExFreePoolWithTag(v13, 0x67655256u);
  return (unsigned int)v10;
}
