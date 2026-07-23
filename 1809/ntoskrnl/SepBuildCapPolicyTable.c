/*
 * XREFs of SepBuildCapPolicyTable @ 0x140181A18
 * Callers:
 *     SepRmCapUpdateWrkr @ 0x140737F40 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14016A670 (RtlpCreateHashTable.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepRegOpenKey @ 0x1407381E0 (SepRegOpenKey.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 *     SepRmDestroyCapTable @ 0x1408A610C (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepBuildCapPolicyTable(__int64 a1, _QWORD *a2)
{
  int inserted; // ebx
  int v4; // edi
  PVOID v6; // rdi
  PVOID PoolWithTag; // rax
  _DWORD *v8; // rbx
  PVOID v9; // rax
  char HashTable; // al
  PVOID v11; // rsi
  HANDLE v12; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-8h] BYREF
  PVOID v14; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h]
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  KeyHandle = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  P = 0LL;
  LODWORD(v14) = 0;
  if ( (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies",
              0x201u,
              &KeyHandle) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
              0x201u,
              &v12) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
              0x201u,
              &Handle) < 0 )
  {
    inserted = 0;
    goto LABEL_6;
  }
  inserted = SepReadAndPopulateCapes(v12);
  if ( inserted < 0 )
    goto LABEL_14;
  v4 = (int)v14;
  if ( !(_DWORD)v14 )
    goto LABEL_6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x70536553u);
  v14 = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inserted = -1073741670;
LABEL_14:
    v6 = P;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0x40uLL);
  v9 = P;
  v8[12] = v4;
  *((_QWORD *)v8 + 7) = v9;
  v6 = 0LL;
  HashTable = RtlpCreateHashTable((_RTL_DYNAMIC_HASH_TABLE **)&v14, 0x80u, 0, 0);
  v11 = v14;
  if ( HashTable )
  {
    inserted = SepReadAndInsertCaps(Handle);
    if ( inserted >= 0 )
    {
      *a2 = v11;
      goto LABEL_6;
    }
  }
  else
  {
    inserted = -1073741670;
  }
  if ( !v11 )
    goto LABEL_6;
  SepRmDestroyCapTable(v11);
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x70536553u);
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    ZwClose(v12);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inserted;
}
