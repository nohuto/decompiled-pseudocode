/*
 * XREFs of sub_180029C14 @ 0x180029C14
 * Callers:
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 * Callees:
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009CE80 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall sub_180029C14(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  unsigned __int16 *v7; // [rsp+40h] [rbp-39h] BYREF
  __int128 v8; // [rsp+48h] [rbp-31h] BYREF
  int v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+70h] [rbp-9h]
  __int128 v13; // [rsp+78h] [rbp-1h]
  _BYTE v14[40]; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_180029BCC(1, a2, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v8, &v7);
  if ( (int)result >= 0 )
  {
    if ( v7 == (unsigned __int16 *)&v8 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v5 )
        RtlDeleteBoundaryDescriptor(v5);
      v6 = v8;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v6;
    }
    v4 = 64;
    v9 = 48;
    v10 = 0LL;
    if ( !byte_180165380 )
      v4 = 2112;
    v11 = a2;
    v12 = v4;
    v13 = 0LL;
    return ZwQueryAttributesFile(&v9, v14);
  }
  return result;
}
