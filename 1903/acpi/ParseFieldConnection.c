/*
 * XREFs of ParseFieldConnection @ 0x1C006B4D8
 * Callers:
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     ParseName @ 0x1C001D054 (ParseName.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ParsePackageLen @ 0x1C006B83C (ParsePackageLen.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 *a2)
{
  unsigned __int64 *v4; // rsi
  _BYTE *v5; // rax
  unsigned __int64 v6; // rdi
  int v7; // r12d
  const void *v8; // r13
  int v9; // eax
  unsigned __int64 v10; // rbp
  const void *v11; // rbx
  const void *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  int v15; // eax
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  const void *v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  void *v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v27; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v28[10]; // [rsp+38h] [rbp-170h] BYREF
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  memset(v28, 0, sizeof(v28));
  v4 = (unsigned __int64 *)(a1 + 120);
  v5 = *(_BYTE **)(a1 + 120);
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( *v5 == 17 )
  {
    *v4 = (unsigned __int64)(v5 + 1);
    ParsePackageLen(a1 + 120, &v27);
    v9 = ParseIntObj(a1, (_WORD **)(a1 + 120), (__int64)v28, 0);
    v6 = v28[4];
    v10 = v27;
    v11 = (const void *)v9;
    if ( v9 )
    {
      LogError(v9);
      AcpiDiagTraceAmlError(a1, (int)v11);
      v12 = v11;
      v13 = 40;
      v14 = 0LL;
    }
    else
    {
      if ( *v4 <= v27 && v28[4] <= (unsigned int)(v27 - *(_DWORD *)v4 + 1) )
        goto LABEL_8;
      LODWORD(v11) = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v12 = (const void *)v6;
      v14 = (unsigned int)(v10 - *(_DWORD *)v4);
      v13 = 42;
    }
    PrintDebugMessage(v13, v12, (const void *)v14, 0LL, 0LL);
LABEL_8:
    v8 = (const void *)*v4;
    v7 = 2;
    *v4 = v10;
    goto LABEL_21;
  }
  v15 = ParseName(a1, (char **)(a1 + 120), Src);
  v11 = (const void *)v15;
  if ( v15 )
  {
    LogError(v15);
    AcpiDiagTraceAmlError(a1, (int)v11);
    PrintDebugMessage(41, v11, 0LL, 0LL, 0LL);
  }
  else
  {
    v16 = Src;
    v17 = 256LL;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v17;
    }
    while ( v17 );
    LODWORD(v11) = v17 == 0 ? 0xC000000D : 0;
    if ( v17 )
      v18 = 256 - v17;
    else
      v18 = 0LL;
    v19 = v18 & -(__int64)(v17 != 0);
    if ( v19 > 0x100 )
      v6 = 256LL;
    else
      v6 = v19 + 1;
    v7 = 1;
  }
LABEL_21:
  if ( (_DWORD)v11 )
    return (unsigned int)v11;
  v20 = *a2;
  if ( *a2 )
  {
    if ( *(unsigned int *)(v20 + 8) >= v6 )
      goto LABEL_31;
    HeapFree(v20);
    *a2 = 0LL;
  }
  if ( v6 > 0xFFFFFFEF )
  {
    LODWORD(v11) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v21 = (const void *)v6;
    v22 = 39;
LABEL_29:
    PrintDebugMessage(v22, v21, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  v23 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1314407240, (int)v6 + 16);
  *a2 = v23;
  if ( !v23 )
  {
    LODWORD(v11) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v21 = 0LL;
    v22 = 126;
    goto LABEL_29;
  }
  *(_DWORD *)(v23 + 8) = v6;
LABEL_31:
  if ( *a2 )
  {
    *(_DWORD *)(*a2 + 12) = v6;
    *(_DWORD *)*a2 = v7;
    v24 = (void *)(*a2 + 16);
    v25 = *(_DWORD *)(*a2 + 12);
    if ( v7 == 2 )
    {
      memmove(v24, v8, v25);
    }
    else
    {
      memmove(v24, Src, v25 - 1);
      *(_BYTE *)((unsigned int)(*(_DWORD *)(*a2 + 12) - 1) + *a2 + 16) = 0;
    }
  }
  return (unsigned int)v11;
}
