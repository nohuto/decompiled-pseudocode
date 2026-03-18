/*
 * XREFs of PiCMGetObjectProperty @ 0x1405BCB40
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     PiCMCapturePropertyInputData @ 0x1405BCDB0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1405BD070 (PiCMReleasePropertyInputData.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  PVOID PoolWithTag; // rsi
  int v12; // eax
  __int64 v13; // rdx
  signed int v14; // ebx
  __int64 v15; // r12
  unsigned int v16; // edi
  signed int ObjectProperty; // eax
  signed int v18; // eax
  int v20; // ecx
  int v21; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v23; // [rsp+68h] [rbp-61h]
  _QWORD v24[10]; // [rsp+70h] [rbp-59h] BYREF

  v6 = a6;
  v23 = a6;
  memset(v24, 0, 0x48uLL);
  *a6 = 0;
  PoolWithTag = 0LL;
  v21 = 0;
  v22 = 0;
  v12 = PiCMCapturePropertyInputData(a1, a2, a5, v24);
  v13 = 0LL;
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_23;
  v15 = v24[2];
  if ( v24[2] && !HIDWORD(v24[0]) && !v24[7] && !LODWORD(v24[8]) && !LODWORD(v24[6]) )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v14 = -1073741811;
      goto LABEL_35;
    }
    v16 = 0;
    if ( SLODWORD(v24[1]) <= 6 )
    {
      switch ( LODWORD(v24[1]) )
      {
        case 6:
          v16 = 6;
          break;
        case 1:
          v16 = 1;
          break;
        case 2:
          v16 = 2;
          break;
        case 3:
          v16 = 4;
          break;
        case 4:
          v16 = 3;
          break;
        case 5:
          v16 = 5;
          break;
        default:
LABEL_32:
          if ( !v16 )
            v14 = -1073741811;
          break;
      }
      if ( v14 < 0 )
        goto LABEL_35;
      if ( a4 != 20 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 - 20, 0x34706E50u);
        if ( !PoolWithTag )
          v14 = -1073741670;
      }
      if ( v14 < 0 )
        goto LABEL_35;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v15,
                         v16,
                         0LL,
                         0LL,
                         (__int64)&v24[3] + 4,
                         (__int64)&v21,
                         (__int64)PoolWithTag,
                         a4 - 20,
                         (__int64)&v22,
                         0);
      v6 = v23;
      v14 = ObjectProperty;
      goto LABEL_19;
    }
    switch ( LODWORD(v24[1]) )
    {
      case 0x10001:
        v20 = 7;
        break;
      case 0x10002:
        v20 = 8;
        break;
      case 0x10003:
        v20 = 9;
        break;
      case 0x10004:
        v20 = 10;
        break;
      case 0x10005:
        v20 = 11;
        break;
      default:
        goto LABEL_32;
    }
    v16 = PiDrvDbCtx != 0 ? v20 : 0;
    goto LABEL_32;
  }
  v14 = -1073741811;
LABEL_19:
  if ( v14 >= 0 )
  {
    v18 = PiCMReturnBufferResultData(v14, v22, v21, PoolWithTag, v22, SHIDWORD(v24[8]), a3, a4, v6);
    goto LABEL_21;
  }
LABEL_35:
  v18 = PiCMReturnBufferResultData(v14, v22, v21, 0LL, 0, SHIDWORD(v24[8]), a3, a4, v23);
LABEL_21:
  v14 = v18;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  PiCMReleasePropertyInputData(v24, v13);
  return (unsigned int)v14;
}
