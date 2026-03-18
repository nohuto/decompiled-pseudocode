/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00811E0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C003B7F0 (NtGdiOpenDCW.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     AllocThreadBufferWithTag @ 0x1C0023C50 (AllocThreadBufferWithTag.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  size_t v10; // r12
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rcx
  void *v15; // rcx
  size_t Size; // [rsp+80h] [rbp+8h]
  __int64 v18; // [rsp+98h] [rbp+20h]

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
    ExRaiseDatatypeMisalignment();
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v3 + 2 > MmUserProbeAddress || v3 + 2 < v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v5 = -1LL;
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
  Size = v8;
  if ( (unsigned __int64)(v8 + 50) < 0x30 )
    return 0LL;
  v18 = 2 * v7;
  v9 = 2 * v7 + v8 + 52;
  if ( v9 < v8 + 50 )
    return 0LL;
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > MmUserProbeAddress || v4 + 2 < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  do
    ++v5;
  while ( *(_WORD *)(v4 + 2 * v5) );
  if ( v5 + 1 < v5 )
    return 0LL;
  if ( !is_mul_ok(v5 + 1, 2uLL) )
    return 0LL;
  v10 = 2 * v5;
  v11 = 2 * v5 + v9 + 2;
  if ( v11 < v9 || v11 < 0x30 || v11 > 0x2710000 )
    return 0LL;
  v12 = (_QWORD *)AllocThreadBufferWithTag(v11, 0x706D7447u, 0);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, (unsigned int)v11);
  if ( v13 )
  {
    *(_DWORD *)v13 = *(_DWORD *)a1;
    v13[5] = 0LL;
    v13[2] = 0LL;
    v13[1] = v13 + 6;
    v13[3] = (char *)v13 + Size + 50;
    if ( Size + v2 < v2 || Size + v2 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13 + 6, (const void *)v2, Size);
    v14 = (void *)v13[3];
    if ( v18 + v3 < v3 || v18 + v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, (const void *)v3, v18);
    v15 = (void *)(v18 + v13[3] + 2LL);
    v13[4] = v15;
    if ( v10 + v4 < v4 || v10 + v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, (const void *)v4, v10);
  }
  return (struct _DRIVER_INFO_2W *)v13;
}
