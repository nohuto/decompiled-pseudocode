/*
 * XREFs of RaDeleteDriver @ 0x1C00744A8
 * Callers:
 *     StorPortInitialize @ 0x1C001E5F0 (StorPortInitialize.c)
 *     RaDriverUnload @ 0x1C003C340 (RaDriverUnload.c)
 * Callees:
 *     RaidReleasePortData @ 0x1C00026F4 (RaidReleasePortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     RaFreeDriverInitData @ 0x1C003C3B4 (RaFreeDriverInitData.c)
 *     RaidRemovePortDriver @ 0x1C003D11C (RaidRemovePortDriver.c)
 *     RaSqmAndEtwCleanup @ 0x1C0074588 (RaSqmAndEtwCleanup.c)
 */

void __fastcall RaDeleteDriver(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 != -1 )
  {
    v2 = (__int64 *)(a1 + 96);
    while ( 1 )
    {
      v3 = (__int64 *)*v2;
      if ( (__int64 *)*v2 == v2 )
        break;
      if ( (__int64 *)v3[1] != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v5 = v3 - 26;
      *(_QWORD *)(v4 + 8) = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (v5[23] & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[21];
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      RaFreeDriverInitData(v4, v5);
    }
    *(_DWORD *)a1 = -1;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      RaidRemovePortDriver(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      RaidReleasePortData(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    RaSqmAndEtwCleanup();
  }
}
