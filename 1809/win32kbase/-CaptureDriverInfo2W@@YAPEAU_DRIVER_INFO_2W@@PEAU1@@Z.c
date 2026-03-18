/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C005E740
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005E1A0 (NtGdiOpenDCW.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     AllocThreadBufferWithTag @ 0x1C0024150 (AllocThreadBufferWithTag.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  size_t v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  size_t v12; // r12
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  __int64 v19; // [rsp+80h] [rbp+8h]
  __int64 Size; // [rsp+98h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 3);
  if ( !v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    goto LABEL_49;
  v5 = (unsigned __int64 *)MmUserProbeAddress;
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (v3 & 1) != 0 )
    goto LABEL_49;
  if ( v3 + 2 > MmUserProbeAddress || v3 + 2 < v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v2 + 2 * v6) );
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v3 + 2 * v7) );
  if ( v6 + 1 < v6 )
    return 0LL;
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v7 + 1, 2uLL) )
    return 0LL;
  v8 = 2 * v6;
  v19 = 2 * v6;
  v9 = 2 * v6 + 50;
  if ( v9 < 0x30 )
    return 0LL;
  Size = 2 * v7;
  v10 = v9 + 2 * v7 + 2;
  if ( v10 < 2 * v6 + 50 )
    return 0LL;
  if ( (v4 & 1) != 0 )
LABEL_49:
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > MmUserProbeAddress || v4 + 2 < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(v4 + 2 * v11) );
  if ( v11 + 1 < v11 )
    return 0LL;
  if ( !is_mul_ok(v11 + 1, 2uLL) )
    return 0LL;
  v12 = 2 * v11;
  if ( 2 * v11 + v10 + 2 < v10 )
    return 0LL;
  v13 = 2 * v11 + v10 + 2;
  if ( (unsigned __int64)(v13 - 48) > 0x270FFD0 )
    return 0LL;
  v14 = 0LL;
  if ( (_DWORD)v13 )
  {
    v15 = (_QWORD *)AllocThreadBufferWithTag(v13, 0x706D7447u, 0);
    v14 = v15;
    if ( v15 )
      memset(v15, 0, (unsigned int)v13);
    v8 = v19;
    v5 = (unsigned __int64 *)MmUserProbeAddress;
  }
  if ( v14 )
  {
    *(_DWORD *)v14 = *(_DWORD *)a1;
    v14[5] = 0LL;
    v14[2] = 0LL;
    v14[1] = v14 + 6;
    v14[3] = (char *)v14 + v8 + 50;
    if ( v8 + v2 < v2 || v8 + v2 > *v5 )
      *(_BYTE *)*v5 = 0;
    memmove(v14 + 6, (const void *)v2, v8);
    v16 = (void *)v14[3];
    if ( Size + v3 < v3 || Size + v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, (const void *)v3, Size);
    v17 = (void *)(Size + v14[3] + 2LL);
    v14[4] = v17;
    if ( v12 + v4 < v4 || v12 + v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, (const void *)v4, v12);
  }
  return (struct _DRIVER_INFO_2W *)v14;
}
