/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x1408724CC
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCE40 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectPropertyKeys @ 0x140937828 (_PnpGetObjectPropertyKeys.c)
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
  int v13; // edi
  int v14; // ecx
  SIZE_T v15; // rdx
  unsigned __int64 v16; // rbx
  signed int v17; // eax
  unsigned __int64 v19; // rdx
  _QWORD v20[6]; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+C8h] [rbp+48h]

  memset(v20, 0, 0x28uLL);
  PoolWithTag = 0LL;
  v21 = 0;
  *a6 = 0;
  ObjectPropertyKeys = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v20);
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_42;
  if ( !v20[2] || HIDWORD(v20[0]) || HIDWORD(v20[3]) )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_48;
  }
  if ( !a3 || a4 < 0x14 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_39;
  }
  v13 = 0;
  if ( SLODWORD(v20[1]) > 6 )
  {
    switch ( LODWORD(v20[1]) )
    {
      case 0x10001:
        v14 = 7;
        break;
      case 0x10002:
        v14 = 8;
        break;
      case 0x10003:
        v14 = 9;
        break;
      case 0x10004:
        v14 = 10;
        break;
      case 0x10005:
        v14 = 11;
        break;
      default:
        goto LABEL_31;
    }
    v13 = PiDrvDbCtx != 0 ? v14 : 0;
LABEL_31:
    if ( !v13 )
      ObjectPropertyKeys = -1073741811;
    goto LABEL_33;
  }
  switch ( LODWORD(v20[1]) )
  {
    case 6:
      v13 = 6;
      goto LABEL_33;
    case 1:
      v13 = 1;
      goto LABEL_33;
    case 2:
      v13 = 2;
      goto LABEL_33;
    case 3:
      v13 = 4;
      goto LABEL_33;
    case 4:
      v13 = 3;
      goto LABEL_33;
  }
  if ( LODWORD(v20[1]) != 5 )
    goto LABEL_31;
  v13 = 5;
LABEL_33:
  if ( ObjectPropertyKeys < 0 )
  {
LABEL_39:
    v17 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v21, 0, 0LL, 0, v20[4], a3, a4, a6);
    goto LABEL_40;
  }
  v15 = 0LL;
  if ( a4 - 20 >= 0x14 )
    v15 = a4 - 20;
  if ( (_DWORD)v15 )
  {
    v16 = (unsigned int)v15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectPropertyKeys = -1073741670;
      goto LABEL_39;
    }
    v19 = v16 / 0x14;
  }
  else
  {
    LODWORD(v19) = 0;
  }
  v21 = v19;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v20[2], v13, 0);
LABEL_48:
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_39;
  v17 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v21, 0, PoolWithTag, 20 * v21, v20[4], a3, a4, a6);
LABEL_40:
  ObjectPropertyKeys = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_42:
  PiCMReleaseObjectInputData((__int64)v20);
  return (unsigned int)ObjectPropertyKeys;
}
