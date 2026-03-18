/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x1C002A69C
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C002A514 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C005D70C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C005D920 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddiiii @ 0x1C005DA18 (WPP_RECORDER_SF_ddiiii.c)
 *     WPP_RECORDER_SF_diiidiiii @ 0x1C005DB70 (WPP_RECORDER_SF_diiidiiii.c)
 */

int ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, ...)
{
  _UNKNOWN **v2; // rax
  ULONG_PTR v3; // rbx
  _DWORD *v4; // rbp
  char v5; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  ULONGLONG v9; // r8
  unsigned int v10; // esi
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ecx
  char v15; // di
  char v16; // r15
  char v17; // bp
  int v18; // r9d
  int MinimumAddress; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  ULONGLONG v22; // [rsp+78h] [rbp-50h] BYREF
  _UNKNOWN **v23; // [rsp+80h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  ULONGLONG Alignment; // [rsp+E0h] [rbp+18h] BYREF
  va_list Alignmenta; // [rsp+E0h] [rbp+18h]
  _DWORD *v27; // [rsp+E8h] [rbp+20h]
  va_list va1; // [rsp+F0h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(Alignmenta, a2);
  Alignment = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v2 = &retaddr;
  v3 = E820Info;
  v4 = v27;
  v5 = a2;
  if ( E820Info )
  {
    v7 = 32LL * a2;
    v2 = (_UNKNOWN **)RtlIoDecodeMemIoResource(
                        (PIO_RESOURCE_DESCRIPTOR)(v7 + a1 + 8),
                        (PULONGLONG)Alignmenta,
                        &v22,
                        &v21);
    v10 = 0;
    v23 = v2;
    v11 = (int)v2;
    if ( *(_QWORD *)(v3 + 8) )
    {
      v12 = 0LL;
      do
      {
        v13 = 3 * v12;
        v14 = *(_DWORD *)(v3 + 24 * v12 + 32);
        if ( v14 == 2 )
          goto LABEL_5;
        LODWORD(v2) = v14 - 3;
        if ( (unsigned int)(v14 - 3) <= 1 && *(_DWORD *)(v3 + 8 * v13 + 28) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v2) = WPP_RECORDER_SF_ddi(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v8,
                            v9,
                            v11,
                            MinimumAddress,
                            v10,
                            v14,
                            *(_QWORD *)(v3 + 8 * v13 + 24));
            v11 = (int)v23;
          }
          *(_DWORD *)(v3 + 8 * v13 + 28) = 0;
        }
        v8 = *(_QWORD *)(v3 + 8 * v13 + 16);
        if ( v21 < v8 )
          goto LABEL_5;
        v9 = v8 + *(_QWORD *)(v3 + 8 * v13 + 24);
        if ( v22 >= v9 )
          goto LABEL_5;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diiidiiii(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            v9,
            v11,
            MinimumAddress,
            v10,
            *(_DWORD *)(v3 + 8 * v13 + 32),
            v8,
            v9,
            v5,
            *(_QWORD *)(v7 + a1 + 24),
            *(_QWORD *)(v7 + a1 + 32),
            v11,
            Alignment);
        LODWORD(v2) = AcpiOverrideAttributes;
        if ( (AcpiOverrideAttributes & 1) != 0 && *(_DWORD *)(v3 + 8 * v13 + 32) == 4 )
        {
          v2 = *(_UNKNOWN ***)(v3 + 8 * v13 + 16);
          if ( v21 < (unsigned __int64)v2 )
            goto LABEL_24;
          v15 = v22;
          if ( v22 >= (unsigned __int64)v2 )
            goto LABEL_24;
          v16 = (_BYTE)v2 - 1;
          v17 = (_BYTE)v2 - v22;
          LODWORD(v2) = RtlIoEncodeMemIoResource(
                          (PIO_RESOURCE_DESCRIPTOR)(v7 + a1 + 8),
                          *(_BYTE *)(v7 + a1 + 9),
                          (ULONGLONG)v2 - v22,
                          Alignment,
                          v22,
                          (ULONGLONG)v2 - 1);
          if ( (int)v2 < 0 )
            return (int)v2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v2) = WPP_RECORDER_SF_ddiiii(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v8,
                            v9,
                            v18,
                            MinimumAddress,
                            v5,
                            v5,
                            v15,
                            v16,
                            v17,
                            Alignment);
LABEL_24:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v8) = 4;
              LODWORD(v2) = WPP_RECORDER_SF_d(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v8,
                              22,
                              13,
                              (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids,
                              v10);
            }
          }
        }
        else
        {
          ++*v4;
        }
LABEL_5:
        v4 = v27;
        ++v10;
        v11 = (int)v23;
        v12 = v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(v3 + 8) );
    }
  }
  return (int)v2;
}
