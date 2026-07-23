/*
 * XREFs of PiCMGetObjectProperty @ 0x140598750
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMCapturePropertyInputData @ 0x1405989C0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140598C80 (PiCMReleasePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  PVOID PoolWithTag; // rsi
  int v10; // ebx
  int v11; // r12d
  int v12; // edi
  unsigned int v13; // r14d
  int ObjectProperty; // eax
  int v15; // eax
  int v17; // ecx
  unsigned int v18; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v20; // [rsp+68h] [rbp-61h]
  _BYTE v21[4]; // [rsp+70h] [rbp-59h] BYREF
  int v22; // [rsp+74h] [rbp-55h]
  int v23; // [rsp+78h] [rbp-51h]
  __int64 v24; // [rsp+80h] [rbp-49h]
  _BYTE v25[20]; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  int v28; // [rsp+B0h] [rbp-19h]
  int v29; // [rsp+B4h] [rbp-15h]

  v6 = a6;
  v20 = a6;
  v18 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v19 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, v21);
  if ( v10 < 0 )
    goto LABEL_23;
  v11 = v24;
  if ( v24 && !v22 && !v27 && !v28 && !v26 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_31;
    }
    v12 = 0;
    if ( v23 <= 6 )
    {
      switch ( v23 )
      {
        case 6:
          v12 = 6;
          break;
        case 1:
          v12 = 1;
          break;
        case 2:
          v12 = 2;
          break;
        case 3:
          v12 = 4;
          break;
        case 4:
          v12 = 3;
          break;
        case 5:
          v12 = 5;
          break;
        default:
LABEL_28:
          if ( !v12 )
            v10 = -1073741811;
          break;
      }
      if ( v10 < 0 )
        goto LABEL_31;
      v13 = a4 - 20;
      if ( a4 != 20 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x34706E50u);
        if ( !PoolWithTag )
          v10 = -1073741670;
      }
      if ( v10 < 0 )
        goto LABEL_31;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         v11,
                         v12,
                         0,
                         0LL,
                         (__int64)v25,
                         (__int64)&v18,
                         (__int64)PoolWithTag,
                         v13,
                         (__int64)&v19,
                         0);
      v6 = v20;
      v10 = ObjectProperty;
      goto LABEL_19;
    }
    switch ( v23 )
    {
      case 65537:
        v17 = 7;
        break;
      case 65538:
        v17 = 8;
        break;
      case 65539:
        v17 = 9;
        break;
      case 65540:
        v17 = 10;
        break;
      case 65541:
        v17 = 11;
        break;
      default:
        goto LABEL_28;
    }
    v12 = PiDrvDbCtx != 0 ? v17 : 0;
    goto LABEL_28;
  }
  v10 = -1073741811;
LABEL_19:
  if ( v10 >= 0 )
  {
    v15 = PiCMReturnBufferResultData((unsigned int)v10, v19, v18, PoolWithTag, v19, v29, a3, a4, v6);
    goto LABEL_21;
  }
LABEL_31:
  v15 = PiCMReturnBufferResultData((unsigned int)v10, v19, v18, 0LL, 0, v29, a3, a4, v20);
LABEL_21:
  v10 = v15;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  PiCMReleasePropertyInputData(v21);
  return (unsigned int)v10;
}
