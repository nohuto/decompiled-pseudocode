/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x140839484
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectPropertyKeys @ 0x1408FB434 (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  PVOID PoolWithTag; // rsi
  signed int ObjectPropertyKeys; // ebx
  int v11; // edi
  int v12; // ecx
  SIZE_T v13; // rdx
  unsigned __int64 v14; // rbx
  signed int v15; // eax
  unsigned __int64 v17; // rdx
  char v18[4]; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+54h] [rbp-2Ch]
  int v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-14h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+C8h] [rbp+48h]

  PoolWithTag = 0LL;
  v24 = 0;
  *a6 = 0;
  ObjectPropertyKeys = PiCMCaptureObjectInputData(a1, a2, a5, v18);
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_42;
  if ( !v21 || v19 || v22 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_48;
  }
  if ( !a3 || a4 < 0x14 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_39;
  }
  v11 = 0;
  if ( v20 > 6 )
  {
    switch ( v20 )
    {
      case 65537:
        v12 = 7;
        break;
      case 65538:
        v12 = 8;
        break;
      case 65539:
        v12 = 9;
        break;
      case 65540:
        v12 = 10;
        break;
      case 65541:
        v12 = 11;
        break;
      default:
        goto LABEL_31;
    }
    v11 = PiDrvDbCtx != 0 ? v12 : 0;
LABEL_31:
    if ( !v11 )
      ObjectPropertyKeys = -1073741811;
    goto LABEL_33;
  }
  switch ( v20 )
  {
    case 6:
      v11 = 6;
      goto LABEL_33;
    case 1:
      v11 = 1;
      goto LABEL_33;
    case 2:
      v11 = 2;
      goto LABEL_33;
    case 3:
      v11 = 4;
      goto LABEL_33;
    case 4:
      v11 = 3;
      goto LABEL_33;
  }
  if ( v20 != 5 )
    goto LABEL_31;
  v11 = 5;
LABEL_33:
  if ( ObjectPropertyKeys < 0 )
  {
LABEL_39:
    v15 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v24, 0, 0LL, 0, v23, a3, a4, a6);
    goto LABEL_40;
  }
  v13 = 0LL;
  if ( a4 - 20 >= 0x14 )
    v13 = a4 - 20;
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)v13;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectPropertyKeys = -1073741670;
      goto LABEL_39;
    }
    v17 = v14 / 0x14;
  }
  else
  {
    LODWORD(v17) = 0;
  }
  v24 = v17;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v21, v11, 0);
LABEL_48:
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_39;
  v15 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v24, 0, PoolWithTag, 20 * v24, v23, a3, a4, a6);
LABEL_40:
  ObjectPropertyKeys = v15;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_42:
  PiCMReleaseObjectInputData((__int64)v18);
  return (unsigned int)ObjectPropertyKeys;
}
