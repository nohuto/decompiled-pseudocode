/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x1406406BC
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 * Callees:
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     CmpSecConvKey @ 0x140640788 (CmpSecConvKey.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, void *a2, int a3, _DWORD *a4, int **a5)
{
  size_t v8; // r14
  int v9; // r15d
  _QWORD **v10; // rsi
  _QWORD *i; // rdi
  int *v12; // rbx
  int v13; // ebp

  v8 = RtlLengthSecurityDescriptor(a2);
  v9 = CmpSecConvKey(v8, a2);
  v10 = (_QWORD **)(a1 + 16 * ((v9 & 0x3F) + 118LL));
  for ( i = *v10; ; i = (_QWORD *)*i )
  {
    if ( i == v10 )
      return 0;
    v12 = (int *)(i - 1);
    if ( *((_DWORD *)i - 1) == v9 )
    {
      v13 = *v12;
      if ( a3 == (unsigned int)*v12 >> 31 && (_DWORD)v8 == v12[6] && !memcmp(a2, v12 + 8, v8) )
        break;
    }
  }
  *a4 = v13;
  if ( a5 )
    *a5 = v12;
  return 1;
}
