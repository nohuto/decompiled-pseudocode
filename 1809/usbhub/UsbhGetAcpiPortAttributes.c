/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C001FFE0
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001F810 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcpiEnumChildren @ 0x1C0020088 (UsbhAcpiEnumChildren.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003DDF8 (UsbhAcpiEvalAcpiMethodEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C004017C (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v5; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // r13
  int v8; // ebx
  unsigned int *v9; // rax
  unsigned int *v10; // rsi
  _DWORD *v11; // rax
  PVOID v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdx
  int v15; // ecx
  unsigned __int16 v16; // r15
  unsigned int v17; // r11d
  const EVENT_DESCRIPTOR *v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-79h]
  int v34; // [rsp+28h] [rbp-71h]
  _DWORD *v35; // [rsp+40h] [rbp-59h]
  int v36; // [rsp+48h] [rbp-51h]
  _DWORD *v37; // [rsp+50h] [rbp-49h]
  _WORD v38[4]; // [rsp+58h] [rbp-41h] BYREF
  _DWORD *v39; // [rsp+60h] [rbp-39h]
  __int64 v40; // [rsp+68h] [rbp-31h]
  int v41; // [rsp+70h] [rbp-29h]
  char v42[4]; // [rsp+78h] [rbp-21h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-1Dh]
  int v44; // [rsp+90h] [rbp-9h]
  _DWORD v45[7]; // [rsp+94h] [rbp-5h]

  v45[5] = 8;
  v44 = 0;
  v45[0] = 1;
  v45[1] = 1;
  v45[2] = 1;
  v45[3] = 4;
  v45[4] = 4;
  v45[6] = 4;
  v37 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(a1, v42, 20LL);
  if ( (_DWORD)result == -2147483643 )
  {
    v5 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 0x14 )
      return 3222536207LL;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x42554855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      v8 = UsbhAcpiEnumChildren(a1, v7, (unsigned int)v5);
      if ( v8 >= 0 )
      {
        v9 = (unsigned int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
        v10 = v9;
        if ( v9 )
        {
          memset(v9, 0, 0x414uLL);
          if ( !*((_QWORD *)v37 + 378) )
          {
            v11 = FdoExt(a1);
            v12 = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    28 * (*((unsigned __int8 *)v11 + 2938) + 1LL),
                    0x42554855u);
            *((_QWORD *)v37 + 378) = v12;
            if ( v12 )
            {
              v13 = FdoExt(a1);
              memset(*((void **)v37 + 378), 0, 28 * (*((unsigned __int8 *)v13 + 2938) + 1LL));
            }
          }
          v14 = v7 + 2;
          v36 = 1;
          if ( v7[1] > 1u )
          {
            while ( 1 )
            {
              v14 = (_DWORD *)((char *)v14 + (unsigned int)v14[1] + 8);
              v35 = v14;
              if ( (*v14 & 1) == 0 )
                goto LABEL_24;
              v15 = v14[1];
              if ( !v15 )
                goto LABEL_24;
              v38[1] = v14[1];
              v39 = v14 + 2;
              v38[0] = v15 - 1;
              v8 = UsbhAcpiEvalAcpiMethodEx(a1, v38, 1380204895LL, v10, v33, v34);
              if ( v8 >= 0 )
                break;
              v8 = 0;
LABEL_23:
              v14 = v35;
LABEL_24:
              if ( (unsigned int)++v36 >= v7[1] )
                goto LABEL_25;
            }
            if ( !v10[2] )
              goto LABEL_23;
            if ( *((_WORD *)v10 + 6) )
              goto LABEL_23;
            v16 = *((_WORD *)v10 + 8);
            if ( !v16 || v16 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
              goto LABEL_23;
            v8 = UsbhAcpiEvalAcpiMethodEx(a1, v38, 1129338207LL, v10, v33, v34);
            if ( v8 < 0 )
              goto LABEL_27;
            v17 = v10[2];
            if ( !v17 )
            {
              v34 = -1072431093;
              v33 = v16;
              UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  38,
                  (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                  v16);
              goto LABEL_23;
            }
            v19 = (unsigned __int64)v10 + v10[1];
            v40 = 0LL;
            v41 = 0;
            v20 = (unsigned __int64)(v10 + 3);
            v21 = 0;
            if ( (unsigned __int64)(v10 + 3) < v19 )
            {
              while ( v21 < v17 )
              {
                if ( v21 >= 4 )
                {
                  v8 = -1072431093;
                  goto LABEL_27;
                }
                if ( *(_WORD *)v20 )
                {
                  v8 = -1072431096;
                  goto LABEL_27;
                }
                v22 = v45[2 * v21];
                v23 = (unsigned int)v45[2 * v21 - 1];
                if ( v22 == 1 )
                {
                  *((_BYTE *)&v40 + v23) = *(_BYTE *)(v20 + 4);
                }
                else
                {
                  if ( v22 != 4 )
                  {
                    v8 = -1072431089;
                    break;
                  }
                  *(_DWORD *)((char *)&v40 + v23) = *(_DWORD *)(v20 + 4);
                }
                LOWORD(v24) = *(_WORD *)(v20 + 2);
                if ( (unsigned __int16)v24 >= 4u )
                  v24 = (unsigned __int16)v24;
                else
                  v24 = 4LL;
                ++v21;
                v20 += v24 + 4;
                if ( v20 >= v19 )
                  break;
              }
            }
            if ( v8 < 0 )
            {
LABEL_27:
              v18 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_29:
              v34 = v8;
              v33 = v16;
              UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v18);
              v8 = 0;
              goto LABEL_23;
            }
            v25 = *((_QWORD *)v37 + 378);
            if ( v25 )
            {
              v26 = v41;
              v27 = 28LL * v16;
              *(_QWORD *)(v27 + v25) = v40;
              *(_DWORD *)(v27 + v25 + 8) = v26;
              *(_DWORD *)(a2 + 4LL * v16) |= 0x20u;
            }
            v28 = *(_DWORD *)(a2 + 4LL * v16) & 0xFFFFFFF0;
            *(_DWORD *)(a2 + 4LL * v16) = v28;
            if ( !(_BYTE)v40 )
            {
              *(_DWORD *)(a2 + 4LL * v16) = v28 | 0x11;
              goto LABEL_23;
            }
            v29 = BYTE1(v40);
            v30 = v28 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 4LL * v16) = v30;
            if ( v29 )
            {
              switch ( v29 )
              {
                case 1:
                  v31 = v30 | 4;
                  break;
                case 2:
                  v31 = v30 | 2;
                  break;
                case 255:
                  v31 = v30 | 8;
                  break;
                default:
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_dD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v29 - 2,
                      v29,
                      39,
                      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                      v16,
                      v29);
                  goto LABEL_58;
              }
              *(_DWORD *)(a2 + 4LL * v16) = v31;
            }
LABEL_58:
            v8 = UsbhAcpiEvalAcpiMethodEx(a1, v38, 1145851999LL, v10, v33, v34);
            if ( v8 >= 0 )
            {
              if ( v10[2] && *((_WORD *)v10 + 6) == 2 && *((_WORD *)v10 + 7) >= 0x10u )
              {
                v32 = *((_QWORD *)v37 + 378);
                if ( v32 )
                {
                  *(_OWORD *)(28LL * v16 + v32 + 12) = *((_OWORD *)v10 + 1);
                  *(_DWORD *)(a2 + 4LL * v16) |= 0x40u;
                }
                if ( (v10[6] & 1) == 0 )
                  *(_DWORD *)(a2 + 4LL * v16) |= 0x10u;
                v37[641] |= 1u;
              }
              else
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    40,
                    (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                    v16);
                v34 = v8;
                v33 = v16;
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
              }
              goto LABEL_23;
            }
            v18 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
            goto LABEL_29;
          }
LABEL_25:
          ExFreePoolWithTag(v10, 0);
        }
        else
        {
          v8 = -1073741670;
        }
      }
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
