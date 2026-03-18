/*
 * XREFs of MiFindLargestLoaderDescriptor @ 0x1409F2E70
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409F2F50 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409F37DC (MxComputeFreeNodeDescriptorRequirements.c)
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

  qword_14046A080 = -1LL;
  MxComputeFreeNodeDescriptorRequirements(a1, v10);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 4);
    if ( (unsigned int)v4 <= 0x28 )
    {
      v5 = 0x1C5C0C00048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    v6 = i[3];
    v7 = i[4];
    if ( v7 + v6 > qword_14046A088 )
      qword_14046A088 = v7 + v6 - 1;
    qword_14046A090 += v7;
    if ( v6 < qword_14046A080 )
      qword_14046A080 = v6;
    v8 = *((_DWORD *)i + 4);
    if ( v8 == 2 || v8 == 24 )
      MxInitializeFreeNodeDescriptors(i, v10);
  }
  return 1LL;
}
