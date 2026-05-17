/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180085F30
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800DA0F0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  HANDLE *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  HANDLE *v11; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+70h] [rbp-10h] BYREF
  HANDLE *v13; // [rsp+B0h] [rbp+30h] BYREF
  char *v14; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v1 = 0x400000LL;
  v14 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    v12[1] = 2 * v2;
    v12[0] = 2 * v2;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL, v12, 4, 0x4000000, ((v2 * (unsigned __int128)2uLL) >> 64) & v7) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, &v11) >= 0 )
    {
      v13 = v11;
      v9 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v9, 4096, 4) >= 0 )
      {
        v14 = (char *)v13 + v2;
        v10 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v10, 4096, 4) >= 0 )
        {
          *v13 = Handle;
          v13[1] = v13;
          v13[9] = (HANDLE)208;
          v13[10] = (HANDLE)v9;
          v13[11] = (HANDLE)v2;
          v3 = v13;
          v4 = v14;
          *(_OWORD *)v14 = *(_OWORD *)v13;
          v4[1] = *((_OWORD *)v3 + 1);
          v4[2] = *((_OWORD *)v3 + 2);
          v4[3] = *((_OWORD *)v3 + 3);
          v4[4] = *((_OWORD *)v3 + 4);
          v4[5] = *((_OWORD *)v3 + 5);
          v4[6] = *((_OWORD *)v3 + 6);
          v4 += 8;
          v5 = *((_OWORD *)v3 + 7);
          v3 += 16;
          *(v4 - 1) = v5;
          *v4 = *(_OWORD *)v3;
          v4[1] = *((_OWORD *)v3 + 1);
          v4[2] = *((_OWORD *)v3 + 2);
          v4[3] = *((_OWORD *)v3 + 3);
          v4[4] = *((_OWORD *)v3 + 4);
          *((_QWORD *)v14 + 1) = v14;
          *((_QWORD *)v14 + 10) = v10;
          *(_QWORD *)v14 = 0LL;
          return v13;
        }
      }
    }
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v13, &v9, 0x8000LL);
    if ( v14 )
      ZwFreeVirtualMemory(-1LL, &v14, &v10, 0x8000LL);
    if ( v11 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
