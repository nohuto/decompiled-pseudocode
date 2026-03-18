/*
 * XREFs of ACPIGetPnpLocationString @ 0x1C009D000
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C00023D8 (AMLIGetNSObjectNameSegment.c)
 *     RtlStringCchPrintfExW @ 0x1C00282CC (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ACPIGetPnpLocationString(_QWORD *a1, wchar_t **a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_QWORD, void **); // rax
  void *v9; // rcx
  unsigned int v10; // esi
  char v11; // r14
  int v12; // eax
  _WORD *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int v17; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // rdi
  wchar_t *v20; // rbx
  NTSTATUS v21; // eax
  unsigned int v22; // ebx
  void *Src; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h] BYREF
  PUCHAR SourceCharacter; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-28h] BYREF
  _WORD v28[8]; // [rsp+60h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 712LL);
  if ( v5 )
  {
    v25 = AMLIGetNSObjectNameSegment(v5);
    v6 = v28;
    SourceCharacter = (PUCHAR)&v25;
    v7 = 4LL;
    do
    {
      *v6++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v7;
    }
    while ( v7 );
    v28[4] = 0;
  }
  else
  {
    v28[0] = 0;
  }
  v8 = (__int64 (__fastcall *)(_QWORD, void **))a1[5];
  v9 = 0LL;
  Src = 0LL;
  v10 = 0;
  v11 = 0;
  if ( v8 )
  {
    v12 = v8(a1[2], &Src);
    v9 = Src;
    if ( v12 == 288 )
    {
      v11 = 1;
    }
    else
    {
      if ( v12 < 0 )
        v9 = 0LL;
      Src = v9;
    }
    if ( v9 )
    {
      for ( i = v9; *i; i += v15 + 1 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( i[v14] );
        v10 += v14 + 1;
        v15 = -1LL;
        do
          ++v15;
        while ( i[v15] );
      }
      ++v10;
    }
  }
  v16 = v10;
  if ( v28[0] )
    v16 = v10 + 12;
  if ( v16 )
  {
    v17 = v16 + 1;
    if ( !v11 )
      v17 = v16;
    if ( v28[0] )
      ++v17;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v17, 0x53706341u);
    v9 = Src;
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      v20 = PoolWithTag;
      if ( Src )
      {
        if ( v11 )
        {
          v20 = PoolWithTag + 1;
          *PoolWithTag = 64;
          v9 = Src;
        }
        memmove(v20, v9, 2LL * v10);
        v9 = Src;
        v20 += v10 - 1;
      }
      if ( !v28[0]
        || (*v20 = 33,
            v21 = RtlStringCchPrintfExW(v20 + 1, 0xCuLL, 0LL, &pcchRemaining, 0x200u, L"ACPI(%ws)", v28),
            v9 = Src,
            v22 = v21,
            v21 >= 0) )
      {
        *a2 = v19;
        v22 = *(_QWORD *)(v4 + 744) == 0LL ? 0x120 : 0;
      }
    }
    else
    {
      v22 = -1073741670;
    }
  }
  else
  {
    v22 = -1073741637;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v22;
}
