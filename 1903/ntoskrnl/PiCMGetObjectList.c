/*
 * XREFs of PiCMGetObjectList @ 0x1406D00D0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     _PnpGetObjectList @ 0x1406D02D8 (_PnpGetObjectList.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 */

__int64 __fastcall PiCMGetObjectList(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r12
  PVOID PoolWithTag; // rsi
  signed int ObjectList; // ebx
  int v13; // r8d
  int v14; // ecx
  int v15; // r9d
  int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  signed int v19; // eax
  _QWORD v21[6]; // [rsp+50h] [rbp-30h] BYREF

  memset(v21, 0, 0x28uLL);
  v10 = a6;
  LODWORD(a6) = 0;
  PoolWithTag = 0LL;
  *v10 = 0;
  ObjectList = PiCMCaptureObjectInputData(a1, a2, a5, v21);
  if ( ObjectList < 0 )
    goto LABEL_24;
  if ( v21[2] || LODWORD(v21[3]) || HIDWORD(v21[0]) || HIDWORD(v21[3]) )
  {
    ObjectList = -1073741811;
    goto LABEL_20;
  }
  if ( !a3 || a4 < 0x14 )
  {
LABEL_47:
    ObjectList = -1073741811;
    goto LABEL_26;
  }
  v14 = v21[1];
  v15 = 1;
  v16 = 0;
  if ( SLODWORD(v21[1]) <= 6 )
  {
    if ( LODWORD(v21[1]) == 6 )
    {
      v16 = 6;
      goto LABEL_13;
    }
    v14 = LODWORD(v21[1]) - 1;
    if ( LODWORD(v21[1]) == 1 )
    {
      v16 = 1;
      ObjectList = -1073741637;
      goto LABEL_13;
    }
    v14 = LODWORD(v21[1]) - 2;
    if ( LODWORD(v21[1]) == 2 )
    {
      v16 = 2;
      goto LABEL_13;
    }
    v14 = LODWORD(v21[1]) - 3;
    if ( LODWORD(v21[1]) == 3 )
    {
      v16 = 4;
      goto LABEL_13;
    }
    v14 = LODWORD(v21[1]) - 4;
    if ( LODWORD(v21[1]) == 4 )
    {
      v16 = 3;
      goto LABEL_13;
    }
    if ( LODWORD(v21[1]) == 5 )
    {
      v16 = 5;
      goto LABEL_13;
    }
  }
  else
  {
    switch ( LODWORD(v21[1]) )
    {
      case 0x10001:
        v14 = 7;
LABEL_11:
        v16 = PiDrvDbCtx != 0 ? v14 : 0;
        goto LABEL_12;
      case 0x10002:
        v14 = 8;
        goto LABEL_11;
      case 0x10003:
        v14 = 9;
        goto LABEL_11;
    }
    v14 = LODWORD(v21[1]) - 65540;
    if ( LODWORD(v21[1]) == 65540 )
    {
      v14 = 10;
      goto LABEL_11;
    }
    if ( LODWORD(v21[1]) == 65541 )
    {
      v14 = 11;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( !v16 )
    goto LABEL_47;
LABEL_13:
  if ( ObjectList < 0 )
    goto LABEL_26;
  v17 = 0;
  if ( a4 - 20 >= 2 )
    v17 = a4 - 20;
  if ( v17 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectList = -1073741670;
      goto LABEL_26;
    }
    v18 = v17 >> 1;
  }
  else
  {
    v18 = 0;
  }
  LODWORD(a6) = v18;
  ObjectList = PnpGetObjectList(v14, v16, v13, v15, (__int64)PoolWithTag, v18, (__int64)&a6, 0);
LABEL_20:
  if ( ObjectList >= 0 )
  {
    v19 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, PoolWithTag, 2 * (int)a6, v21[4], a3, a4, v10);
    goto LABEL_22;
  }
LABEL_26:
  v19 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, 0LL, 0, v21[4], a3, a4, v10);
LABEL_22:
  ObjectList = v19;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_24:
  PiCMReleaseObjectInputData(v21);
  return (unsigned int)ObjectList;
}
