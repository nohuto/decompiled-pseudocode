/*
 * XREFs of PopHiberReadChecksums @ 0x14057DDB8
 * Callers:
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopGetIoLocation @ 0x14056B930 (PopGetIoLocation.c)
 */

void __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  char *v1; // rsi
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // r9d
  unsigned __int64 v14; // rax
  bool v15; // cf
  size_t v16; // rcx
  size_t v17; // r14
  unsigned __int64 v18; // r9
  unsigned int v19; // r15d
  unsigned __int64 v20; // r14
  int v21; // eax
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v23; // rax
  size_t v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-50h]
  char *v28; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h] BYREF

  v1 = *(char **)(BugCheckParameter3 + 432);
  v2 = 0LL;
  v28 = v1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 200);
    v5 = *(_QWORD *)(BugCheckParameter3 + 320);
    v25 = v4;
    v6 = *(_QWORD *)(v4 + 128);
    v7 = *(_QWORD *)(v4 + 120) << 12;
    v27 = __rdtsc();
    v8 = (2 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v8 )
    {
      do
      {
        IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), v7, &v29);
        v10 = *(_QWORD *)(BugCheckParameter3 + 144);
        v11 = *(unsigned int *)(BugCheckParameter3 + 152);
        v12 = *(unsigned int *)(BugCheckParameter3 + 408);
        v13 = *(_DWORD *)(BugCheckParameter3 + 144);
        v26 = IoLocation;
        v14 = v29;
        v15 = v8 < v29;
        *(_WORD *)(v5 + 10) = 0;
        *(_QWORD *)v5 = 0LL;
        if ( v15 )
          v14 = v8;
        v16 = v11 << 12;
        if ( v14 < v16 )
          v16 = v14;
        v17 = v12 << 12;
        if ( v16 < v17 )
          v17 = v16;
        *(_DWORD *)(v5 + 40) = v17;
        v24 = v17;
        *(_QWORD *)(v5 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
        *(_DWORD *)(v5 + 44) = v10 & 0xFFF;
        *(_WORD *)(v5 + 8) = 8 * (((v17 + (v10 & 0xFFF) + 4095) >> 12) + 6);
        *(_QWORD *)(v5 + 24) = *(_QWORD *)(BugCheckParameter3 + 144);
        v18 = (v17 + (v13 & 0xFFF) + 4095LL) >> 12;
        *(_WORD *)(v5 + 10) = 1;
        if ( v18 )
        {
          v19 = 0;
          v20 = v18;
          do
          {
            ++v19;
            *(_QWORD *)(v5 + 8 * v2 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 144)
                                                                                         + (v2 << 12))).QuadPart >> 12;
            v2 = v19;
          }
          while ( v19 < v20 );
          v1 = v28;
          v17 = v24;
          v4 = v25;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                &v26,
                v5);
        BugCheckParameter4 = v21;
        if ( v21 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
        }
        memmove(v1, *(const void **)(BugCheckParameter3 + 144), v17);
        v1 += v17;
        v7 += v17;
        v2 = 0LL;
        v28 = v1;
        v8 -= v17;
      }
      while ( v8 );
      v6 = *(_QWORD *)(v4 + 128);
    }
    *(_QWORD *)(BugCheckParameter3 + 416) = v6;
    v23 = __rdtsc();
    qword_140418DB0 += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v27;
  }
}
