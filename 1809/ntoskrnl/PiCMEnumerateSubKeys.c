/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140838EDC
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x140837574 (PiCMCaptureEnumerateInputData.c)
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
  unsigned int v9; // esi
  unsigned int *PoolWithTag; // rbx
  int v11; // edi
  signed int CachedContextBaseKey; // ecx
  int v13; // eax
  unsigned int v15; // edi
  int v16; // edx
  signed int v17; // eax
  _BYTE v18[4]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  ULONG v21; // [rsp+5Ch] [rbp-14h]
  int v22; // [rsp+60h] [rbp-10h]

  v6 = a6;
  a6 = 0LL;
  v9 = 0;
  PoolWithTag = 0LL;
  *v6 = 0;
  v11 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)v18);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v19 )
    goto LABEL_3;
  if ( !a3 || a4 < 0x14 )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_22;
  }
  v15 = a4 - 20;
  if ( a4 - 20 < 2 )
    goto LABEL_3;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
  if ( !PoolWithTag )
  {
    CachedContextBaseKey = -1073741670;
    goto LABEL_4;
  }
  v9 = v15 >> 1;
  a5 = v15 >> 1;
  if ( v20 == 1 )
  {
    v16 = 5;
    goto LABEL_19;
  }
  if ( v20 == 2 )
  {
    v16 = 7;
    goto LABEL_19;
  }
  if ( v20 != 3 )
  {
LABEL_3:
    CachedContextBaseKey = -1073741811;
LABEL_4:
    v13 = PiCMReturnBufferResultData(CachedContextBaseKey, 2 * v9, 0, 0LL, 0, v22, a3, a4, v6);
    goto LABEL_5;
  }
  v16 = 8;
LABEL_19:
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, v16, (__int64)&a6);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v17 = RegRtlEnumKey(a6, v21, PoolWithTag, &a5);
  v9 = a5;
  CachedContextBaseKey = v17;
LABEL_22:
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v13 = PiCMReturnBufferResultData(CachedContextBaseKey, 2 * v9, 0, PoolWithTag, 2 * v9, v22, a3, a4, v6);
LABEL_5:
  v11 = v13;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  return (unsigned int)v11;
}
