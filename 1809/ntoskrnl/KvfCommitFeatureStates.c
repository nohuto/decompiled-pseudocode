/*
 * XREFs of KvfCommitFeatureStates @ 0x14017753C
 * Callers:
 *     CmpAcceptBoot @ 0x14071F028 (CmpAcceptBoot.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

int KvfCommitFeatureStates()
{
  int result; // eax
  HANDLE v1; // rsi
  __int64 v2; // rbx
  int *v3; // rdi
  OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v4.Length = 48;
  v4.RootDirectory = 0LL;
  v4.Attributes = 576;
  v4.ObjectName = (PUNICODE_STRING)&KvfVelocityKeyName;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&Handle, 0xC0000000, &v4, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v1 = Handle;
    v2 = 0LL;
    v3 = KvfFeatureStates;
    do
    {
      result = *v3;
      if ( (*v3 & 2) != 0 )
      {
        *v3 = result & 0xFFFFFFFD;
        result = ZwSetValueKey(v1, (PUNICODE_STRING)&KvfFeatureStates[6 * v2 + 2], 0, 4u, &KvfFeatureStates[6 * v2], 4u);
      }
      v2 = (unsigned int)(v2 + 1);
      v3 += 6;
    }
    while ( (unsigned int)v2 < 2 );
    if ( v1 )
      return ZwClose(v1);
  }
  return result;
}
