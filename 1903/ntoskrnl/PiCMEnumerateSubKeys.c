/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140872748
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F9390 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x140714FB0 (_RegRtlEnumKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x140870CF0 (PiCMCaptureEnumerateInputData.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int *PoolWithTag; // rdi
  int v10; // ebx
  signed int CachedContextBaseKey; // ecx
  int v12; // eax
  unsigned int v14; // ebx
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+68h] [rbp-8h]

  v6 = a6;
  KeyHandle = 0LL;
  a5 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  PoolWithTag = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v10 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)&v19);
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( HIDWORD(v19) )
    goto LABEL_3;
  if ( !a3 || a4 < 0x14 )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_29;
  }
  v14 = a4 - 20;
  if ( a4 - 20 < 2 )
    goto LABEL_3;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
  if ( !PoolWithTag )
  {
    CachedContextBaseKey = -1073741670;
    goto LABEL_4;
  }
  a5 = v14 >> 1;
  if ( (_DWORD)v20 == 1 )
  {
    v15 = 5;
    goto LABEL_19;
  }
  if ( (_DWORD)v20 == 2 )
  {
    v15 = 7;
    goto LABEL_19;
  }
  if ( (_DWORD)v20 != 3 )
  {
LABEL_3:
    CachedContextBaseKey = -1073741811;
LABEL_4:
    v12 = PiCMReturnBufferResultData(CachedContextBaseKey, 2 * a5, 0, 0LL, 0, v21, a3, a4, v6);
    goto LABEL_5;
  }
  v15 = 8;
LABEL_19:
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, v15, (__int64)&KeyHandle);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v16 = HIDWORD(v20);
  v17 = RegRtlEnumKey(KeyHandle, HIDWORD(v20), PoolWithTag, &a5);
  CachedContextBaseKey = v17;
  if ( v17 == -2147483622 )
  {
    if ( (_DWORD)v20 != 3 )
      goto LABEL_4;
    if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
      goto LABEL_4;
    CachedContextBaseKey = PnpCtxRegQueryInfoKey(v17, KeyHandle, (__int64)&a6, 0LL, 0LL, 0LL, 0LL);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_4;
    if ( v16 < (unsigned int)a6 )
    {
      CachedContextBaseKey = -1073741595;
      goto LABEL_4;
    }
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 9, (__int64)&KeyHandle);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_4;
    CachedContextBaseKey = RegRtlEnumKey(KeyHandle, v16 - (unsigned int)a6, PoolWithTag, &a5);
  }
LABEL_29:
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v12 = PiCMReturnBufferResultData(CachedContextBaseKey, 2 * a5, 0, PoolWithTag, 2 * a5, v21, a3, a4, v6);
LABEL_5:
  v10 = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  return (unsigned int)v10;
}
