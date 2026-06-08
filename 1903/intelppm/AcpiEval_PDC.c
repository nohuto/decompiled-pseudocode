/*
 * XREFs of AcpiEval_PDC @ 0x1C0030630
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C001F438 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PDC(__int64 a1, const void *a2, unsigned __int16 a3)
{
  unsigned int v6; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v6 = a3 + 24;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x20000u);
    return (unsigned int)v9;
  }
  *(_DWORD *)PoolWithTag = 1130980673;
  *((_DWORD *)PoolWithTag + 1) = 1128550495;
  *((_DWORD *)PoolWithTag + 2) = v6;
  *((_DWORD *)PoolWithTag + 3) = 1;
  *((_WORD *)PoolWithTag + 8) = 2;
  *((_WORD *)PoolWithTag + 9) = a3;
  memcpy_s((char *)PoolWithTag + 20, a3, a2, a3);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x20000u);
  v9 = AcpiEvaluateMethod(a1, 0, v8, (unsigned int **)&P, &v11);
  ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
