/*
 * XREFs of SeSddlSecurityDescriptorFromSDDL @ 0x1C00D29A8
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00D2690 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00D2A0C (SepSddlSecurityDescriptorFromSDDLString.c)
 */

__int64 __fastcall SeSddlSecurityDescriptorFromSDDL(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  SIZE_T v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ebx

  v3 = *a1;
  v6 = v3 + 2;
  if ( a1[1] == v3 + 2 )
  {
    v7 = *((_QWORD *)a1 + 1);
    v8 = v3 >> 1;
    if ( !*(_WORD *)(v7 + 2 * v8) )
      return SepSddlSecurityDescriptorFromSDDLString(v7, v8, a3);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x73546553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    v11[(unsigned __int64)*a1 >> 1] = 0;
    v13 = SepSddlSecurityDescriptorFromSDDLString(v11, v12, a3);
    ExFreePoolWithTag(v11, 0);
    return v13;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
