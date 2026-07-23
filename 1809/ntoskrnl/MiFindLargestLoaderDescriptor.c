/*
 * XREFs of MiFindLargestLoaderDescriptor @ 0x1409BC2C8
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409BC3A8 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409BCBFC (MxComputeFreeNodeDescriptorRequirements.c)
 */

__int64 __fastcall MiFindLargestLoaderDescriptor(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  _BYTE v10[512]; // [rsp+20h] [rbp-218h] BYREF

  qword_14043F5C0 = -1LL;
  MxComputeFreeNodeDescriptorRequirements(a1, v10);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 4);
    if ( (unsigned int)v4 <= 0x22 )
    {
      v5 = 0x5C0C00048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    v6 = i[3];
    v7 = i[4];
    if ( v7 + v6 > qword_14043F5C8 )
      qword_14043F5C8 = v7 + v6 - 1;
    qword_14043F5D0 += v7;
    if ( v6 < qword_14043F5C0 )
      qword_14043F5C0 = v6;
    v8 = *((_DWORD *)i + 4);
    if ( v8 == 2 || v8 == 24 )
      MxInitializeFreeNodeDescriptors(i, v10);
  }
  return 1LL;
}
