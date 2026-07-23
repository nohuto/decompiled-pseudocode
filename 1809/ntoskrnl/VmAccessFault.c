/*
 * XREFs of VmAccessFault @ 0x1408B1080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B1C10 (VmpPrefetchForVirtualFault.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 *v6; // rbx
  volatile LONG *v10; // rbp
  __int64 v11; // r8
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 result; // rax
  _BYTE v18[768]; // [rsp+30h] [rbp-358h] BYREF

  v6 = a1;
  v10 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15];
  if ( !v10 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a4 & 0x38) == 0x20 )
    VmpPrefetchForVirtualFault(a1);
  v11 = 0LL;
  v12 = &v6[2 * a3];
  if ( v6 >= v12 )
    return 0LL;
  do
  {
    v13 = *v6;
    v14 = *a2;
    v15 = *v6 + v6[1];
    while ( v13 < v15 )
    {
      if ( v14 > 0x7FFFFFFEFLL )
        NT_ASSERT("SystemVpn <= ((ULONG_PTR)MmHighestUserAddress >> 12L)");
      v16 = 6 * v11;
      v11 = (unsigned int)(v11 + 1);
      *(_QWORD *)&v18[8 * v16 + 24] = v14 & 0xFFFFFFFFFFFFFLL;
      *(_QWORD *)&v18[8 * v16 + 32] = v13 & 0xFFFFFFFFFFFFFLL;
      if ( (_DWORD)v11 == 16 )
      {
        result = VmpAccessFaultBatch(v10, (unsigned __int64)v18, 16, a4, a5, a6);
        if ( (int)result < 0 )
          return result;
        v11 = 0LL;
      }
      ++v13;
      ++v14;
    }
    v6 += 2;
    ++a2;
  }
  while ( v6 < v12 );
  if ( !(_DWORD)v11 )
    return 0LL;
  result = VmpAccessFaultBatch(v10, (unsigned __int64)v18, v11, a4, a5, a6);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
