/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x140591E50
 * Callers:
 *     PiDqActionDataCreate @ 0x140592404 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406DAB50 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqOpenObjectRegKey @ 0x1406DAEA4 (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  PVOID PoolWithTag; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r8d
  _DWORD *v16; // rdi
  int v17; // r9d
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a7, 0x58706E50u);
  *a8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_11;
  }
  PiPnpRtlBeginOperation(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_11;
  v13 = (unsigned int)*a9;
  v14 = a6 + 20;
  while ( 1 )
  {
    v15 = 0;
    v16 = (_DWORD *)(*a8 + 48 * v13);
    if ( !*(_DWORD *)v14 )
      goto LABEL_5;
    if ( *(_DWORD *)v14 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, (__int64)&Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v14 - 20);
      v20 = *(_OWORD *)(v14 - 4);
      v16[8] = 0;
      *((_QWORD *)v16 + 5) = 0LL;
      v16[9] = 0;
      *((_OWORD *)v16 + 1) = v20;
      goto LABEL_9;
    }
    v15 = (int)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_11;
    v17 = a6 + 32 * v12;
    v18 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, v15, v17, *(_DWORD *)v14, a5, v16)
        : PiDqPnPGetObjectProperty(a3, v10, v15, v17, *(_DWORD *)v14, *(NTSTRSAFE_PCWSTR *)(v14 + 4), (__int64)v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_11;
LABEL_9:
    ++*a9;
    ++v12;
    v13 = (unsigned int)*a9;
    v14 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_11;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_11:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)v9;
}
