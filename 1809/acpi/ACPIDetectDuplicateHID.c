/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001A9C8
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0019F80 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 */

void __fastcall ACPIDetectDuplicateHID(char *BugCheckParameter2)
{
  __int64 v2; // rcx
  char *i; // rax
  char *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  void *v13; // rax
  void *v14; // rcx
  void *v15; // rax
  void *v16; // rcx
  _QWORD v17[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql; // [rsp+70h] [rbp+2Fh]
  __int64 v20; // [rsp+78h] [rbp+37h]
  __int64 v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+88h] [rbp+47h]

  v2 = *((_QWORD *)BugCheckParameter2 + 93);
  if ( v2
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0xA00000000000LL) != 0
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0x2000000000003LL) == 0 )
  {
    v17[1] = 0LL;
    v17[0] = v2 + 752;
    v21 = 768LL;
    SpinLock = &AcpiDeviceTreeLock;
    v22 = 2;
    for ( i = ACPIExtListStartEnum((__int64)v17); ; i = (char *)ACPIExtListEnumNext(v17) )
    {
      v4 = i;
      if ( v20 + v21 == v17[0] )
      {
        if ( !v22 )
          return;
        goto LABEL_15;
      }
      if ( v22 == 1 )
      {
        ACPIInitReferenceDeviceExtension(v20);
        KeReleaseSpinLock(SpinLock, NewIrql);
      }
      if ( !v4 )
        break;
      if ( v4 != BugCheckParameter2
        && (*((_QWORD *)v4 + 1) & 0xA00000000000LL) != 0
        && (*((_QWORD *)v4 + 1) & 0x2080000000003LL) == 0 )
      {
        v5 = (const char *)*((_QWORD *)v4 + 70);
        if ( v5 )
        {
          v6 = (const char *)*((_QWORD *)BugCheckParameter2 + 70);
          if ( v6 )
          {
            if ( strstr(v5, v6) )
            {
              v7 = *((_QWORD *)v4 + 1);
              v8 = *((_QWORD *)BugCheckParameter2 + 1);
              if ( (v7 & 0x1400000000000LL) != 0 && (v8 & 0x1400000000000LL) != 0 )
              {
                v9 = (unsigned __int8 *)*((_QWORD *)v4 + 71);
                v10 = *((_QWORD *)BugCheckParameter2 + 71) - (_QWORD)v9;
                do
                {
                  v11 = v9[v10];
                  v12 = *v9 - v11;
                  if ( v12 )
                    break;
                  ++v9;
                }
                while ( v11 );
                if ( !v12 )
                {
                  v15 = &unk_1C006E28A;
                  v16 = &unk_1C006E28A;
                  if ( (v8 & 0x200000000000LL) != 0 )
                  {
                    v15 = (void *)*((_QWORD *)BugCheckParameter2 + 70);
                    if ( (v8 & 0x400000000000LL) != 0 )
                      v16 = (void *)*((_QWORD *)BugCheckParameter2 + 71);
                  }
                  LOBYTE(v8) = 2;
                  WPP_RECORDER_SF_qqss(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v8,
                    22,
                    13,
                    (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                    (char)v4,
                    (char)BugCheckParameter2,
                    (__int64)v15,
                    (__int64)v16);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v8 | v7) & 0x1400000000000LL) == 0 )
              {
                v13 = &unk_1C006E28A;
                v14 = &unk_1C006E28A;
                if ( (v8 & 0x200000000000LL) != 0 )
                {
                  v13 = (void *)*((_QWORD *)BugCheckParameter2 + 70);
                  if ( (v8 & 0x400000000000LL) != 0 )
                    v14 = (void *)*((_QWORD *)BugCheckParameter2 + 71);
                }
                LOBYTE(v8) = 2;
                WPP_RECORDER_SF_qqss(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v8,
                  22,
                  14,
                  (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                  (char)v4,
                  (char)BugCheckParameter2,
                  (__int64)v13,
                  (__int64)v14);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v22 == 2 )
LABEL_15:
      KeReleaseSpinLock(SpinLock, NewIrql);
  }
}
