/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x18005AD00
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D7F80 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 */

_QWORD *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF
  _QWORD *v12; // [rsp+B0h] [rbp+30h] BYREF
  char *v13; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0LL;
  v1 = 0x400000LL;
  v13 = 0LL;
  v12 = 0LL;
  v10[0] = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    v11 = 2 * v2;
    v10[1] = 2 * v2;
    if ( (int)ZwCreateSection(&v7, 983071LL, 0LL) >= 0
      && (int)ZwMapViewOfSection(v7, -1LL, v10, 0LL, 0LL, 0LL, &v11, 2, 0, 4) >= 0 )
    {
      v12 = (_QWORD *)v10[0];
      v8 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v8, 4096, 4) >= 0 )
      {
        v13 = (char *)v12 + v2;
        v9 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v9, 4096, 4) >= 0 )
        {
          *v12 = v7;
          v12[1] = v12;
          v12[9] = 208LL;
          v12[10] = v8;
          v12[11] = v2;
          v3 = v12;
          v4 = v13;
          *(_OWORD *)v13 = *(_OWORD *)v12;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          v5 = v3[7];
          v3 += 8;
          *(v4 - 1) = v5;
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          *((_QWORD *)v13 + 1) = v13;
          *((_QWORD *)v13 + 10) = v9;
          *(_QWORD *)v13 = 0LL;
          return v12;
        }
      }
    }
    if ( v12 )
      ZwFreeVirtualMemory(-1LL, &v12, &v8, 0x8000LL);
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v13, &v9, 0x8000LL);
    if ( v10[0] )
      ZwUnmapViewOfSection(-1LL);
    if ( v7 )
      ZwClose(v7);
  }
  return 0LL;
}
