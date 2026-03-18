/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C00120AC
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000F6E0 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v1; // rdx
  __int64 i; // rax
  _QWORD *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  void *v13; // rax
  void *v14; // r8
  void *v15; // rax
  void *v16; // r8
  _QWORD v17[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql[16]; // [rsp+70h] [rbp+2Fh]
  __int64 v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+88h] [rbp+47h]
  int v22; // [rsp+8Ch] [rbp+4Bh]

  v22 = 0;
  v1 = BugCheckParameter2[93];
  *(_OWORD *)NewIrql = 0LL;
  if ( v1 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v17[1] = 0LL;
    v17[0] = v1 + 752;
    v20 = 768LL;
    SpinLock = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = ACPIExtListStartEnum(v17); ; i = ACPIExtListEnumNext(v17) )
    {
      v4 = (_QWORD *)i;
      if ( *(_QWORD *)&NewIrql[8] + v20 == v17[0] )
      {
        if ( !v21 )
          return;
        goto LABEL_15;
      }
      if ( v21 == 1 )
      {
        ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      }
      if ( !v4 )
        break;
      if ( v4 != BugCheckParameter2 && (v4[1] & 0xA00000000000LL) != 0 && (v4[1] & 0x2080000000003LL) == 0 )
      {
        v5 = (const char *)v4[70];
        if ( v5 )
        {
          v6 = (const char *)BugCheckParameter2[70];
          if ( v6 )
          {
            if ( strstr(v5, v6) )
            {
              v7 = v4[1];
              v8 = BugCheckParameter2[1];
              if ( (v7 & 0x1400000000000LL) != 0 && (v8 & 0x1400000000000LL) != 0 )
              {
                v9 = (unsigned __int8 *)v4[71];
                v10 = BugCheckParameter2[71] - (_QWORD)v9;
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
                  v15 = &unk_1C006FE7D;
                  v16 = &unk_1C006FE7D;
                  if ( (v8 & 0x200000000000LL) != 0 )
                  {
                    v15 = (void *)BugCheckParameter2[70];
                    if ( (v8 & 0x400000000000LL) != 0 )
                      v16 = (void *)BugCheckParameter2[71];
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
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
                  }
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v8 | v7) & 0x1400000000000LL) == 0 )
              {
                v13 = &unk_1C006FE7D;
                v14 = &unk_1C006FE7D;
                if ( (v8 & 0x200000000000LL) != 0 )
                {
                  v13 = (void *)BugCheckParameter2[70];
                  if ( (v8 & 0x400000000000LL) != 0 )
                    v14 = (void *)BugCheckParameter2[71];
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
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
                }
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v21 == 2 )
LABEL_15:
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
  }
}
