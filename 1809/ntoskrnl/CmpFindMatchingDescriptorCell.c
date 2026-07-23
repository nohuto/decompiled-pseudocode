/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x1405AE000
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B601C (RtlLengthSecurityDescriptorStrict.c)
 *     CmpSecConvKey @ 0x1405AE0CC (CmpSecConvKey.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, const void *a2, int a3, _DWORD *a4, int **a5)
{
  size_t v7; // rbp
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // r11
  _QWORD **v11; // r14
  _QWORD *i; // rdi
  int *v13; // rbx
  int v14; // esi

  v7 = (unsigned int)RtlLengthSecurityDescriptorStrict();
  v9 = CmpSecConvKey(v7, v8);
  v11 = (_QWORD **)(v10 + 16 * ((v9 & 0x3F) + 118LL));
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      return 0;
    v13 = (int *)(i - 1);
    if ( *((_DWORD *)i - 1) == v9 )
    {
      v14 = *v13;
      if ( a3 == (unsigned int)*v13 >> 31 && (_DWORD)v7 == v13[6] && !memcmp(a2, v13 + 8, v7) )
        break;
    }
  }
  *a4 = v14;
  if ( a5 )
    *a5 = v13;
  return 1;
}
