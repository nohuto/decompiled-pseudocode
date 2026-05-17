/*
 * XREFs of sub_18004DE5C @ 0x18004DE5C
 * Callers:
 *     sub_18004DDEC @ 0x18004DDEC (sub_18004DDEC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_18004E040 @ 0x18004E040 (sub_18004E040.c)
 *     sub_18004E0E4 @ 0x18004E0E4 (sub_18004E0E4.c)
 *     sub_18004E264 @ 0x18004E264 (sub_18004E264.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E9E0 @ 0x18004E9E0 (sub_18004E9E0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_18004DE5C(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  unsigned __int64 v21; // [rsp+48h] [rbp-18h]

  v3 = *a2;
  v18 = 0x10000000100000LL;
  v4 = a3;
  v19 = 0x4000000000200000LL;
  if ( !v3 )
    __int2c();
  v7 = (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1;
  v16 = v3;
  if ( v3 <= v7 )
  {
    v8 = v3 >> 20;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
    v9 = sub_18004E040(a1, (unsigned __int16)v8, (unsigned __int16)(v4 >> 20), &v18, v16);
    v10 = v9;
    if ( v9 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(a1 + 8), v9);
      v11 = v18;
      if ( v18 != v10 )
      {
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_BYTE *)v10 = 1;
        *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
        sub_18004E264(a1, v10, (v11 - v10) >> 5);
        sub_18004E0E4(a1, v10);
        v10 = v11;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v10 = sub_18004E2D4(a1);
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
LABEL_7:
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)v10 = 1;
      *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v10 + 24) > (unsigned __int16)v8 )
      {
        v14 = sub_18004E264(a1, v10, (unsigned __int16)v8);
        sub_18004E0E4(a1, v14);
      }
      v17 = v12;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v17;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3)) )
    v4 = *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3));
  v16 = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  result = sub_18004E9E0(a1, &v16, v4);
  v17 = result;
  if ( result )
  {
    v15 = *(_BYTE *)(a1 + 44);
    v18 = 5LL;
    BYTE1(v18) = v15;
    v21 = v16 >> 20;
    v19 = 0LL;
    v20 = 0LL;
    if ( sub_18004E370(a1, result, &v18) )
    {
      *a2 = v16;
      return v17;
    }
    ZwFreeVirtualMemory(-1LL, &v17, &v16, 0x8000LL);
    return 0LL;
  }
  return result;
}
