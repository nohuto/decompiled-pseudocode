/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x1C0020D30
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C0020500 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcpiEnumChildren @ 0x1C0020DF4 (UsbhAcpiEnumChildren.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003F390 (UsbhAcpiEvalAcpiMethodEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00417A4 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  void **v4; // r15
  __int64 result; // rax
  size_t v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r13
  int v9; // ebx
  unsigned int *v10; // rax
  unsigned int *v11; // rsi
  _DWORD *v12; // rax
  PVOID v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  unsigned __int16 v16; // r15
  unsigned int v17; // r11d
  const EVENT_DESCRIPTOR *v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  char *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r8d
  unsigned int v30; // ecx
  int v31; // ecx
  void **v32; // r15
  char *v33; // rcx
  int v34; // [rsp+20h] [rbp-79h]
  int v35; // [rsp+28h] [rbp-71h]
  _DWORD *v36; // [rsp+40h] [rbp-59h]
  int v37; // [rsp+48h] [rbp-51h]
  __int64 v38; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v39; // [rsp+58h] [rbp-41h]
  void **v40; // [rsp+60h] [rbp-39h]
  __int64 v41; // [rsp+68h] [rbp-31h]
  int v42; // [rsp+70h] [rbp-29h]
  SIZE_T NumberOfBytes[2]; // [rsp+78h] [rbp-21h] BYREF
  int v44; // [rsp+88h] [rbp-11h]
  int v45; // [rsp+90h] [rbp-9h]
  _DWORD v46[7]; // [rsp+94h] [rbp-5h]

  v46[5] = 8;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v44 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v46[0] = 1;
  v46[1] = 1;
  v46[2] = 1;
  v46[3] = 4;
  v46[4] = 4;
  v46[6] = 4;
  v45 = 0;
  v40 = (void **)FdoExt(a1);
  v4 = v40;
  result = UsbhAcpiEnumChildren(a1, NumberOfBytes, 20LL);
  if ( (_DWORD)result == -2147483643 )
  {
    v6 = HIDWORD(NumberOfBytes[0]);
    if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
      return 3222536207LL;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, HIDWORD(NumberOfBytes[0]), 0x42554855u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v9 = UsbhAcpiEnumChildren(a1, v8, (unsigned int)v6);
      if ( v9 >= 0 )
      {
        v10 = (unsigned int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x414uLL, 0x42554855u);
        v11 = v10;
        if ( v10 )
        {
          memset(v10, 0, 0x414uLL);
          if ( !v40[378] )
          {
            v12 = FdoExt(a1);
            v13 = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    28 * (*((unsigned __int8 *)v12 + 2938) + 1LL),
                    0x42554855u);
            v40[378] = v13;
            if ( v13 )
            {
              v14 = FdoExt(a1);
              memset(v4[378], 0, 28 * (*((unsigned __int8 *)v14 + 2938) + 1LL));
            }
          }
          v15 = v8 + 2;
          v37 = 1;
          if ( v8[1] > 1u )
          {
            while ( 1 )
            {
              v15 = (_DWORD *)((char *)v15 + (unsigned int)v15[1] + 8);
              v36 = v15;
              if ( (*v15 & 1) == 0 || !v15[1] )
                goto LABEL_25;
              v39 = v15 + 2;
              WORD1(v38) = *((_WORD *)v15 + 2);
              LOWORD(v38) = WORD1(v38) - 1;
              v9 = UsbhAcpiEvalAcpiMethodEx(a1, &v38, 1380204895LL, v11, v34, v35);
              if ( v9 >= 0 )
                break;
              v9 = 0;
LABEL_24:
              v15 = v36;
LABEL_25:
              if ( (unsigned int)++v37 >= v8[1] )
                goto LABEL_26;
            }
            if ( !v11[2] )
              goto LABEL_24;
            if ( *((_WORD *)v11 + 6) )
              goto LABEL_24;
            v16 = *((_WORD *)v11 + 8);
            if ( !v16 || v16 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
              goto LABEL_24;
            v9 = UsbhAcpiEvalAcpiMethodEx(a1, &v38, 1129338207LL, v11, v34, v35);
            if ( v9 < 0 )
              goto LABEL_28;
            v17 = v11[2];
            if ( !v17 )
            {
              v35 = -1072431093;
              v34 = v16;
              UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    38,
                    (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                    v16);
              }
              goto LABEL_24;
            }
            v19 = (unsigned __int64)v11 + v11[1];
            v41 = 0LL;
            v42 = 0;
            v20 = (unsigned __int64)(v11 + 3);
            v21 = 0;
            if ( (unsigned __int64)(v11 + 3) < v19 )
            {
              while ( v21 < v17 )
              {
                if ( v21 >= 4 )
                {
                  v9 = -1072431093;
                  goto LABEL_28;
                }
                if ( *(_WORD *)v20 )
                {
                  v9 = -1072431096;
                  goto LABEL_28;
                }
                v22 = v46[2 * v21];
                v23 = (unsigned int)v46[2 * v21 - 1];
                if ( v22 == 1 )
                {
                  *((_BYTE *)&v41 + v23) = *(_BYTE *)(v20 + 4);
                }
                else
                {
                  if ( v22 != 4 )
                  {
                    v9 = -1072431089;
                    break;
                  }
                  *(_DWORD *)((char *)&v41 + v23) = *(_DWORD *)(v20 + 4);
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
            if ( v9 < 0 )
            {
LABEL_28:
              v18 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_30:
              v35 = v9;
              v34 = v16;
              UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v18);
              v9 = 0;
              goto LABEL_24;
            }
            v25 = v16;
            v26 = (char *)v40[378];
            if ( v26 )
            {
              v27 = v42;
              v28 = 28LL * v16;
              *(_QWORD *)&v26[v28] = v41;
              *(_DWORD *)&v26[v28 + 8] = v27;
              *(_DWORD *)(a2 + 4LL * v16) |= 0x20u;
            }
            if ( !(_BYTE)v41 )
            {
              *(_DWORD *)(a2 + 4LL * v16) = *(_DWORD *)(a2 + 4LL * v16) & 0xFFFFFFE0 | 0x11;
              goto LABEL_24;
            }
            v29 = BYTE1(v41);
            v30 = *(_DWORD *)(a2 + 4LL * v16) & 0xFFFFFFE0;
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
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    WPP_RECORDER_SF_dD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v29 - 2,
                      v29,
                      39,
                      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                      v16,
                      v29);
                  }
                  goto LABEL_60;
              }
              *(_DWORD *)(a2 + 4LL * v16) = v31;
            }
LABEL_60:
            v9 = UsbhAcpiEvalAcpiMethodEx(a1, &v38, 1145851999LL, v11, v34, v35);
            if ( v9 >= 0 )
            {
              if ( v11[2] && *((_WORD *)v11 + 6) == 2 && *((_WORD *)v11 + 7) >= 0x10u )
              {
                v32 = v40;
                v33 = (char *)v40[378];
                if ( v33 )
                {
                  *(_OWORD *)&v33[28 * v25 + 12] = *((_OWORD *)v11 + 1);
                  *(_DWORD *)(a2 + 4 * v25) |= 0x40u;
                }
                if ( (v11[6] & 1) == 0 )
                  *(_DWORD *)(a2 + 4 * v25) |= 0x10u;
                *((_DWORD *)v32 + 641) |= 1u;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    40,
                    (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
                    v16);
                }
                v35 = v9;
                v34 = v16;
                UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE);
              }
              goto LABEL_24;
            }
            v18 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
            goto LABEL_30;
          }
LABEL_26:
          ExFreePoolWithTag(v11, 0);
        }
        else
        {
          v9 = -1073741670;
        }
      }
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
